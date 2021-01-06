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
/********supprimer_2*********/
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
 /**********verifier_va4*******/
  bool plat1 ::verifva4(Ui::MainWindow *ui)
  {
      QPixmap PixTrueIcon=QPixmap(":/oui1.png");
     QPixmap PixFalseIcon=QPixmap(":/non1.png");

      if (ui->label_3->text().isEmpty() || ui->lineEdit_3->text().length()>20||ui->lineEdit_3->text().length()<1||ui->lineEdit_3->text().contains(QRegExp("[^a-zA-Z]")))
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
  /**********verifier_va5*******/
   bool plat1 :: verifva5(Ui::MainWindow *ui)
   {
       QPixmap PixTrueIcon=QPixmap(":/oui1.png");
      QPixmap PixFalseIcon=QPixmap(":/non1.png");

       if (ui->label_4->text().isEmpty() || ui->lineEdit_4->text().length()>20||ui->lineEdit_4->text().length()<1||ui->lineEdit_4->text().contains(QRegExp("[^a-zA-Z]")))
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
   /**********verifier_va6*******/
    bool plat1 ::verifva6(Ui::MainWindow *ui)
    {
        QPixmap PixTrueIcon=QPixmap(":/oui1.png");
       QPixmap PixFalseIcon=QPixmap(":/non1.png");

        if (ui->label_5->text().isEmpty() || ui->lineEdit_5->text().length()>20||ui->lineEdit_5->text().length()<1)
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
