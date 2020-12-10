#ifndef CLIENT_H
#define CLIENT_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <iostream>
#include <QDebug>


class Client
{
    int Id_Client;
    QString nom;
    QString prenom;
    int age;
    QString Date_naissance;
    QString Email;
    QString adresse;
    int tel;
    QString NumCarte;
    float Poids;
    int Taille;
    QString Gender;

public:
    Client();
    Client(int,QString,QString,int,QString,QString,QString,int,QString,float,int,QString);

    //Les Getters:

    int get_IDClient(){return Id_Client;}
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    int get_age(){return age;}
    QString get_Date(){return  Date_naissance;}
    QString get_mail(){return  Email;}
    QString get_adresse(){return  adresse;}
    int get_tel(){return tel;}
    QString get_numCarte(){return NumCarte;}
    float get_poids(){return Poids;}
    int get_taille(){return Taille;}
    QString get_gender(){return Gender;}

    //Les Méthodes de base ----> CRUD
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int ID);
    bool modifier(int,QString,QString,int,QString,QString,QString,int,QString,float,int,QString);

    //Les Métiers:
    QSqlQueryModel * RechercherClient(int id);
    QSqlQueryModel * TrierClient();
};

#endif // CLIENT_H
