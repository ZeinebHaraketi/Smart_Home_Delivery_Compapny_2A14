#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include <QtSql/QSqlQueryModel>
#include <QSqlQuery>
#include<QDesktopServices>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QValidator>
#include <QPrintDialog>
#include<QVariant>
#include <QToolBox>
#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QPrintDialog>
#include <QPrinter>
#include <QAbstractItemView>
#include <QSqlTableModel>
#include <QTableView>
#include <qtableview.h>
#include <QApplication>
#include <QLineEdit>
#include <QSlider>
#include <QDialog>
#include <iostream>
#include <QRadioButton>
#include<QPdfWriter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include<QVariant>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QTableWidget>
#include <qtoolbox.h>
#include <QLineEdit>
#include <QString>
#include <QApplication>
#include <iostream>
#include "connection.h"
#include "client.h"
#include "commandesv.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    CommandesV com;
    Client c;
    //connection ct;
    ui->setupUi(this);
//bool test= ct.createconnection();
      // QTableView *view = new QTableView;
    ui->tableView_Com->setModel(com.afficher());
       //view->setModel(com.afficher());
      // view->show();

}


MainWindow::~MainWindow()
{
    delete ui;
}

//------------ Client--------------//
//--------- Ajout--------------------//

void MainWindow::on_pushButton_ajouter1_clicked(){


     ui->toolBox->setCurrentIndex(0);
     ui->tabWidget->setCurrentIndex(0);

     int id=ui->lineEdit_id->text().toInt();
     QString nom= ui->lineEdit_nom->text();
     QString prenom= ui->lineEdit_prenom->text();
     int tel= ui->lineEdit_tel->text().toInt();
     QString Email= ui->lineEdit_mail->text();
     QString gender= ui->comboBox_4->currentText();
     float Poids= ui->comboBox_5->currentIndex();
     int taille= ui->comboBox_6->currentIndex();
     int age= ui->comboBox_7->currentIndex();

     Client c(id,nom,prenom,age,Email,tel,Poids,taille,gender);
     bool test = c.ajouterclient();
     QMessageBox message;
     if(test)
       {  //message.setText("Ajout Succeeded");
        // ui->tableView->setModel(c.afficherclient());
         QMessageBox::information(nullptr,QObject::tr("Ajout Succeeded"),QObject::tr("Create was successful. \n" "Click Cancel to exit."),QMessageBox::Cancel);
     }
     else
        // message.setText(" Ajout Failed");
     QMessageBox::critical(nullptr,QObject::tr(" Ajout Failed"),QObject::tr(" Create was a Failure. \n" "Click Cancel to exit"),QMessageBox::Cancel);
 }

void MainWindow::on_pushButton_supp1_clicked(){
    Client c1;

}

void MainWindow::on_pushButton_modifier1_clicked(){

}
/*

 */
/*
    void MainWindow::on_comboBox_activated(){
    Client c;
    QMessageBox m;
    if ( (ui->lineEdit_id->text() != 0) &&(ui->lineEdit_nom->text() != "") &&(ui->lineEdit_prenom->text()!= "")){
        c.RechercherClient(ui->lineEdit_prenom->text(),ui->lineEdit_id->text().toInt(),ui->lineEdit_nom->text());
    }
    else if((ui->lineEdit_id->text().toInt()==0)&& (ui->lineEdit_nom->text() !="") &&(ui->lineEdit_prenom->text() !="")){
        m.setText(" veuillez entrer votre id");
    }
    else if((ui->lineEdit_id->text().toInt()!=0)&& (ui->lineEdit_nom->text() =="") &&(ui->lineEdit_prenom->text() !="")){
        m.setText(" veuillez entrer votre nom");
    }
    else if ((ui->lineEdit_id->text().toInt()==0)&& (ui->lineEdit_nom->text() !="") &&(ui->lineEdit_prenom->text() =="")){
        m.setText(" veuillez entrer votre prenom");
    }
    else
    {
        m.setText(" veuillez entre votre id,nom et prenom ");
    }
 m.exec();
}*/

//----------- CommandesV--------------------//

//----------- Ajout---------------------//
    /*
void MainWindow::on_pushButton_ajouter_clicked(){
    ui->toolBox->setCurrentIndex(1);
    ui->tabWidget_2->setCurrentIndex(0);

   int idv= ui->lineEdit_6->text().toInt();
   QString nomP= ui->lineEdit_7->text();
   float prix= ui->lineEdit_8->text().toFloat();
   QString date= ui->l9->text();

   CommandesV cv(idv,nomP,prix,date);
   bool test= cv.ajouter();
   if (test){
       QMessageBox::information(nullptr,QObject::tr("Ajout Succeeded"),QObject::tr("Create was successful. \n" "Click Cancel to exit."),QMessageBox::Cancel);
   }
   else{
      QMessageBox::critical(nullptr,QObject::tr(" Ajout Failed"),QObject::tr(" Create was a Failure. \n" "Click Cancel to exit"),QMessageBox::Cancel);
   }
}*/

