#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMainWindow>




class Client
{
private:

    int Id_Client;
    QString nom;
    QString prenom;
    int age;
    QString Email;
    int tel;
    float Poids;
    int Taille;
    QString Gender;


public:
    Client();
    Client(int,QString,QString,int,QString,int,float,int,QString);

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
    float get_poids(){return Poids;}
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
        void set_Poids(float);
        void set_Taille(int);
        void set_Gender(QString);
        void set_age(int);

    //Les Méthodes de base ----> CRUD
    bool ajouterclient();
    QSqlQueryModel * afficherclient();
    bool supprimerclient(int ID);
    bool modifierclient(int,QString,QString,int,QString,int,float,int,QString);

    //Les Métiers:
   void RechercherClient(QString fname,int ide,QString name);
    QSqlQueryModel * TrierClient();
};
#endif // CLIENT_H
