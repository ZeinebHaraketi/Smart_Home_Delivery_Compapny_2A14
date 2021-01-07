#include "fournisseur.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_gestion-fournisseur.h"
#include "ui_mainwindow.h"
fournisseur::fournisseur()
{
num=0;
nom="";
mail="";


}
fournisseur::fournisseur(int num,QString nom , QString mail)
{
  this->num=num;
    this->nom=nom;
    this->mail=mail;


}


int fournisseur::get_num(){return  num;}
QString fournisseur::get_nom(){return  nom;}
QString fournisseur::get_mail(){return  mail;}


bool fournisseur::ajouter()
{
QSqlQuery query;
QString res1= QString::number(num);

query.prepare("INSERT INTO fournisseur (NUM, NOM, MAIL) "
                    "VALUES (:num, :nom, :mail)");
query.bindValue(":num", res1);
query.bindValue(":nom", nom);
query.bindValue(":mail", mail);




return    query.exec();
}

bool fournisseur::supprimer(int num)
{
QSqlQuery query;
QString res1= QString::number(num);
query.prepare("Delete from fournisseur where NUM = :num ");
query.bindValue(":num", res1);
return    query.exec();
}
QSqlQueryModel * fournisseur::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from fournisseur");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUM"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("MAIL"));

    return model;
}

QSqlQueryModel *fournisseur::cherch_four(QString nom)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select NUM, NOM,  MAIL from FOURNISSEUR where NOM='"+nom+"'");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("num"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("mail"));




    return model;
}
bool fournisseur::modifier(int num ,QString nom)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("update fournisseur set num = :c where nom = :i");
    query.bindValue(":i", nom);
    query.bindValue(":c", res);



    return query.exec();
}

