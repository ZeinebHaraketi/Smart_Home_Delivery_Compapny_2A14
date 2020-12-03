#ifndef AVIS_H
#define AVIS_H
#include <QTime>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"


class avis
{
public:
    avis();
    avis(QString nom_produit,QString objA,QString nb_etoiles);
    int get_ref();
    QString get_nom_produit();
    QString get_objA();
    QString get_nb_etoiles();
    void set_reference(int reference){ref=reference;};
    void set_nom(QString nom_produit ){nom_produit=nom_produit;}
    void set_prenom(QString objA){objA=objA;}
    void set_besoin(QString nb_etoiles){this->nb_etoiles=nb_etoiles;}
    bool ajouter(QString nom_produit,QString objA,QString nb_etoiles);
    QSqlQueryModel * afficher();
    bool supprimer(Ui::MainWindow *ui);
    bool updatedialogations(QString nom_reclm);
    bool modifier1(Ui::MainWindow *ui);
    QSqlQueryModel *triid();
private:
    QString nom_produit,objA,obj,nb_etoiles;
    int ref;
};

#endif // AVIS_H
