#ifndef COMMD_V_ANG_H
#define COMMD_V_ANG_H
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
#include "ui_GestionClient_ComdV.h"
#include "commandesv.h"

class commd_v_ang
{
private:

    int ID_COMMDV;
    QString name_Product;
    int Price;
    QString Date_M;
    int qte;

public:
    //The Constructor:
    commd_v_ang();
    commd_v_ang(int,QString,int,QString,int);

    //The Getters:
    int get_IDCOMMDV(){return ID_COMMDV;}
    QString get_nameProduct(){return name_Product;}
    int get_Price(){return Price;}
    QString get_DateM(){return Date_M;}
    int get_quantite(){return qte;}

    //The Setters
     void set_IDCOMMDV(int);
     void set_nameProduct(QString);
     void set_Price(int);
     void set_DateM(QString);
     void set_quantite(int);

     //Basic Methodes ------> CRUD
      bool ADD_CommDV();
      QSqlQueryModel * DISPLAY_CommDV();
      bool Remove_CommDV(Ui::GestionClient_ComdV *ui);
      bool Modify_CommDV(Ui::GestionClient_ComdV *ui);

      // Métiers
      void SearchCommandes(int idv);
      QSqlQueryModel * SortCommandes(QString);
};

#endif // COMMD_V_ANG_H
