#include "article.h"
#include<QtSql/QSqlQuery>
#include<QDebug>
#include<QObject>
#include<QString>
#include<QtSql/QSqlQueryModel>
article::article()
{
prix=0;quantite=0;type_ar="";code=0;
}
article::article(int prix,int quantite,QString type_ar,int code)
{   this->prix=prix;
    this->quantite=quantite;
    this->type_ar=type_ar;
    this->code=code;
//prix
}
int article::getprix()
{return prix ;}
int article::getquantite()
{return quantite;}
QString article::gettype_ar()
{return type_ar;}
int article::getcode()
{return code;}
void article::setprix(int prix)
{this->prix=prix;}
void article::setquantite(int quantite)
{this->quantite=quantite;}
void article::settype_ar(QString type_ar)
{this->type_ar=type_ar;}
void article::setcode(int code)
{this->code=code;}


bool article::ajouter_ar()
{
           QSqlQuery query;
            QString res=QString::number(prix);
                  query.prepare("INSERT INTO article (code, type_ar,quantite,prix) " "VALUES (:id, :forename, :surname, :date)");
                  query.bindValue(":id", code);
                  query.bindValue(":forename", type_ar);
                  query.bindValue(":surname", quantite);
                  query.bindValue(":date",res);
                  return query.exec();

}



bool article::supprimer(int id)
{  QSqlQuery query;
    QString res=QString::number(id);
          query.prepare("Delete from article where code=:id");
          query.bindValue(":id", res);
          return query.exec();
}

QSqlQueryModel* article::afficher()
{QSqlQueryModel* model=new QSqlQueryModel();


    model->setQuery("SELECT* FROM article");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type_ar"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("quantite"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));
    return model;}




bool article::modifier()
{
    QSqlQuery query;
     QString res=QString::number(quantite);
           query.prepare("update article set code= :id,quantite= :surname,type_ar= :type,prix= :date where code= :id") ;

           query.bindValue(":id", code);
           query.bindValue(":type", type_ar);
           query.bindValue(":surname", res);
           query.bindValue(":date",prix);
           return query.exec();
}













