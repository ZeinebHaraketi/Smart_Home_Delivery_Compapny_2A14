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
Client::Client(int id,QString name,QString fname,int old,QString mail,int num,int p,int t,QString g){
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
void Client::set_Poids(int p){Poids=p;}
void Client::set_Taille(int t){Taille=t;}
void Client::set_Gender(QString g){Gender=g;}
void Client::set_age(int old){age=old;}


//-------------------Ajouter-------------------------------------------------//

bool Client::ajouterclient(){



    QSqlQuery query;

    //query.prepare(" INSERT INTO COMMANDESVENTE(ID_COMMANDESVENTE,NOM_PRODUIT,PRIX,DATE_FABRICATION)" "VALUES(:Id_CommandesVente,:nom_Produit,:Prix,:Date_Fabrication)");
    query.prepare("INSERT INTO CLIENT(ID_CLIENT,NOM,PRENOM,GENDER,POIDS,TAILLE,TEL,EMAIL,AGE)" "VALUES(:Id_Client,:nom,:prenom,:gender,:poids,:taille,:tel,:email,:age)");

    query.bindValue(":Id_Client",get_IDClient());
    query.bindValue(":nom",get_nom());
    query.bindValue(":prenom",get_prenom());
    query.bindValue(":gender",get_gender());
    query.bindValue(":poids",get_poids());
    query.bindValue(":taille",get_taille());
    query.bindValue(":tel",get_tel());
    query.bindValue(":email",get_mail());
    query.bindValue(":age",get_age());


    return query.exec();
}

//-------------------Afficher-------------------------------------------------//

QSqlQueryModel * Client::afficherclient(){
    QSqlQueryModel *model=new QSqlQueryModel();
        model->setQuery("select * from CLIENT ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_Client"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("gender"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("poids"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("taille"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("tel"));
        model->setHeaderData(7, Qt::Horizontal, QObject::tr("email"));
        model->setHeaderData(8, Qt::Horizontal, QObject::tr("age"));

return model;

}

/*
QSqlQueryModel * CommandesV::afficher(){

    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from COMMANDESVENTE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_CommandesVente"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_Produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date_Fabrication"));
    return model;
}
 */

//-------------------Supprimer-------------------------------------------------//

bool Client::supprimerclient(Ui::MainWindow *ui){
    int idc= ui->lineEdit_id_12->text().toInt();
     Client client(idc,"","",0,"",0,0,0,"");

     QSqlQuery query;
    query.prepare(" DELETE FROM CLIENT WHERE Id_Client= "+QString::number(idc)+"");
    query.bindValue(":Id_Client",get_IDClient());
    query.bindValue(":nom",get_nom());
    query.bindValue(":prenom",get_prenom());
    query.bindValue(":gender",get_gender());
    query.bindValue(":poids",get_poids());
    query.bindValue(":taille",get_taille());
    query.bindValue(":tel",get_tel());
    query.bindValue(":email",get_mail());
    query.bindValue(":age",get_age());



return query.exec();

}

//------------------- Modifier -----------------------------------------//


bool Client::modifierclient(Ui::MainWindow *ui){

     int idc= ui->lineEdit_id_3->text().toInt();
     QString name= ui->lineEdit_id_4->text();
     QString fname= ui->lineEdit_id_5->text();
     QString gender= ui->lineEdit_id_6->text();
     int poids= ui->lineEdit_id_7->text().toInt();
     int taille= ui->lineEdit_id_8->text().toInt();
     int tel= ui->lineEdit_id_9->text().toInt();
     QString email= ui->lineEdit_id_10->text();
     int age= ui->lineEdit_id_11->text().toInt();

Client c(idc,name,fname,age,email,tel,poids,taille,gender);
QSqlQuery query;

       query.prepare("UPDATE CLIENT SET NOM ='"+name+"',PRENOM ='"+fname+"',GENDER ='"+gender+"',POIDS='"+QString::number(poids)+"',TAILLE='"+QString::number(taille)+"',TEL='"+QString::number(tel)+"',EMAIL='"+email+"',AGE='"+QString::number(age)+"' WHERE ID_CLIENT= '"+QString::number(idc)+"'");
       query.bindValue(":Id_Client",get_IDClient());
       query.bindValue(":nom",get_nom());
       query.bindValue(":prenom",get_prenom());
       query.bindValue(":gender",get_gender());
       query.bindValue(":poids",get_poids());
       query.bindValue(":taille",get_taille());
       query.bindValue(":tel",get_tel());
       query.bindValue(":email",get_mail());
       query.bindValue(":age",get_age());


     return query.exec();

}

//--------------------- LES METIERS--------------------------------------------//

//----------------------- FCT TRIER ----------------------------------------//

QSqlQueryModel * Client::TrierClient(QString choix){

    QSqlQueryModel *model=new QSqlQueryModel();

    if(choix=="Id_Client"){
        model->setQuery("SELECT * FROM CLIENT ORDER BY ID_CLIENT ASC ");
    }
    else if(choix=="Poids"){
        model->setQuery("SELECT * FROM CLIENT ORDER BY POIDS ASC ");
    }
    else if(choix=="taille"){
        model->setQuery("SELECT * FROM CLIENT ORDER BY TAILLE ASC ");
    }
    else if(choix=="age"){
        model->setQuery("SELECT * FROM CLIENT ORDER BY age ASC ");
    }
    else if(choix=="trier"){
        model->setQuery("SELECT * FROM CLIENT ");
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_Client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("tel"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Poids"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Taille"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Gender"));


    return model;
}

//------------------------- FCT Rechercher -------------------------------------//

void Client::RechercherClient(int ide){

    QSqlQuery query2;


    query2.prepare ("SELECT * FROM CLIENT WHERE ID_CLIENT= '"+QString::number(ide)+"'");
    query2.exec();

    while(query2.next()){
        Id_Client=query2.value(0).toInt();
        nom = query2.value(1).toString();
        prenom = query2.value(2).toString();
        Gender=query2.value(3).toString();
        Poids= query2.value(4).toInt();
        Taille= query2.value(5).toInt();
        tel=query2.value(6).toInt();
        Email=query2.value(7).toString();
        age=query2.value(8).toInt();
                        }
}
