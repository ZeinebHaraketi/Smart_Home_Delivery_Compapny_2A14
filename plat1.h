#ifndef PLAT1_H
#define PLAT1_H
#include <QString>
#include <QTime>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"


class plat1
{
public:
    plat1();

       plat1(QString nomplat,QString ingredients,QString adresse);
       int get_ref();
       QString get_nomplat();
       QString get_ingredients();
       QString get_adresse();
       QString get_paymant();
       void set_reference(int reference){ref=reference;}
       void set_nom(QString nom1 ){nomplat=nom1;}
       void set_prenom(QString ingredients1){ingredients=ingredients1;}
       void set_email(QString adresse1){adresse=adresse1;}
       void set_paymant(QString paymant){this->paymant=paymant;}
       void chercher();
       QSqlQueryModel *getModelSpecial(QString inputValue,QString filterChecked);
       QSqlQueryModel * afficher_choix1(QString );
        plat1 Recherchenomplat(QString ingredients);
       bool ajouter( QString nomplat, QString ingredients,QString adresse,QString);
       bool supprimer(Ui::MainWindow *ui);
       bool modifier(QString nomplat, QString ingredients,QString adresse);
      QSqlQueryModel * afficher();
      QSqlQueryModel * afficher_liste();
      QSqlQueryModel * afficher2(QString nomplat);
      QSqlQueryModel * recherche_nomplat(QString valeur);
      QSqlQueryModel * recherche_e(int valeur);
      QSqlQueryModel * recherche_nomplatd(QString valeur);
      QSqlQueryModel * tri(int index);
      QSqlQueryModel *ConsulterPointageParticulier(QString ingredients1, int *RowCount);
      bool updatenomplats(QString nomplat);
       QString getTableName();
       int calculerpaymant(QString paymant);
       bool modifier1(Ui::MainWindow *ui);
private:
    QString adresse,nomplat,ingredients,paymant;
    int ref;

};

#endif // PLAT1_H
