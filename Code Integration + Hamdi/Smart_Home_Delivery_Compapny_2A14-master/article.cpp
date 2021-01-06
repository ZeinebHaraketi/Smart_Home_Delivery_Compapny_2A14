#include "article.h"
#include<QtSql/QSqlQuery>
#include<QDebug>
#include<QObject>
#include<QString>
#include<QtSql/QSqlQueryModel>
article::article()
{
  prix=0;
  quantite=0;
  code=0;
  type_ar="";
}
article::article(int p,int qte,int cod,QString type){
    this->prix=p;
    this->quantite=qte;
    this->code=cod;
    this->type_ar=type;
}

//SETTERS
void article::setprix(int prix)
{this->prix=prix;}
void article::setquantite(int quantite)
{this->quantite=quantite;}
void article::settype_ar(QString type_ar)
{this->type_ar=type_ar;}
void article::setcode(int code)
{this->code=code;}

//CRUD
//-------------------- AJOUT ----------------------------------------//

bool article::ajouter_ar()
{
                  QSqlQuery query;
                  QString res=QString::number(prix);
                  query.prepare("INSERT INTO ARTICLE (CODE,QUANTITE,PRIX,TYPE_AR) " "VALUES (:code, :quantite, :prix, :type_ar)");
                  query.bindValue(":code",getcode());
                  query.bindValue(":quantite",getquantite());
                  query.bindValue(":prix", getprix());
                  query.bindValue(":type_ar", gettype_ar());

                  return query.exec();

}

//-------------------- AFFICHER ----------------------------//

QSqlQueryModel* article::afficher()
{QSqlQueryModel* model=new QSqlQueryModel();


    model->setQuery("SELECT* FROM ARTICLE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type_ar"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("quantite"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));
    return model;}


//-------------------- SUPPRIMER-------------------------------//

bool article::supprimer(Ui::GestionMarkt *ui)
{
 int cod= ui->l_supp_code->text().toInt();
 article A(0,0,0,"");

 QSqlQuery query;

query.prepare(" DELETE FROM ARTICLE WHERE code= "+QString::number(cod)+" ");

query.bindValue(":code",getcode());
query.bindValue(":quantite",getquantite());
query.bindValue(":prix", getprix());
query.bindValue(":type_ar", gettype_ar());

return query.exec();
}

//--------------------- MODIFIER -------------------------------//

bool article::modifier(Ui::GestionMarkt *ui)
{
    QSqlQuery query;
     int cod= ui->l_modif_code->text().toInt();
     int prix= ui->l_modif_prix->text().toInt();
     int qte= ui->l_modif_qte->text().toInt();
     QString type= ui->l_modif_type->text();

     article A(prix,qte,cod,type);

     query.prepare(" UPDATE ARTICLE SET CODE= '"+QString::number(cod)+"',PRIX= '"+QString::number(prix)+"',QUANTITE= '"+QString::number(qte)+"',TYPE_AR='"+type+"' WHERE CODE= '"+QString::number(cod)+" ");
     query.bindValue(":code",getcode());
     query.bindValue(":quantite",getquantite());
     query.bindValue(":prix", getprix());
     query.bindValue(":type_ar", gettype_ar());
           return query.exec();
}

//---------------------- RECHERCHER ----------------------------------//
void article::RechercherART(int ide){
   QSqlQuery query2;

   query2.prepare(" SELECT * FROM ARTICLE WHERE code= '"+QString::number(ide)+"'");
   query2.exec();

   while(query2.next()){
       prix= query2.value(0).toInt();
       quantite = query2.value(1).toInt();
       code= query2.value(2).toInt();
       type_ar= query2.value(3).toString();


   }
}
