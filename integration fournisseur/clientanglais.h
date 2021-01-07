#ifndef CLIENTANGLAIS_H
#define CLIENTANGLAIS_H
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
#include "ui_GestionClient_ComdV.h"
#include "client.h"

class ClientAnglais
{

private:
    int ID_Client;
    QString name;
    QString fname;
    int Age;
    QString Mail;
    int Tel;
    int Weight;
    int Height;
    QString Gender1;
public:
    ClientAnglais();
    ClientAnglais(int,QString,QString,int,QString,int,int,int,QString);

    // The Getters//

    int get_IDC1lient(){return ID_Client;}
    QString get_name(){return name;}
    QString get_fname(){return fname;}
    int get_Age(){return Age;}
    QString get_mail1(){return  Mail;}
    int get_Tel1(){return Tel;}
    int get_Weight(){return Weight;}
    int get_Height(){return Height;}
    QString get_Gender1(){return Gender1;}

    // The Setters//
    void set_Name(QString);
    void set_fname(QString);
    void set_Mail1(QString);
    void set_Tel1(int);
    void set_ID(int);
    void set_Weight(int);
    void set_Height(int);
    void set_Gender1(QString gd);
    void set_Age(int);

    //Basic Methodes ----> CRUD

    bool AddClient();
    QSqlQueryModel * DisplayClient();
    bool RemoveClient(Ui::GestionClient_ComdV *ui);
    bool ModifyClient(Ui::GestionClient_ComdV *ui);

    //Les Métiers:
   void SearchClient(int ide1); //recherche multicritère
    QSqlQueryModel * SortClient(QString); // trie multicritere


};

#endif // CLIENTANGLAIS_H
