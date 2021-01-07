#ifndef ARTICLE_H
#define ARTICLE_H

#include<QString>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlQueryModel>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "gestionmarkt.h"
#include "ui_gestionmarkt.h"

class article
{
private:
    int prix;
    int quantite;
    int code;
    QString type_ar;

public:
    //Constructeurs
    article();
    article(int,int,int,QString);
    //GETTERS
    int getprix(){return prix;}
    int getquantite(){return quantite;}
    QString gettype_ar(){return  type_ar;}
    int getcode(){return code;}
    //SETTERS
            void setprix(int);
            void setquantite(int);
            void settype_ar(QString);
            void setcode(int);

      //CRUD
                 bool ajouter_ar();
                 QSqlQueryModel* afficher();
                 bool supprimer(Ui::GestionMarkt *ui);
                 bool modifier(Ui::GestionMarkt *ui);
       //Metiers
                 void RechercherART(int ide);
};

#endif // ARTICLE_H
