#include "interfacesclient.h"
#include "ui_interfacesclient.h"
#include "client.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QPdfWriter>
#include <QImage>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include "smtpguid.h"
#include <QTabWidget>
#include <QTableView>

InterfacesClient::InterfacesClient(QWidget *parent) :
    QWidget(parent),
    QTableView *tableView = new QTableView,

    ui(new Ui::InterfacesClient)
{
    Client c;

    ui->setupUi(this);
    ui->tableView->setModel(c.afficherclient());
}

InterfacesClient::~InterfacesClient()
{
    delete ui;
}

void InterfacesClient::on_pushButton_ajouter_clicked(){


   // Récupération des infos saisies
   //QString nom= ui->lineEdit ->text();
  //  QString prenom= ui->lineEdit_prenomC->text();

//Client C();

//bool test= C.ajouter();
}
