#ifndef dialog_H
#define dialog_H
#include <QTime>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"


class dialog
{
public:

    dialog();
       dialog(QString nom_reclm,QString num_reclm,QString date_reclm , QString obj );
       int get_ref();
       QString get_nom_reclm();
       QString get_num_reclm();
       QString get_date_reclm();
       QString get_obj();

       void set_reference(int reference){ref=reference;};
       void set_nom(QString nom_reclm ){nom_reclm=nom_reclm;}
       void set_prenom(QString num_reclm){num_reclm=num_reclm;}
       void set_besoin(QString date_reclm){this->date_reclm=date_reclm;}
        void set_email(QString obj){obj=obj;}
       bool ajouter(QString nom_reclm,QString num_reclm,QString date_reclm,QString obj);
       QSqlQueryModel * afficher();
       bool supprimer(Ui::MainWindow *ui);
       bool updatedialogations(QString nom_reclm);
       bool modifier1(Ui::MainWindow *ui);
       dialog Rechercherreclamation(QString nom_reclm1);
       QSqlQueryModel * ConsulterPointageParticulier(QString nom_reclm1, int *RowCount);
private:
    QString nom_reclm,num_reclm,date_reclm,obj;
    int ref;
};

#endif // dialog_H
