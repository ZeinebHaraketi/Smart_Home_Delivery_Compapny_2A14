#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>



class fournisseur
{public:
    fournisseur();
    fournisseur(int,QString,QString);

    QString get_nom();
    QString get_mail();


    int get_num();

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
     QSqlQueryModel * cherch_four(QString);
     bool modifier(int , QString  );



private:

    int num;


      QString nom;
      QString mail;
};
#endif // FOURNISSEUR_H
