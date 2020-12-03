#include "client.h"
#include "connection.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Client::Client()
{
 Id_Client= 0;
 nom="";
 prenom="";
 age=0;
// Date_naissance= "";
 Email="";
 //adresse="";
 tel=0;
 //NumCarte="";
 Poids=0;
 Taille=0;
 Gender="";
}
Client::Client(int id,QString name,QString fname,int old,QString mail,int num,float p,int t,QString g){
    this->Id_Client=id;
    this->nom= name;
    this->prenom=fname;
    this->age=old;
    this->Email= mail;
    this->tel= num;
    this->Poids=p;
    this->Taille=t;
    this->Gender=g;
}

// Les Setters:

void Client::set_Nom(QString name){ nom=name; }
void Client::set_Prenom(QString fname){ prenom= fname;}
//void Client::set_Date(QString date){Date_naissance=date;}
void Client::set_Mail(QString mail){Email=mail;}
void Client::set_Tel(int num){tel=num;}
//void Client::set_Adresse(QString ad){adresse=ad;}
void Client::set_Id(int id){Id_Client=id;}
//void Client::set_NumCarte(QString carte){NumCarte=carte;}
void Client::set_Poids(float p){Poids=p;}
void Client::set_Taille(int t){Taille=t;}
void Client::set_Gender(QString g){Gender=g;}
void Client::set_age(int old){age=old;}


//-------------------Ajouter-------------------------------------------------//

bool Client::ajouterclient(){

    QString res= QString::number(Id_Client);

    QSqlQuery query;

    query.prepare("INSERT into Client(Id_Client,nom,prenom,age,Email,tel,Poids,Taille,Gender)" "VALUES(:Id_Client,:nom,:prenom,:age,:Email,:tel,:Poids,:Taille,:Gender)");

    query.bindValue(":Id_ComandesVente",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":age",age);
    //query.bindValue(":Date_naissance",Date_naissance);
    query.bindValue(":Email",Email);
    //query.bindValue(":adresse",adresse);
    query.bindValue(":tel",tel);
    //query.bindValue(":NumCarte",NumCarte);
    query.bindValue(":Poids",Poids);
    query.bindValue(":Taille",Taille);
    query.bindValue(":Gender",Gender);

    return query.exec();
}

//-------------------Afficher-------------------------------------------------//

QSqlQueryModel * afficherclient(){
    QSqlQueryModel *model=new QSqlQueryModel();
        model->setQuery("select * from CLIENT ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_Client"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
        //model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date_naissance"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
        //model->setHeaderData(6, Qt::Horizontal, QObject::tr("adresse"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("tel"));
        //model->setHeaderData(8, Qt::Horizontal, QObject::tr("NumCarte"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Poids"));
        model->setHeaderData(7, Qt::Horizontal, QObject::tr("Taille"));
        model->setHeaderData(8, Qt::Horizontal, QObject::tr("Gender"));

return model;

}

//-------------------Supprimer-------------------------------------------------//

bool Client::supprimerclient(int ID){
    QSqlQuery query;

    QString res= QString::number(ID);
    query.prepare(" DELETE FROM CLIENT WHERE ID= :Id_Client");
    query.bindValue(":ID",res);

return query.exec();

}

//------------------- Modifier -----------------------------------------//

//int,QString,QString,int,QString,int,float,int,QString
bool Client::modifierclient(int id,QString name,QString fname,int old,QString mail,int num,float p,int t,QString g){
     QSqlQuery query;

     Id_Client=id;
     nom=name;
     prenom= fname;
     age=old;
     //Date_naissance=date;
     Email=mail;
     //adresse= adr;
     tel=num;
    // NumCarte= carte;
     Poids=p;
     Taille=t;
     Gender=g;

     query.prepare(" Update CLIENT Set Id_Client=:id,nom=:name,prenom=:fname,age=:old, Date_naissance=:date, Email=:mail,adresse=:adr,tel=:num,NumCarte=:carte,Poids=:p,Taille=:t,Gender=:g WHERE Id_Client ");

     return query.exec();

}

//--------------------- LES METIERS--------------------------------------------//

//----------------------- FCT TRIER ----------------------------------------//

QSqlQueryModel * Client::TrierClient(){

    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from CLIENT by Id_Client asc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_Client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
    //model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date_naissance"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
    //model->setHeaderData(6, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("tel"));
    //model->setHeaderData(8, Qt::Horizontal, QObject::tr("NumCarte"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Poids"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Taille"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Gender"));


    return model;
}

//------------------------- FCT Rechercher -------------------------------------//

void Client::RechercherClient(QString fname,int ide,QString name){

    QSqlQuery query;
    query.prepare(" SELECT * FROM CLIENT WHERE prenom=:fname AND nom=:name AND Id_Client=: ide ");
    query.bindValue(":name",name);
    query.bindValue(":fname",fname);
    query.bindValue(":ide",ide);
    query.exec();
    while(query.next())
    {
    Id_Client=query.value(0).toInt();
    nom = query.value(1).toString();
    prenom = query.value(2).toString();
   // Date_naissance= query.value(3).toString();
    //adresse=query.value(4).toString();
    Email=query.value(3).toString();
    tel=query.value(4).toInt();
    Gender=query.value(5).toString();
    Poids= query.value(6).toFloat();
    Taille= query.value(7).toInt();
    //NumCarte= query.value(10).toString();


}

}
