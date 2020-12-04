#include "perso.h"
#include "ui_perso.h"
#include "ajouterperso.h"

perso::perso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::perso)
{
    ui->setupUi(this);
}

perso::~perso()
{
    delete ui;
}

void perso::on_pushButton_clicked()
{
    ajoutpdialog = new ajouterperso(this);
    ajoutpdialog->show();
}

void perso::on_pushButton_2_clicked()
{
    affpdialog = new afficherperso(this);
    affpdialog->show();
}
