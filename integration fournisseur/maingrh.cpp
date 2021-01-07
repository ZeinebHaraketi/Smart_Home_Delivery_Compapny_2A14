#include "maingrh.h"
#include "ui_maingrh.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

maingrh::maingrh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maingrh)
{
    ui->setupUi(this);
}

maingrh::~maingrh()
{
    delete ui;
}
void maingrh::on_pushButton_postes_clicked()
{
   // ajouter_afficherp postes;
  //  postes.setModal(true);
   // postes.exec();
    postedg = new postes(this);
    postedg->show();
}

void maingrh::on_pushButton_perso_clicked()
{
    persod = new personnel(this);
    persod->show();
}



void maingrh::on_push123_clicked()
{
    this->hide() ;

               MainWindow * t;
                t=new MainWindow(this);

                t->show();
}
