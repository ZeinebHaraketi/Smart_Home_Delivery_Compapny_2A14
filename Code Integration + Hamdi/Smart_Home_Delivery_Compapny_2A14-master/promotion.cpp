#include "promotion.h"
#include<QtSql/QSqlQuery>
#include<QDebug>
#include<QObject>
#include<QString>
#include<QtSql/QSqlQueryModel>
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

promotion::promotion(int id,int pourcentage,int delai,QString date_pro)
{   this->pourcentage=pourcentage;
    this->delai=delai;
    this->date_pro=date_pro;
    this->id=id;

}

//SETTERS
void promotion::setpourcentage(int pourcentage)
{this->pourcentage=pourcentage;}
void promotion::setdelai(int delai)
{this->delai=delai;}
void promotion::setdate_pro(QString date_pro)
{this->date_pro=date_pro;}
void promotion::setid(int id)
{this->id=id;}

//CRUD
//-------------------------------- AJOUT --------------------------------------//
bool promotion::ajouter_pro()
{
           QSqlQuery query;
           // QString res=QString::number(delai);
                  query.prepare("INSERT INTO PROMOTION (ID,POURCENTAGE,DELAI,DATE_PRO) ""VALUES (:id, :pourcentage, :delai, :date_pro)");
                  query.bindValue(":id",getid());
                  query.bindValue(":pourcentage",getpourcentage());
                  query.bindValue(":delai",getdelai());
                  query.bindValue(":date_pro",getdate_pro());
                  return query.exec();

}

//-------------------------------- AFFICHER --------------------------------------//
QSqlQueryModel* promotion::afficher_1()
{QSqlQueryModel* model=new QSqlQueryModel();


    model->setQuery("SELECT* FROM PROMOTION");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("pourcentage"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("delai"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_pro"));
    return model;}

//--------------------------- MODIFIER -------------------------------------------//
bool promotion::modifier_1(Ui::GestionMarkt *ui)
{
    QSqlQuery query;
       int id= ui->l_modif_id->text().toInt();
       int pcent= ui->l_modif_Pcent->text().toInt();
       int delai= ui->l_modif_delai->text().toInt();
       QString date= ui->l_modif_DateP->text();
       promotion P(id,pcent,delai,date);

       query.prepare(" UPDATE PROMOTION SET ID= '"+QString::number(id)+"',POURCENTAGE= '"+QString::number(pcent)+"',DELAI= '"+QString::number(delai)+"',DATE_PRO= '"+date+"' WHERE  ID= '"+QString::number(id)+"'");
       query.bindValue(":id",getid());
       query.bindValue(":pourcentage",getpourcentage());
       query.bindValue(":delai",getdelai());
       query.bindValue(":date_pro",getdate_pro());

           return query.exec();


}

//-------------------- SUPPRIMER ------------------------------//
bool promotion::supprimer_1(Ui::GestionMarkt *ui)
{  QSqlQuery query;
    int idp= ui->l_supp_Id->text().toInt();
    promotion P(idp,0,0,"");

    query.prepare(" DELETE FROM PROMOTION WHERE  ID= '"+QString::number(idp)+"'");
    query.bindValue(":id",getid());
    query.bindValue(":pourcentage",getpourcentage());
    query.bindValue(":delai",getdelai());
    query.bindValue(":date_pro",getdate_pro());
          return query.exec();
}

//------------------------ RECHERCHER -------------------------------------//
void promotion::RechercherPRO(int idp){
    QSqlQuery query2;

    query2.prepare(" SELECT * FROM PROMOTION WHERE  ID= '"+QString::number(idp)+"'");
    query2.exec();

    while(query2.next()){
        id= query2.value(0).toInt();
        pourcentage= query2.value(1).toInt();
        delai= query2.value(2).toInt();
        date_pro= query2.value(3).toString();

    }
}
