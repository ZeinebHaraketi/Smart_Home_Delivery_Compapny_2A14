#include "admin.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "person.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"
arduino::arduino()
{

}
arduino::arduino(QString id){

    this->id=id;

}
bool arduino::chercherard(QString id){

    QSqlQueryModel* model1=new QSqlQueryModel();
  QSqlQuery query;

       query.prepare("SELECT nomperso from tab_perso where id_perso=:id");
       query.bindValue(0, id);

       query.exec();

       if (query.next()) {
              int stock = query.value(0).toInt();
              // You could store the information you obtain here in a vector or something
       }




     model1->setQuery(query);
     model1->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_POSTE"));
     model1->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_POSTE"));
     model1->setHeaderData(2, Qt::Horizontal, QObject::tr("TELEPHONE"));
     model1->setHeaderData(2, Qt::Horizontal, QObject::tr("EMAIL"));
     model1->setHeaderData(2, Qt::Horizontal, QObject::tr("IDPOSTE"));
     model1->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));


    return  model1;
}
