#include "grh.h"
#include "ui_grh.h"
#include "postes.h"
#include "poste.h"
#include "afficherperso.h"

grh::grh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grh)
{
    ui->setupUi(this);
}

grh::~grh()
{
    delete ui;
}

void grh::on_pushButton_postes_clicked()
{
    postedg = new postes(this);
        postedg->show();

}

void grh::on_pushButton_perso_clicked()
{
    persod = new afficherperso(this);
        persod->show();
}
