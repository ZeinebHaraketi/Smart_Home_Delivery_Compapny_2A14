#ifndef COMMANDESV_H
#define COMMANDESV_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <iostream>
#include <QDebug>


class CommandesV
{

private:
    int Id_CommandesVente;
    QString nom_Produit;
    float Prix;
    QString Date_Fabrication;

public:
    //Les Constructeurs:
    CommandesV();
    CommandesV(int,QString,float,QString);

    //Les Getters:
    int get_IDCommdV(){return Id_CommandesVente;}
    QString get_nomProduit(){return nom_Produit;}
    float get_Prix(){return Prix;}
    QString get_DateFabrication(){return Date_Fabrication;}

    //Les Méthodes de base ----> CRUD
    bool ajouter();
    QSqlQueryModel * affichercommandesv();
    bool supprimer(int ID);
    bool modifier(int,QString,float,QString);

    //Les Métiers:
    void imprimerCommandes();
    QSqlQueryModel * RechercherCommandes(int id);
    QSqlQueryModel * TrierCommandes();



};

#endif // COMMANDESV_H
