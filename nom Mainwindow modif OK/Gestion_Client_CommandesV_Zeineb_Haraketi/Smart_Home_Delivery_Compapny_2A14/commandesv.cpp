#include "commandesv.h"

CommandesV::CommandesV()
{
 Id_CommandesVente=0;
 nom_Produit="";
 Prix=0;
 Date_Fabrication="";
}

CommandesV::CommandesV(int id,QString name,float prixcommd,QString dateF){

    this->Id_CommandesVente=id;
    this->Prix=prixcommd;
    this->nom_Produit=name;
    this->Date_Fabrication=dateF;
}

//-------------------Ajouter-------------------------------------------------//

bool CommandesV::ajouter(){
    QSqlQuery query;
    QString res= QString::number(Id_CommandesVente);
    QString res1= QString::number(Prix);

    query.prepare("INSERT INTO COMMANDESV(id,name,prixcommd,dateF)" "VALUES(:Id_CommandesVente,:nom_Produit,:Prix,:Date_Fabrication)");

    query.bindValue(":Id_ComandesVente",res);
    query.bindValue(":nom_Produit",nom_Produit);
    query.bindValue(":Prix",res1);
    query.bindValue(":Date_Fabrication",Date_Fabrication);


return query.exec();

}

//-------------------Afficher-------------------------------------------------//

QSqlQueryModel * afficher(){
    QSqlQueryModel *model=new QSqlQueryModel();
        model->setQuery("select * from COMMANDESV ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_CommandesVente"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_Produit"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix "));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date_Fabrication"));

return model;

}

//-------------------Supprimer-------------------------------------------------//

bool CommandesV::supprimer(int ID){
    QSqlQuery query;

    QString res= QString::number(ID);
    query.prepare(" DELETE FROM COMMANDESV WHERE ID= :Id_CommandesVente");
    query.bindValue(":ID",res);

return query.exec();

}

//------------------- Modifier -----------------------------------------//

bool CommandesV::modifier(int id,QString name,float prixcommd,QString dateF){
     QSqlQuery query;

     Id_CommandesVente= id;
     nom_Produit= name;
     Prix= prixcommd;
     Date_Fabrication= dateF;

     query.prepare(" Update CommandesV Set Id_CommandesVente= id,nom_Produit= 'name', Prix= prixcommd, Date_Fabrication= 'dateF' Where Id_CommandesVente ");

     return query.exec();

}

//--------------------- LES METIERS--------------------------------------------//

//----------------------- FCT TRIER ----------------------------------------//

QSqlQueryModel * TrierCommandes(){
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from COMMANDESV by ID_COMMANDESVENTE asc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_CommandesVente"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_Produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date_Fabrication"));

return model;
}
