#include "plat1.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
plat1::plat1()
{

}
plat1::plat1(QString nomplat,QString ingredients,QString adresse)
{

  this->nomplat=nomplat;
  this->ingredients=ingredients;
    this->adresse=adresse;
}
int plat1::get_ref(){return  ref;}
QString plat1::get_nomplat(){return nomplat;}
QString plat1::get_ingredients(){return ingredients;}
QString plat1::get_adresse(){return adresse;}
QString plat1::get_paymant(){return paymant;}


bool plat1::ajouter(QString nomplat,QString ingredients,QString adresse,QString paymant)
{
QSqlQuery query;
query.prepare("INSERT INTO plat1 ( nomplat, ingredients,adresse,paymant) "
                    "VALUES (:nomplat,:ingredients,:adresse,:paymant)");

query.bindValue(":nomplat",nomplat);
query.bindValue(":ingredients",ingredients);
query.bindValue(":adresse",adresse);
query.bindValue(":paymant",paymant);
return    query.exec();
}

QSqlQueryModel * plat1 ::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from plat1 ");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nomplat "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("ingredients"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("paymant"));
return model;
}

/*************** */
bool plat1:: updatenomplats(QString nomplat)
{

QSqlQuery query;
query.prepare ("update plat1 set ingredients=:ingredients,adresse=:adresse where nomplat=:nomplat ");
query.bindValue (":nomplat ",nomplat );
query.bindValue (":ingredients",ingredients);
query.bindValue (":adresse", adresse );
return query.exec();
 }

bool plat1::modifier1(Ui::MainWindow *ui)
{
    QMessageBox msgBox ;

   QString nomplat = ui->line6->text();
   QString ingredients= ui->line8->text();
   QString adresse= ui->line15->text();
   plat1 p1(nomplat,ingredients,adresse);
   QSqlQuery query;
   query.prepare ("update plat1 set nomplat ='"+nomplat+"',ingredients ='"+ingredients+"',adresse ='"+adresse+"'where NOMPLAT ='"+nomplat+"'");
   return  (query.exec());

}
