#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    //ui->tableview->setModel(Etmp.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajouter_clicked(){


   // Récupération des infos saisies
   // QString nom= ui->lineEdit ->text();
  //  QString prenom= ui->lineEdit_prenomC->text();

//Client C();

//bool test= C.ajouter();
}

