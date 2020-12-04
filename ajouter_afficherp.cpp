#include "ajouter_afficherp.h"
#include "ui_ajouter_afficherp.h"
#include "postes.h"
#include "poste.h"
ajouter_afficherp::ajouter_afficherp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouter_afficherp)
{
    ui->setupUi(this);
}

ajouter_afficherp::~ajouter_afficherp()
{
    delete ui;
}

void ajouter_afficherp::on_pushButton_ajouterp_clicked()
{
    ajouter = new ajouterp(this);
    ajouter->show();
}

void ajouter_afficherp::on_pushButton_afficherp_clicked()
{
    afficher = new postes(this);
    afficher->show();
    //ui->tab_poste->setModel(P.afficherposte());
}
