#include "machine.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"


machines::machines()
{

}
machines::machines(QString meals,QString poids_ideal,QString duree_regime)
{

  this->meals=meals;
  this->poids_ideal=poids_ideal;
    this->duree_regime=duree_regime;
}
int machines::get_ref(){return  ref;}
QString machines::get_meals(){return meals;}
QString machines::get_poids_ideal(){return poids_ideal;}
QString machines::get_duree_regime(){return duree_regime;}
QString machines::get_sport(){return sport;}


bool machines::ajouter(QString meals,QString poids_ideal,QString duree_regime,QString sport)
{
QSqlQuery query;
query.prepare("INSERT INTO machines ( meals, poids_ideal,duree_regime,sport) "
                    "VALUES (:meals,:poids_ideal,:duree_regime,:sport)");

query.bindValue(":meals",meals);
query.bindValue(":poids_ideal",poids_ideal);
query.bindValue(":duree_regime",duree_regime);
query.bindValue(":sport",sport);
return    query.exec();
}

QSqlQueryModel * machines ::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * "
                "from machines");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("meals"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("poids_ideal"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("duree_regime"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("sport"));
return model;
}
/******** supprmier**********  */
bool machines::supprimer(Ui::MainWindow *ui)
{
    QString ref=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();

    QSqlQuery query;
    query.prepare("select * FROM machines WHERE meals ='"+ref+"'");
    query.exec();
    int total=0;
    while(query.next()){
        total++;
    }
    if(total==1){
        QSqlQuery q;
        q.prepare("DELETE FROM machines WHERE meals='"+ref+"'");
        return q.exec();
    }
    else{
        return false;
    }


}

 QSqlQueryModel * machines::  afficher_liste()
 {
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select ref from machines");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("meals"));
    return  model;
 }


QSqlQueryModel * machines::afficher2(QString meals)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery query;
    meals='%'+meals+'%';
    query.prepare("SELECT * from machines where meals like :meals or poids_ideal like :meals or  duree_regime like :meals order by ref");
    query.bindValue(":meals",meals);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(1,Qt::Horizontal, QObject::tr("meals"));
    model->setHeaderData(2,Qt::Horizontal, QObject::tr("poids_ideal"));
    model->setHeaderData(3,Qt::Horizontal, QObject::tr("duree_regime"));
    return model;
}
QSqlQueryModel * machines:: recherche_meals(QString valeur)
{
    QSqlQueryModel * model=new QSqlQueryModel();

    QSqlQuery query;


    query.prepare("SELECT * FROM machines WHERE meals LIKE :valeur order by meals");


    valeur="%"+valeur+"%";
    query.bindValue(":valeur",valeur);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("meals"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("poids_ideal"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("duree_regime"));
    return model;

}
QSqlQueryModel * machines :: recherche_mealsd(QString valeur)
{
    QSqlQueryModel * model=new QSqlQueryModel();

    QSqlQuery query;
  query.prepare("SELECT * FROM machines WHERE NOM LIKE :valeur order by meals desc");
    valeur="%"+valeur+"%";
    query.bindValue(":valeur",valeur);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("meals"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("poids_ideal"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("duree_regime"));
    return model;

}
machines machines::Recherchemeals(QString poids_ideal){
machines mealsAConsulter;
QSqlQuery query;
query.prepare("Select * from machines where poids_ideal=:poids_ideal1");
query.bindValue(":poids_ideal",poids_ideal);
if (query.exec())
{
    while (query.next()){

        mealsAConsulter.meals=(query.value(0).toLongLong());
        mealsAConsulter.poids_ideal=(query.value(1).toString());
        mealsAConsulter.duree_regime=(query.value(2).toString());


    }
}
return mealsAConsulter;
}

 QSqlQueryModel *machines::ConsulterPointageParticulier(QString poids_ideal1, int *RowCount){
     QSqlQueryModel * model= new QSqlQueryModel ();




     model->setQuery("select * from machines where poids_ideal Like '%"+poids_ideal1+"%' ");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("meals"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("poids_ideal"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("duree_regime"));


     *RowCount=model->rowCount();
     return model;

 }
/* ***********trier********** */
 QSqlQueryModel * machines::afficher_choix1(QString choix)
 {
     QSqlQueryModel * model =new QSqlQueryModel();

     if (choix=="meals")
     {
      model->setQuery("SELECT * FROM machines ORDER BY meals;");
     }
     else if(choix=="poids_ideal")
     {
         model->setQuery("SELECT * FROM machines ORDER BY poids_ideal ASC ;");
     }
     else if(choix=="duree_regime")
     {
         model->setQuery("SELECT * FROM machines  ORDER BY duree_regime ASC;");
     }

     else if (choix=="trier par")
     {
         model->setQuery("SELECT * FROM machines");
     }
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("meals"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("poids_ideal"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("duree_regime"));
     return model;
 }

 QSqlQueryModel *machines::getModelSpecial(QString inputValue,QString filterChecked){
     QSqlQueryModel * model= new QSqlQueryModel ();
     QSqlQuery query;
     query.prepare("SELECT *FROM machines WHERE "+filterChecked+" LIKE '%' || :inputValue || '%' ");
     query.bindValue(":inputValue",inputValue);
     query.exec();
     model->setQuery(query);
     return model;
 }

 QString machines::getTableName()
 {
     return "machines";
 }

 /* ***************modifier************ */
 bool machines::updatemealss(QString meals){

 QSqlQuery query;
 query.prepare ("update machines set meals =:meals, poids_ideal =:poids_ideal, duree_regime =:duree_regime where meals=:meals");
 query.bindValue (":meals", meals);
 query.bindValue (":poids_ideal", poids_ideal);
 query.bindValue (":duree_regime", duree_regime);
return query.exec();
  }

 int machines::calculersport(QString sport){
    QSqlQuery query;
    query.prepare("select * from machines where sport=:sport");
    query.bindValue(":sport",sport);
    query.exec();
    int total=0;
    while(query.next()){
        total++;
    }


    return total;
 }
