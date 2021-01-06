#ifndef PROMOTION_H
#define PROMOTION_H

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
class promotion
{
    int id;
    int pourcentage;
    int delai;
    QString date_pro;

public:
    promotion();
    promotion(int,int,int,QString);

    //GETTERS
    int getid(){return id;}
    int getpourcentage(){return pourcentage;}
    QString getdate_pro(){return date_pro;}
    int getdelai(){return delai;}
    //SETTERS
        void setid(int);
        void setpourcentage(int);
        void setdate_pro(QString);
        void setdelai(int);
    //CRUD
             bool ajouter_pro();
             QSqlQueryModel* afficher_1();
             bool supprimer_1(Ui::GestionMarkt *ui);
             bool modifier_1(Ui::GestionMarkt *ui);
    //Metiers
                       void RechercherPRO(int idp);

};

#endif // PROMOTION_H
