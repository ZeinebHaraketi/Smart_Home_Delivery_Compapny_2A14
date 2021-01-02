#include "maingrh.h"
#include "ui_maingrh.h"
#include "postes.h"
#include "ui_postes.h"
#include "poste.h"
#include <QMessageBox>
maingrh::maingrh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maingrh)
{

    ui->setupUi(this);
    ui->tab_poste->setModel(P.afficherposte());

    ui->le_id->setValidator(new QIntValidator(0, 999, this));
    ui->poste_salaire->setValidator(new QIntValidator(0, 9999, this));
}

postes::~postes()
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
    persod = new afficherperso(this);
    persod->show();
}


