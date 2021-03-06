#include "postes.h"
#include "ui_postes.h"
#include "poste.h"
#include <QMessageBox>

postes::postes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::postes)
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



void postes::on_delposte_clicked()
{
    Poste P1;
    P1.setidposte(ui->le_id_sup->text().toInt());
    bool test=P1.supprimerposte(P1.getidposte());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");

ui->tab_poste->setModel(P.afficherposte());
    }
    else
        msgBox.setText("Echec de suppression");
        msgBox.exec();

}


void postes::on_selectbutton_clicked()
{
    Poste P2;
    P2.setidposte(ui->id_selected->text().toInt());


ui->tablewi->setModel(P2.selectpost(P2.getidposte()));



}

void postes::on_commandLinkButton_clicked()
{

int idselected=ui->id_selected->text().toInt();
int id=0;
  QString nom=ui->edit_nom->text();
  int salaire=ui->edit_salaire->text().toInt();
Poste P3(id,nom,salaire);
bool test=P3.modifierposte(idselected);
QMessageBox msgBox;

if(test)
 {  msgBox.setText("Modif avec succes.");
   //ui->tab_poste->setModel(P.afficherposte());
}
else
   msgBox.setText("Echec de Modif");
   msgBox.exec();
     }



void postes::on_Ajouterpo_clicked()
{
    int id=ui->le_id->text().toInt();
      QString nom=ui->nom_poste->text();
      int salaire=ui->poste_salaire->text().toInt();
   Poste P(id,nom,salaire);
   bool test=P.ajouterposte();
   QMessageBox msgBox;

   if(test)
     {  msgBox.setText("Ajout avec succes.");
       ui->tab_poste->setModel(P.afficherposte());
   }
   else
       msgBox.setText("Echec d'ajout");
       msgBox.exec();
}
