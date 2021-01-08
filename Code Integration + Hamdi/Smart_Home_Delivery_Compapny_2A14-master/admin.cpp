#include "admin.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "person.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
admin::admin()
{

}
admin::admin(QString id,QString mdp){

    this->id=id;
    this->mdp=mdp;
}
bool admin::chercher(QString ID, QString MDP){
QSqlQuery  query1; QString id_admin,mpd_admin;
query1.prepare("SELECT id_perso,telephone from tab_perso where id_perso=:ID_perso");
query1.bindValue(":ID_perso",ID);
query1.exec();
  while(query1.next()){
    id=query1.value(0).toString();
  mdp=query1.value(1).toString();
  }
  if((id==ID)&&(mdp==MDP)){
      return  true;
  }else{
      return  false;
  }
}
