#include "client.h"

Client::Client()
{
 Id_Client= 0;
 nom="";
 prenom="";
 age=0;
 Date_naissance= "";
 Email="";
 adresse="";
 tel=0;
 NumCarte="";
 Poids=0;
 Taille=0;
 Gender="";
}
Client::Client(int id,QString name,QString fname,int old,QString date,QString mail,QString adr,int num,QString carte,float p,int t,QString g){
    this->Id_Client=id;
    this->nom= name;
    this->prenom=fname;
    this->age=old;
    this->Date_naissance=date;
    this->Email= mail;
    this->adresse= adr;
    this->tel= num;
    this->NumCarte=carte;
    this->Poids=p;
    this->Taille=t;
    this->Gender=g;
}

//-------------------Ajouter-------------------------------------------------//

bool Client::ajouter(){
    QSqlQuery query;
    QString res= QString::number(Id_Client);

    query.prepare("INSERT into Client(Id_Client,nom,prenom,age,Date_naissance,Email,adresse,tel,NumCarte,Poids,Taille,Gender)" "VALUES(:Id_Client,:nom,:prenom,:age,:Date_naissance,:Email,:adresse,:tel,:NumCarte,:Poids,:Taille,:Gender)");

    query.bindValue(":Id_ComandesVente",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":age",age);
    query.bindValue(":Date_naissance",Date_naissance);
    query.bindValue(":Email",Email);
    query.bindValue(":adresse",adresse);
    query.bindValue(":tel",tel);
    query.bindValue(":NumCarte",NumCarte);
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
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date_naissance"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("adresse"));
        model->setHeaderData(7, Qt::Horizontal, QObject::tr("tel"));
        model->setHeaderData(8, Qt::Horizontal, QObject::tr("NumCarte"));
        model->setHeaderData(9, Qt::Horizontal, QObject::tr("Poids"));
        model->setHeaderData(10, Qt::Horizontal, QObject::tr("Taille"));
        model->setHeaderData(11, Qt::Horizontal, QObject::tr("Gender"));

return model;

}

//-------------------Supprimer-------------------------------------------------//

bool Client::supprimer(int ID){
    QSqlQuery query;

    QString res= QString::number(ID);
    query.prepare(" DELETE FROM CLIENT WHERE ID= :Id_Client");
    query.bindValue(":ID",res);

return query.exec();

}

//------------------- Modifier -----------------------------------------//

bool Client::modifier(int id,QString name,QString fname,int old,QString date,QString mail,QString adr,int num,QString carte,float p,int t,QString g){
     QSqlQuery query;

     Id_Client=id;
     nom=name;
     prenom= fname;
     age=old;
     Date_naissance=date;
     Email=mail;
     adresse= adr;
     tel=num;
     NumCarte= carte;
     Poids=p;
     Taille=t;
     Gender=g;

     query.prepare(" Update CommandesV Set Id_Client= id,nom= 'name',prenom='fname',age=old, Date_naissance= 'date', Email= 'mail',adresse= 'adr',tel=num,NumCarte= 'carte',Poids=p,Taille=t,Gender='g' Where Id_CommandesVente ");

     return query.exec();

}

//--------------------- LES METIERS--------------------------------------------//

//----------------------- FCT TRIER ----------------------------------------//

QSqlQueryModel * TrierClient(){

    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from CLIENT by Id_Client asc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_Client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date_naissance"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("tel"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("NumCarte"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("Poids"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("Taille"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("Gender"));


    return model;
}
