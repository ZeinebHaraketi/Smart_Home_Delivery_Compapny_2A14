#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"



dialog::dialog()
{

}
dialog::dialog(QString nom_reclm,QString num_reclm,QString date_reclm ,QString obj)
{

  this->nom_reclm=nom_reclm;
  this->num_reclm=num_reclm;
    this->date_reclm=date_reclm;
    this->obj = obj;
}
int dialog::get_ref(){return  ref;}
QString dialog::get_nom_reclm(){return nom_reclm;}
QString dialog::get_num_reclm(){return num_reclm;}
QString dialog::get_date_reclm(){return date_reclm;}
QString dialog::get_obj(){return obj;}


bool dialog::ajouter(QString nom_reclm,QString num_reclm,QString date_reclm,QString obj)
{
QSqlQuery query;
query.prepare("INSERT INTO reclamations ( nom_reclm, num_reclm,date_reclm,obj) "
                    "VALUES (:nom_reclm,:num_reclm,:date_reclm,:obj)");

query.bindValue(":nom_reclm",nom_reclm);
query.bindValue(":num_reclm",num_reclm);
query.bindValue(":date_reclm",date_reclm);
query.bindValue(":obj",obj);


return    query.exec();
}
QSqlQueryModel * dialog ::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * "
                "from reclamations");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_reclm"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("num_reclm"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_reclm"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("obj"));
return model;
}
bool dialog::supprimer(Ui::MainWindow *ui)
 {
     QString ref=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();

     QSqlQuery query;
     query.prepare("delete FROM reclamations WHERE nom_reclm ='"+ref+"'");
     return(query.exec());

 }

bool dialog::modifier1(Ui::MainWindow *ui)
{


   QString nom_reclm = ui->lineEdit_10->text();
   QString num_reclm= ui->lineEdit_7->text();
   QString date_reclm= ui->lineEdit_8->text();
   QString obj= ui->lineEdit->text();
   dialog p1(nom_reclm,num_reclm,date_reclm,obj);
   QSqlQuery query;
   query.prepare ("update reclamations set nom_reclm ='"+nom_reclm+"',num_reclm ='"+num_reclm+"',date_reclm ='"+date_reclm+"',obj ='"+obj+"'where nom_reclm ='"+nom_reclm+"'");
   return  (query.exec());

}
dialog dialog::Rechercherreclamation(QString nom_reclm1)
 {
 dialog nom_reclmAConsulter;
 QSqlQuery query;
 query.prepare("Select * from reclamations WHERE nom_reclm='"+nom_reclm1+"'");
 query.bindValue(":nom_reclm",nom_reclm1);
 if (query.exec())
 {
     while (query.next()){

        nom_reclmAConsulter.nom_reclm=(query.value(0).toString());
        nom_reclmAConsulter.num_reclm=(query.value(1).toString());
        nom_reclmAConsulter.date_reclm=(query.value(2).toString());
        nom_reclmAConsulter.obj=(query.value(3).toString());

     }
 }
 return  nom_reclmAConsulter;
 }




 QSqlQueryModel *dialog::ConsulterPointageParticulier(QString nom_reclm1, int *RowCount){
     QSqlQueryModel * model= new QSqlQueryModel ();




     model->setQuery("select * from reclamations WHERE nom_reclm Like '%"+nom_reclm1+"%'");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_reclm"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("num_reclm"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_reclm"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("obj"));
     *RowCount=model->rowCount();
     return model;

 }
