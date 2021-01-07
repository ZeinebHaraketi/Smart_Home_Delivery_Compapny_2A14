#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
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
//#include <QMainWindow>
#include "GestionClient_ComdV.h"
//#include "ui_mainwindow.h"
#include "ui_GestionClient_ComdV.h"



class Client
{
private:

    int Id_Client;
    QString nom;
    QString prenom;
    int age;
    QString Email;
    int tel;
    int Poids;
    int Taille;
    QString Gender;


public:
    Client();
    Client(int,QString,QString,int,QString,int,int,int,QString);

    //Les Getters:

    int get_IDClient(){return Id_Client;}
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    int get_age(){return age;}
    //QString get_Date(){return  Date_naissance;}
    QString get_mail(){return  Email;}
    //QString get_adresse(){return  adresse;}
    int get_tel(){return tel;}
    //QString get_numCarte(){return NumCarte;}
    int get_poids(){return Poids;}
    int get_taille(){return Taille;}
    QString get_gender(){return Gender;}


    //Les Setters:
        void set_Nom(QString);
        void set_Prenom(QString);
      //  void set_Date(QString);
        void set_Mail(QString);
        void set_Tel(int);
        //void set_Adresse(QString);
        void set_Id(int);
     //   void set_NumCarte(QString);
        void set_Poids(int);
        void set_Taille(int);
        void set_Gender(QString);
        void set_age(int);

    //Les Méthodes de base ----> CRUD
    bool ajouterclient();
    QSqlQueryModel * afficherclient();
    bool supprimerclient(Ui::GestionClient_ComdV *ui);
    bool modifierclient(Ui::GestionClient_ComdV *ui);

    //Les Métiers:
   void RechercherClient(int ide);
    QSqlQueryModel * TrierClient(QString);
};
#endif // CLIENT_H
