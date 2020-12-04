#include "ajouterperso.h"
#include "ui_ajouterperso.h"
#include "person.h"
#include <QMessageBox>
#include <QIntValidator>

ajouterperso::ajouterperso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterperso)
{
    ui->setupUi(this);
    ui->id_perso->setValidator(new QIntValidator(0, 999, this));
    ui->telephone->setValidator(new QIntValidator(0, 99999999, this));
    ui->idposte->setValidator(new QIntValidator(0, 999, this));

}

ajouterperso::~ajouterperso()
{
    delete ui;
}

void ajouterperso::on_pushButton_clicked()
{

    int id=ui->id_perso->text().toInt();
    int idpo=ui->idposte->text().toInt();
    QString nom=ui->nom_perso->text();
    int telephone=ui->telephone->text().toInt();
     QString prenom=ui->prenom->text();
      QString email=ui->email->text();
 Person PE(id,nom,telephone,email,idpo,prenom);
 bool test=PE.ajouterperson();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");

 }
 else
     msgBox.setText("Echec d'ajout");
     msgBox.exec();

}
