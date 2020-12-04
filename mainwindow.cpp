#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ajouter_afficherp.h"
//#include "poste.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_postes_clicked()
{
   // ajouter_afficherp postes;
  //  postes.setModal(true);
   // postes.exec();
    posdialog = new ajouter_afficherp(this);
    posdialog->show();
}

void MainWindow::on_pushButton_perso_clicked()
{
    persodialog = new perso(this);
    persodialog->show();
}

void MainWindow::on_pushButton_stat_clicked()
{
    statdialog = new statistiques(this);
    statdialog->show();
}
