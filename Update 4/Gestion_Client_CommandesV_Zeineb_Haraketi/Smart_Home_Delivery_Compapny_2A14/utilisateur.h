#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Utilisateur
{
    QString nom,prenom,Date_Naissance,Email,Adresse,Login,Password;
    int Id_Utilisateur,Tel;

public:
    //les Constructeurs:
    Utilisateur();
    Utilisateur(int,QString,QString,QString,QString,int,QString,QString,QString);

    //les Getters:
    QString getNomUsers(){return nom;}
    QString getPrenomUsers(){return prenom;}
    QString getDateNaissance(){return Date_Naissance;}
    QString getEmail(){return Email;}
    QString getAdresse(){return Adresse;}
    QString getLogin(){return Login;}
    QString getPassword(){return Password;}
    int getID(){return Id_Utilisateur;}
    int getTel(){return  Tel;}

    //les Setters:
    void setNomUser(QString name){nom= name;}
    void setPrenomUser(QString fname){prenom= fname;}
    void setDateNaissance(QString DateN){Date_Naissance= DateN;}
    void setEmail(QString email){Email= email;}
    void setAdresse(QString adr){Adresse= adr;}
    void setLogin(QString log ){Login= log;}
    void setPassword(QString mdp){Password=mdp;}
    void setID(int id){this->Id_Utilisateur=id;}
    void setTel(int numero){this->Tel=numero;}

    //Fonctionnalités de base relatives  à l'entité Client ----> CRUD USER

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer();
    bool modifier();


};

#endif // UTILISATEUR_H
