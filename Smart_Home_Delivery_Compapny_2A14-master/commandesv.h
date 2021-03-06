#ifndef COMMANDESV_H
#define COMMANDESV_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <iostream>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QTime>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTime>
#include "GestionClient_ComdV.h"
//#include "ui_mainwindow.h"
#include "ui_GestionClient_ComdV.h"
class CommandesV
{

private:
    int Id_CommandesVente;
    QString nom_Produit;
    int Prix;
    QString Date_Fabrication;

public:
    //Les Constructeurs:
    CommandesV();
    CommandesV(int,QString,int,QString);

    //Les Getters:
    int get_IDCommdV(){return Id_CommandesVente;}
    QString get_nomProduit(){return nom_Produit;}
    int get_Prix(){return Prix;}
    QString get_DateFabrication(){return Date_Fabrication;}

    //Les Setters:
    void set_IdCommandV(int);
    void set_nomProduit(QString);
    void set_Prix(int);
    void set_DateF(QString);

    //Les Méthodes de base ----> CRUD
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(Ui::GestionClient_ComdV *ui);
    bool modifier(Ui::GestionClient_ComdV *ui);

    //Les Métiers:
    // void imprimerCommandes();
    void RechercherCommandes(int id);
    QSqlQueryModel * TrierCommandes(QString);



};
#endif // COMMANDESV_H
