#ifndef MACHINE_H
#define MACHINE_H
#include <QString>
#include <QTime>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class machines
{
public:

    machines();
       machines(QString meals,QString poids_ideal,QString duree_regime);
       int get_ref();
       QString get_meals();
       QString get_poids_ideal();
       QString get_duree_regime();
       QString get_sport();
       void set_reference(int reference){ref=reference;};
       void set_nom(QString nom1 ){meals=nom1;}
       void set_prenom(QString poids_ideal1){poids_ideal=poids_ideal1;}
       void set_email(QString duree_regime1){duree_regime=duree_regime1;}
       void set_sport(QString sport){this->sport=sport;}
       void chercher();
       QSqlQueryModel *getModelSpecial(QString inputValue,QString filterChecked);
       QSqlQueryModel * afficher_choix1(QString );
        machines Recherchemeals(QString poids_ideal);
       bool ajouter( QString meals, QString poids_ideal,QString duree_regime,QString);
       bool supprimer(Ui::MainWindow *ui);
       bool modifier(QString meals, QString poids_ideal,QString duree_regime);
      QSqlQueryModel * afficher();
      QSqlQueryModel * afficher_liste();
      QSqlQueryModel * afficher2(QString meals);
      QSqlQueryModel * recherche_meals(QString valeur);
      QSqlQueryModel * recherche_e(int valeur);
      QSqlQueryModel * recherche_mealsd(QString valeur);
      QSqlQueryModel * tri(int index);
      QSqlQueryModel *ConsulterPointageParticulier(QString poids_ideal1, int *RowCount);
      bool updatemealss(QString meals);
       QString getTableName();
       int calculersport(QString sport);
       bool verifmeals(Ui::MainWindow *ui);
       bool verifpoids_ideal(Ui::MainWindow *ui);
       bool verifduree_regime(Ui::MainWindow *ui);
       void inifray(Ui::MainWindow *ui);
private:
    QString meals,poids_ideal,duree_regime,sport;
    int ref;
};

#endif // MACHINE_H
