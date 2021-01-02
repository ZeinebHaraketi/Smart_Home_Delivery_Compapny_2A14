#include "poste.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QSqlTableModel>
Poste::Poste()
{
idposte=0; nomposte=" "; salaire=0;
}
Poste::Poste(int idposte,QString nomposte,float salaire)
{this->idposte=idposte; this->nomposte=nomposte; this->salaire=salaire;}
int Poste::getidposte(){return idposte;}
QString Poste::getnomposte(){return  nomposte;}
float Poste::getsalaire(){return salaire;}
void Poste::setidposte(int idposte){this->idposte=idposte;}
void Poste::setnomposte(QString nomposte){this->nomposte=nomposte;}
void Poste::setsalaire(float salaire){this->salaire=salaire;}
bool Poste::ajouterposte()
{

    QSqlQuery query;
  QString id_string= QString::number(idposte);
  QString salaire_string= QString::number(salaire);
         query.prepare("INSERT INTO tab_poste (id_poste, nomposte, salaire) "
                       "VALUES (:id_poste, :nomposte, :salaire)");
         query.bindValue(":id_poste",id_string);
         query.bindValue(":nomposte", nomposte);
         query.bindValue(":salaire", salaire_string);
        return query.exec();

}
bool Poste::supprimerposte(int idposte)
{
    QSqlQuery query;
         query.prepare(" Delete from TAB_POSTE where id_poste=:idposte");
         query.bindValue(0, idposte);

        return query.exec();


}
QSqlQueryModel* Poste::afficherposte()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM TAB_POSTE ORDER BY SALAIRE ASC");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_POSTE"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_POSTE"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE"));


  return  model;
}
bool Poste::modifierposte(int idposte ){
    QSqlQuery query;
     query.prepare ("update TAB_POSTE set  nomposte =:nomposte, salaire =:salaire where id_poste=:id_poste");
     query.bindValue (":nomposte", nomposte);
     query.bindValue (":salaire", salaire);
     query.bindValue (":id_poste", idposte);
    return query.exec();
}
QSqlQueryModel* Poste::selectpost(int idposte1)
{
  QSqlQueryModel* model1=new QSqlQueryModel();
QSqlQuery query;

     query.prepare(" SELECT* from TAB_POSTE where id_poste=:idposte1");
     query.bindValue(0, idposte1);

     query.exec();






   model1->setQuery(query);
   model1->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_POSTE"));
   model1->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_POSTE"));
   model1->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE"));


  return  model1;
}


   //query.prepare ("update aviss set nom_produit ='"+nom_produit+"',objA ='"+objA+"',nb_etoiles ='"+nb_etoiles+"'where nom_produit ='"+nom_produit+"'");
