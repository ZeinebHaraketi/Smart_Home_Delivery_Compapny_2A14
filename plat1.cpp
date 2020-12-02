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

/************ajouter2************/
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
/************afficher2************/
QSqlQueryModel * plat1 ::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from plat1 ");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nomplat "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("ingredients"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("paymant"));
return model;
}

/***************modifier1*********/
bool plat1:: updatenomplats(QString nomplat)
{

QSqlQuery query;
query.prepare ("update plat1 set ingredients=:ingredients,adresse=:adresse where nomplat=:nomplat ");
query.bindValue (":nomplat ",nomplat );
query.bindValue (":ingredients",ingredients);
query.bindValue (":adresse", adresse );
return query.exec();
 }
/************modifier2*****************/
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
/*************supprimeer2*******/
 bool plat1::supprimer(Ui::MainWindow *ui)
 {
     QString ref=ui->tableView2->model()->data(ui->tableView2->model()->index(ui->tableView2->selectionModel()->currentIndex().row(),0)).toString();

     QSqlQuery query;
     query.prepare("select * FROM plat1 WHERE nomplat ='"+ref+"'");
     query.exec();
     int total=0;
     while(query.next()){
         total++;
     }
     if(total==1){
         QSqlQuery q;
         q.prepare("DELETE FROM plat1 WHERE nomplat='"+ref+"'");
         return q.exec();
     }
     else{
         return false;
     }
 }
/***********rechercher_2************/
 plat1 plat1::Recherchernomplat(QString nomplat1)
  {
  plat1 nomplatAConsulter;
  QSqlQuery query;
  query.prepare("Select * from plat1 where nomplat=:nomplat1");
  query.bindValue(":nomplat",nomplat);
  if (query.exec())
  {
      while (query.next()){

          nomplatAConsulter.nomplat=(query.value(0).toString());
           nomplatAConsulter.ingredients=(query.value(1).toString());
         nomplatAConsulter.adresse=(query.value(2).toString());

      }
  }
  return  nomplatAConsulter;
  }




  QSqlQueryModel *plat1::ConsulterPointageParticulier(QString nomplat1, int *RowCount){
      QSqlQueryModel * model= new QSqlQueryModel ();




      model->setQuery("select * from plat1 where nomplat Like '%"+nomplat1+"%' ");

      model->setHeaderData(0, Qt::Horizontal, QObject::tr("nomplat"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ingredients"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
      *RowCount=model->rowCount();
      return model;

  }
  /********verfication_va4*******/

   bool plat1::verifnomplat(Ui::MainWindow *ui)
   {
       QPixmap PixTrueIcon=QPixmap(":/oui.png");
         QPixmap PixFalseIcon=QPixmap(":/non.png");

          if (ui->lineEdit_3->text().isEmpty() || ui->lineEdit_3->text().length()>8|| ui->lineEdit_3->text().contains(QRegExp("[^a-zA-Z]")))
          {
              ui->va4->setPixmap(PixFalseIcon);
              return false;

          }
          else
          {
              ui->va4->setPixmap(PixTrueIcon);
              return true;

          }
   }
   /********verification_va5********/
   bool plat1::verifingredients(Ui::MainWindow *ui)
   {
       QPixmap PixTrueIcon=QPixmap(":/oui.png");
         QPixmap PixFalseIcon=QPixmap(":/non.png");

          if (ui->lineEdit_4->text().isEmpty() || ui->lineEdit_4->text().length()>18|| ui->lineEdit_4->text().contains(QRegExp("[^a-zA-Z]")))
          {
              ui->va5->setPixmap(PixFalseIcon);
              return false;

          }
          else
          {
              ui->va5->setPixmap(PixTrueIcon);
              return true;

          }
   }
   /***************verification_va6********/
   bool plat1:: verifadresse(Ui::MainWindow *ui)
   {
       QPixmap PixTrueIcon=QPixmap(":/oui.png");
         QPixmap PixFalseIcon=QPixmap(":/non.png");

          if (ui->lineEdit_5->text().isEmpty() || ui->lineEdit_5->text().length()>18|| ui->lineEdit_5->text().contains(QRegExp("[^a-zA-Z]")))
          {
              ui->va6->setPixmap(PixFalseIcon);
              return false;

          }
          else
          {
              ui->va6->setPixmap(PixTrueIcon);
              return true;

          }
   }

