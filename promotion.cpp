#include "promotion.h"
#include<QtSql/QSqlQuery>
#include<QDebug>
#include<QObject>
#include<QString>
#include<QtSql/QSqlQueryModel>


promotion::promotion()
{
pourcentage=0;
delai=0;
date_pro="";
id=0;
}

promotion::promotion(int pourcentage,int delai,QString date_pro,int id)
{   this->pourcentage=pourcentage;
    this->delai=delai;
    this->date_pro=date_pro;
    this->id=id;

}
int promotion::getpourcentage()
{return pourcentage ;}
int promotion::getdelai()
{return delai;}
QString promotion::getdate_pro()
{return date_pro;}
int promotion::getid()
{return id;}
void promotion::setpourcentage(int pourcentage)
{this->pourcentage=pourcentage;}
void promotion::setdelai(int delai)
{this->delai=delai;}
void promotion::setdate_pro(QString date_pro)
{this->date_pro=date_pro;}
void promotion::setid(int id)
{this->id=id;}


bool promotion::ajouter_pro()
{
           QSqlQuery query;
            QString res=QString::number(delai);
                  query.prepare("INSERT INTO promotion (id, date_pro,delai,pourcentage) ""VALUES (:id, :forename, :surname, :date)");
                  query.bindValue(":id",id);
                  query.bindValue(":forename", date_pro);
                  query.bindValue(":surname",res);
                  query.bindValue(":date",pourcentage);
                  return query.exec();

}



bool promotion::supprimer_1(int id)
{  QSqlQuery query;
    QString res=QString::number(id);
          query.prepare("Delete from promotion where id=:id");
          query.bindValue(":id", res);
          return query.exec();
}

QSqlQueryModel* promotion::afficher_1()
{QSqlQueryModel* model=new QSqlQueryModel();


    model->setQuery("SELECT* FROM promotion");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_pro"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("delai"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("pourcentage"));
    return model;}




bool promotion::modifier_1()
{
    QSqlQuery query;
     QString res=QString::number(delai);
           query.prepare("update promotion set id= :id,date_pro= :date2,delai= :surname,pourcentage= :date where id= :id") ;

           query.bindValue(":id", id);
           query.bindValue(":date2", date_pro);
           query.bindValue(":surname", res);
           query.bindValue(":date",pourcentage);
           return query.exec();
}




