#include "gestionmarkt.h"
#include "ui_gestionmarkt.h"
#include "article.h"
#include "promotion.h"
#include <QtWidgets/QApplication>
#include <QTableView>
#include <QSqlTableModel>
#include <QMessageBox>

GestionMarkt::GestionMarkt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestionMarkt)
{
    article A;
    promotion P;
    ui->setupUi(this);

    ui->tableView_article->setModel(A.afficher());
    ui->tableView_Promo->setModel(P.afficher_1());


}

GestionMarkt::~GestionMarkt()
{
    delete ui;
}


//----------------------- ARTICLE --------------------------------//

//--------------------- AJOUT -----------------------------//

void GestionMarkt::on_ajouter_Article_clicked(){
    int prix= ui->l_ajout_prix->text().toInt();
    int qte= ui->l_ajout_qte->text().toInt();
    int cod= ui->l_ajout_code->text().toInt();
    QString type= ui->l_ajout_type->text();

    article art(prix,qte,cod,type);

    bool test= art.ajouter_ar();

    if (test){
        qDebug()<<"Article ajouté avec succées";
        QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr("ajout Article effectue\n"
                                                                                 "click cancel to exit."),QMessageBox::Cancel);
    }
    else
    {
        QMessageBox:: critical(nullptr,QObject::tr("Oh No!"),QObject::tr("ajout Article non effectue\n"
                                                                                 "click cancel to exit."),QMessageBox::Cancel);
    }
}
//------------------------------ RECHERCHER ----------------------------------------//

void GestionMarkt::on_RechercherART_clicked(){


  int cod= ui->l_modif_code->text().toInt();
  int prix= ui->l_modif_prix->text().toInt();
  int qte= ui->l_modif_qte->text().toInt();
  QString type= ui->l_modif_type->text();

  article A(prix,qte,cod,type);
  A.RechercherART(cod);

  ui->l_modif_code->setText(QString::number(A.getcode()));
  ui->l_modif_prix->setText(QString::number(A.getprix()));
  ui->l_modif_qte->setText(QString::number(A.getquantite()));
  ui->l_modif_type->setText(A.gettype_ar());
  QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" recherche effectue\n"
                                                                           "click cancel to exit."),QMessageBox::Cancel);
}

//----------------------------- MODIFIER --------------------------------------------------//
void GestionMarkt::on_ModifierART_clicked(){

 int cod= ui->l_modif_code->text().toInt();
 article A(0,0,cod,"");
 A.modifier(ui);
 QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" modifier effectue\n"
                                                                          "click cancel to exit."),QMessageBox::Cancel);
}

//----------------------------- SUPPRIMER -------------------------------------------//
void GestionMarkt::on_SupprimerART_clicked(){
   int cod= ui->l_ajout_code->text().toInt();
   article A(0,0,cod,"");
   A.supprimer(ui);
   QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" Supprimer effectue\n"
                                                                            "click cancel to exit."),QMessageBox::Cancel);
}

//----------------------- PROMOTION --------------------------------//

//------------------------- AJOUT -------------------------------------//
void GestionMarkt::on_ajouter_Promo_clicked(){
  int idp= ui->l_ajout_Id->text().toInt();
  int Pcent= ui->l_ajout_Pcent->text().toInt();
  int delai= ui->l_ajout_delai->text().toInt();
  QString date= ui->l_ajout_dateP->text();

 promotion P(idp,Pcent,delai,date);

 bool test1= P.ajouter_pro();

 if (test1){
     qDebug()<<"Promo ajouté avec succées";
     QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr("ajout Promo effectue\n"
                                                                              "click cancel to exit."),QMessageBox::Cancel);
 }
 else
 {
     QMessageBox:: critical(nullptr,QObject::tr("Oh No!"),QObject::tr("ajout Promo non effectue\n"
                                                                              "click cancel to exit."),QMessageBox::Cancel);
 }
}

//-------------------------- MODIFIER --------------------------------------//
void GestionMarkt::on_ModifierPro_clicked(){
    int idp= ui->l_modif_id->text().toInt();
    promotion P(idp,0,0,"");
    P.modifier_1(ui);
    QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" modifier effectue\n"
                                                                             "click cancel to exit."),QMessageBox::Cancel);
}

//-------------------- RECHERCHER --------------------------------//
void GestionMarkt::on_RecherchePro_clicked(){

    int idp= ui->l_modif_id->text().toInt();
    int pcent= ui->l_modif_Pcent->text().toInt();
    int delai= ui->l_modif_delai->text().toInt();
    QString date= ui->l_modif_DateP->text();

    promotion P(idp,pcent,delai,date);
    P.RechercherPRO(idp);

    ui->l_modif_id->setText(QString::number(P.getid()));
    ui->l_modif_Pcent->setText(QString::number(P.getpourcentage()));
    ui->l_modif_delai->setText(QString::number(P.getdelai()));
    ui->l_modif_DateP->setText(P.getdate_pro());
    QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" recherche effectue\n"));
}

//----------------------- SUPPRIMER ------------------------//
void GestionMarkt::on_SupprimerPro_clicked(){
  int idp= ui->l_modif_id->text().toInt();
   promotion P(idp,0,0,"");
   P.supprimer_1(ui);
   QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" supprimer effectue\n"
                                                                            "click cancel to exit."),QMessageBox::Cancel);
}
