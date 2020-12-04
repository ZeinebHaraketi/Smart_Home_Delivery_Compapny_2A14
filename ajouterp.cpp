#include "ajouterp.h"
#include "ui_ajouterp.h"
#include <QMessageBox>
#include <QIntValidator>
#include "poste.h"

ajouterp::ajouterp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterp)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(0, 999, this));
    ui->poste_salaire->setValidator(new QIntValidator(0, 9999, this));
}

ajouterp::~ajouterp()
{
    delete ui;
}



void ajouterp::on_Ajouterpo_clicked()
{
    int id=ui->le_id->text().toInt();
      QString nom=ui->nom_poste->text();
      int salaire=ui->poste_salaire->text().toInt();
   Poste P(id,nom,salaire);
   bool test=P.ajouterposte();
   QMessageBox msgBox;

   if(test)
     {  msgBox.setText("Ajout avec succes.");
       //ui->tab_poste->setModel(P.afficherposte());
   }
   else
       msgBox.setText("Echec d'ajout");
       msgBox.exec();
  }
