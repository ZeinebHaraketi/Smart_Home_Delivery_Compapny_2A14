#include "person.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Person::Person()
{
idperson=0; nomperson=" "; telephone="";
email=" "; idposte1=0; prenom=" ";
}
Person::Person(int idperson,QString nomperson,QString telephone,QString email,int idposte1,QString prenom)
{this->idperson=idperson; this->nomperson=nomperson; this->telephone=telephone; this->prenom=prenom; this ->email=email;this->idposte1=idposte1; }
int Person::getidperson(){return idperson;}
int Person::getidposte(){return idposte1;}
QString Person::getnomperson(){return  nomperson;}
QString Person::getemail(){return  email;}
QString Person::getprenom(){return  prenom;}
QString Person::gettlfeperson(){return telephone;}
void Person::setidperson(int idperson){this->idperson=idperson;}
void Person::setidposte(int idposte1){this->idposte1=idposte1;}
void Person::setnomperson(QString nomperson){this->nomperson=nomperson;}
void Person::setprenom(QString prenom){this->prenom=prenom;}
void Person::settlfperson(QString telephone){this->telephone=telephone;}
void Person::setemail(QString email){this->email=email;}
bool Person::ajouterperson()
{

    QSqlQuery query;
     QString idp_string1= QString::number(idposte1);
  QString id_string1= QString::number(idperson);
//  QString telephone_string= QString::number(telephone);
         query.prepare("INSERT INTO TAB_PERSO (id_perso, nomperso, telephone, email, idposte ,prenom) "
                       "VALUES (:id_perso, :nomperso, :telephone, :email, :idposte, :prenom)");
         query.bindValue(":id_perso",id_string1);
         query.bindValue(":nomperso", nomperson);
         query.bindValue(":telephone", telephone);
         query.bindValue(":email",email);
         query.bindValue(":idposte", idp_string1);
         query.bindValue(":prenom", prenom);
        return query.exec();

}
bool Person::supprimerperson(int idperson)
{
    QSqlQuery query;
         query.prepare(" Delete from TAB_PERSO where id_perso=:idperson");
         query.bindValue(0, idperson);

        return query.exec();


}
QSqlQueryModel* Person::afficherperson()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM TAB_PERSO");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_PERSO"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMPERSO"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("TELEPHONE"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("EMAIL"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("IDPOSTE"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("PRENOM"));


  return  model;
}
bool Person::modifierperson(int idperson ){


     QSqlQuery query;
      query.prepare ("update TAB_PERSO set  nomperso =:nomperso, telephone =:telephone, email =:email, idposte =:idposte, prenom =:prenom where id_perso =:id_perso");
      query.bindValue (":nomperso", nomperson);
      query.bindValue (":telephone", telephone);
      query.bindValue (":email", email);
      query.bindValue (":idposte", idposte1);
      query.bindValue (":prenom", prenom);
      query.bindValue (":id_perso", idperson);
     return query.exec();
 }

QSqlQueryModel* Person::selectperson(int idperson1)
{
  QSqlQueryModel* model1=new QSqlQueryModel();
QSqlQuery query;

     query.prepare(" SELECT* from TAB_Perso where id_perso=:idperson1");
     query.bindValue(0, idperson1);

     query.exec();






   model1->setQuery(query);
   model1->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_POSTE"));
   model1->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_POSTE"));
   model1->setHeaderData(2, Qt::Horizontal, QObject::tr("TELEPHONE"));
   model1->setHeaderData(2, Qt::Horizontal, QObject::tr("EMAIL"));
   model1->setHeaderData(2, Qt::Horizontal, QObject::tr("IDPOSTE"));
   model1->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));


  return  model1;
}
QSqlQueryModel * Person::afficher_choix1(QString choix)
 {
     QSqlQueryModel * model =new QSqlQueryModel();

     if (choix=="id")
     {
      model->setQuery("SELECT * FROM tab_perso ORDER BY id_perso ASC;");
     }
     else if(choix=="nomperso")
     {
         model->setQuery("SELECT * FROM tab_perso ORDER BY nomperso ASC ;");
     }
     else if(choix=="idposte")
     {
         model->setQuery("SELECT * FROM tab_perso  ORDER BY idposte ASC;");
     }

     else if (choix=="trier..")
     {
         model->setQuery("SELECT * FROM tab_perso");
     }
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_PERSO"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_PERSO"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("TELEPHONE"));
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("EMAIL"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDPOSTE"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
     return model;
 }