void MainWindow::on_pushButton_ajouter_clicked(){
    int id= ui->lineEdit_6->text().toInt();
    QString nom= ui->lineEdit_7->text();
    int prix= ui->lineEdit_8->text().toInt();
    QString date= ui->l9->text();

CommandesV com(id,nom,prix,date);
bool test= com.ajouter();
    if (test){
        QMessageBox:: information(nullptr,QObject::tr("ok"),QObject::tr("ajout effectue\n"
                                                                                 "click cancel to exit."),QMessageBox::Cancel);
    }
    else
    {
        QMessageBox:: critical(nullptr,QObject::tr("not ok"),QObject::tr("ajout non effectue\n"
                                                                                 "click cancel to exit."),QMessageBox::Cancel);
    }
}

//-------------- Modifier-------------------------//
/*
void MainWindow::on_pushButton_modif2_clicked(){
    ui->tabWidget_2->setCurrentIndex(1);


    if(ui->lineEdit_6->text() != 0){
        int idv= ui->lineEdit_6->text().toInt();
        QString nomP= ui->lineEdit_7->text();
        float prix= ui->lineEdit_8->text().toFloat();
        QString date= ui->dateTimeEdit->displayFormat();

        CommandesV com(idv,nomP,prix,date);
        bool test= com.modifier(idv,nomP,prix,date);

        if(test){
            ui->tableView_Com->setModel(com.afficher());
            QMessageBox::information(nullptr,QObject::tr(" Update Succeeded"),QObject::tr("Update was successful. \n" "Click Cancel to exit."),QMessageBox::Cancel);
        }
        else{
           QMessageBox::critical(nullptr,QObject::tr(" Update Failed"),QObject::tr(" Update is a failure. \n" "Click Cancel to exit."),QMessageBox::Cancel);
        }
    }
}
*/

void MainWindow::on_pushButton_clicked(){
    int id= ui->lineEdit->text().toInt();

    CommandesV com(id,"",0,"");
    com.RechercherCommandes(id);
    ui->lineEdit_2 ->setText(com.get_nomProduit());
    ui -> lineEdit_3 ->setText(QString::number(com.get_Prix()));
    ui -> lineEdit_4 -> setText(com.get_DateFabrication());

}
//-------------------- Supprimer --------------------------------//

    /*
void MainWindow::on_pushButton_supp2_clicked(){
   CommandesV com;
if(com.supprimer(ui)){
    QMessageBox::information(this,""," com supprimer");
     ui->tableView_Com->setModel(com.afficher());
}
}*/

/*
    Client c;
    QMessageBox m;
    if ( (ui->lineEdit_id->text() != 0) &&(ui->lineEdit_nom->text() != "") &&(ui->lineEdit_prenom->text()!= "")){
        c.RechercherClient(ui->lineEdit_prenom->text(),ui->lineEdit_id->text().toInt(),ui->lineEdit_nom->text());
    }
    else if((ui->lineEdit_id->text().toInt()==0)&& (ui->lineEdit_nom->text() !="") &&(ui->lineEdit_prenom->text() !="")){
        m.setText(" veuillez entrer votre id");
    }
    else if((ui->lineEdit_id->text().toInt()!=0)&& (ui->lineEdit_nom->text() =="") &&(ui->lineEdit_prenom->text() !="")){
        m.setText(" veuillez entrer votre nom");
    }
    else if ((ui->lineEdit_id->text().toInt()==0)&& (ui->lineEdit_nom->text() !="") &&(ui->lineEdit_prenom->text() =="")){
        m.setText(" veuillez entrer votre prenom");
    }
    else
    {
        m.setText(" veuillez entre votre id,nom et prenom ");
    }
 m.exec();
 */

//-------------------- Modifier --------------------------//


void MainWindow::on_pushButton_2_clicked(){
    int id= ui->lineEdit->text().toInt();
    CommandesV com(id,"",0,"");
    com.modifier(ui);
}

//--------------- Supprimer--------------------//
void MainWindow::on_pushButton_3_clicked(){
   int id= ui->lineEdit_5->text().toInt();
    CommandesV com(id,"",0,"");
    com.supprimer(ui);
}
