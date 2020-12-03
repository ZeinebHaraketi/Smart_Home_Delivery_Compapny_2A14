#include "avis.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"

avis::avis()
{

}
avis::avis(QString nom_produit,QString objA,QString nb_etoiles)
{

  this->nom_produit=nom_produit;
  this->objA=objA;
  this->nb_etoiles = nb_etoiles;
}
int avis::get_ref(){return  ref;}
QString avis::get_nom_produit(){return nom_produit;}
QString avis::get_objA(){return objA;}
QString avis::get_nb_etoiles(){return nb_etoiles;}

bool avis::ajouter(QString nom_produit,QString objA,QString nb_etoiles)
{
QSqlQuery query;
query.prepare("INSERT INTO aviss ( nom_produit,objA,nb_etoiles) "
                    "VALUES (:nom_produit,:objA,:nb_etoiles)");

query.bindValue(":nom_produit",nom_produit);
query.bindValue(":objA",objA);
query.bindValue(":nb_etoiles",nb_etoiles);


return    query.exec();
}
QSqlQueryModel * avis ::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * "
                "from aviss");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_produit"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("objA"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("nb_etoiles"));
return model;
}
bool avis::supprimer(Ui::MainWindow *ui)
 {
     QString ref=ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString();

     QSqlQuery query;
     query.prepare("delete FROM aviss WHERE nom_produit ='"+ref+"'");
     return(query.exec());

 }
bool avis::modifier1(Ui::MainWindow *ui)
{


   QString nom_produit = ui->lineEdit_2->text();
   QString objA= ui->lineEdit_3->text();
   QString nb_etoiles= ui->lineEdit_13->text();
   avis p1(nom_produit,objA,nb_etoiles);
   QSqlQuery query;
   query.prepare ("update aviss set nom_produit ='"+nom_produit+"',objA ='"+objA+"',nb_etoiles ='"+nb_etoiles+"'where nom_produit ='"+nom_produit+"'");
   return  (query.exec());

}
QSqlQueryModel * avis::triid()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT *"
                    "FROM aviss ORDER BY nom_produit DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_produit"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("objA"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nb_etoiles"));
    return model;
}


