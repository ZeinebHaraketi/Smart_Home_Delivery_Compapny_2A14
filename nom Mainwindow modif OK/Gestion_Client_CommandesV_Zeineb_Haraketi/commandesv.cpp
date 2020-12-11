#include "commandesv.h"
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtDebug>
#include <QDebug>
CommandesV::CommandesV()
{
 Id_CommandesVente=0;
 nom_Produit="";
 Prix=0;
 Date_Fabrication="";
}

CommandesV::CommandesV(int id,QString name,int prixcommd,QString dateF){

    this->Id_CommandesVente=id;
    this->Prix=prixcommd;
    this->nom_Produit=name;
    this->Date_Fabrication=dateF;
}

//Les Setters:
void CommandesV::set_IdCommandV(int ide){Id_CommandesVente=ide;}
void CommandesV::set_nomProduit(QString np){nom_Produit=np;}
void CommandesV::set_Prix(int money){Prix=money;}
void CommandesV::set_DateF(QString date){Date_Fabrication=date;}

//-------------------Ajouter-------------------------------------------------//



bool CommandesV::ajouter(){

    QSqlQuery query;


    query.prepare(" INSERT INTO COMMANDESVENTE(ID_COMMANDESVENTE,NOM_PRODUIT,PRIX,DATE_FABRICATION)" "VALUES(:Id_CommandesVente,:nom_Produit,:Prix,:Date_Fabrication)");
    query.bindValue(":Id_CommandesVente",get_IDCommdV());
    query.bindValue(":nom_Produit",get_nomProduit());
    query.bindValue(":Prix",get_Prix());
    query.bindValue(":Date_Fabrication",get_DateFabrication());


    return query.exec();
}

//-------------------Afficher-------------------------------------------------//


QSqlQueryModel * CommandesV::afficher(){

    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from COMMANDESVENTE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_CommandesVente"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_Produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date_Fabrication"));
    return model;
}

//-------------------Supprimer-------------------------------------------------//


bool CommandesV::supprimer(Ui::GestionClient_ComdV *ui){
    int id= ui->lineEdit_5->text().toInt();

    CommandesV com(id,"",0,"");

    QSqlQuery query;

    query.prepare(" DELETE  From COMMANDESVENTE  WHERE Id_CommandesVente= "+QString::number(id)+" ");
    query.bindValue(":Id_CommandesVente",get_IDCommdV());
    query.bindValue(":nom_Produit",get_nomProduit());
    query.bindValue(":Prix",get_Prix());
    query.bindValue(":Date_Fabrication",get_DateFabrication());


    bool test=query.exec();
    return (test);
}

//------------------- Modifier -----------------------------------------//

bool CommandesV::modifier(Ui::GestionClient_ComdV *ui){


     int id= ui->lineEdit->text().toInt();
     QString nom= ui->lineEdit_2->text();
     int prix= ui->lineEdit_3->text().toInt();
     QString date= ui->lineEdit_4->text();

     CommandesV com(id,nom,prix,date);

     QSqlQuery query;
       query.prepare("UPDATE COMMANDESVENTE SET NOM_PRODUIT ='"+nom+"',PRIX='"+QString::number(prix)+"',DATE_FABRICATION='"+date+"' WHERE ID_COMMANDESVENTE= '"+QString::number(id)+"'");
       query.bindValue(":Id_CommandesVente",get_IDCommdV());
       query.bindValue(":nom_Produit",get_nomProduit());
       query.bindValue(":Prix",get_Prix());
       query.bindValue(":Date_Fabrication",get_DateFabrication());


       return query.exec();

}

//--------------------- LES METIERS--------------------------------------------//

//----------------------- FCT TRIER ----------------------------------------//

QSqlQueryModel * CommandesV::TrierCommandes(QString choix1){
    QSqlQueryModel *model=new QSqlQueryModel();


    if (choix1=="Id_CommandesVente"){
         model->setQuery("SELECT * FROM COMMANDESVENTE ORDER BY ID_COMMANDESVENTE ASC ");
    }
    else if(choix1=="nom_Produit"){
         model->setQuery("SELECT * FROM COMMANDESVENTE ORDER BY NOM_PRODUIT ");
    }
    else if(choix1=="Prix"){
        model->setQuery("SELECT * FROM COMMANDESVENTE ORDER BY PRIX ASC ");
    }
    else if(choix1=="Date_Fabrication"){
        model->setQuery("SELECT * FROM COMMANDESVENTE ORDER BY DATE_FABRICATION ");
    }
    else if(choix1=="tout"){
        model->setQuery("SELECT * FROM COMMANDESVENTE");
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_CommandesVente"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_Produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date_Fabrication"));

return model;
}

//--------------------------- FCT RECHERCHER-----------------------------//

void CommandesV::RechercherCommandes(int id){
    QSqlQuery query2;


    query2.prepare ("SELECT * FROM COMMANDESVENTE WHERE Id_CommandesVente= '"+QString::number(id)+"'");
    query2.exec();

    while(query2.next()){
        Id_CommandesVente= query2.value(0).toInt();
        nom_Produit= query2.value(1).toString();
        Prix=query2.value(2).toInt();
        Date_Fabrication= query2.value(3).toString();
    }


}
