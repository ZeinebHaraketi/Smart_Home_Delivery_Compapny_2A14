#include "clientanglais.h"
#include "connection.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

ClientAnglais::ClientAnglais()
{
   ID_Client= 0;
   name="";
   fname="";
   Age=0;
   Mail= "";
   Tel=0;
   Weight=0;
   Height=0;
   Gender1="";
}

ClientAnglais::ClientAnglais(int idc1,QString n,QString fn,int a,QString m,int t,int w,int h,QString gd){
    this->ID_Client= idc1;
    this->name= n;
    this->fname= fn;
    this->Age=a;
    this->Mail=m;
    this->Tel=t;
    this->Weight=w;
    this->Height=h;
    this->Gender1= gd;

}

// The Setters//

void ClientAnglais::set_Name(QString na){name=na;}
void ClientAnglais::set_fname(QString fna){fname=fna;}
void ClientAnglais::set_Mail1(QString m){Mail=m;}
void ClientAnglais::set_Tel1(int t){ Tel= t;}
void ClientAnglais::set_ID(int idc1){ID_Client=idc1;}
void ClientAnglais::set_Weight(int w){Weight=w;}
void ClientAnglais::set_Height(int h){Height=h;}
void ClientAnglais::set_Gender1(QString gd){Gender1=gd;}
void ClientAnglais::set_Age(int a){Age=a;}

//-------------------ADD Client-------------------------------------------------//

bool ClientAnglais::AddClient(){
    QSqlQuery query;

    query.prepare(" INSERT INTO CLIENT(ID_CLIENT,NOM,PRENOM,GENDER,POIDS,TAILLE,TEL,EMAIL,AGE)" "VALUES(:ID_Client,:name,:fname,:Gender1,:Weight,:Height,:Tel,:Mail,:Age)");



    query.bindValue(":ID_Client",get_IDC1lient());
    query.bindValue(":name",get_name());
    query.bindValue(":fname",get_fname());
    query.bindValue(":Gender1",get_Gender1());
    query.bindValue(":Weight",get_Weight());
    query.bindValue(":Height",get_Height());
    query.bindValue(":Tel",get_Tel1());
    query.bindValue(":Mail",get_mail1());
    query.bindValue(":Age",get_Age());


 return query.exec();
}

//-------------------DISPLAY Client-------------------------------------------------//

QSqlQueryModel * ClientAnglais::DisplayClient(){
    QSqlQueryModel *model1=new QSqlQueryModel();
        model1->setQuery("SELECT * FROM CLIENT ");
        model1->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_Client"));
        model1->setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
        model1->setHeaderData(2, Qt::Horizontal, QObject::tr("fname"));
        model1->setHeaderData(3, Qt::Horizontal, QObject::tr("Gender1"));
        model1->setHeaderData(4, Qt::Horizontal, QObject::tr("Weight"));
        model1->setHeaderData(5, Qt::Horizontal, QObject::tr("Height"));
        model1->setHeaderData(6, Qt::Horizontal, QObject::tr("Tel"));
        model1->setHeaderData(7, Qt::Horizontal, QObject::tr("Mail"));
        model1->setHeaderData(8, Qt::Horizontal, QObject::tr("Age"));

return model1;
}


//------------------ SEARCH Client-----------------------------------//

void ClientAnglais::SearchClient(int ide1){

    QSqlQuery query3;
    query3.prepare("SELECT * FROM CLIENT WHERE ID_CLIENT= '"+QString::number(ide1)+"'");
    query3.exec();

    while(query3.next()){
        ID_Client= query3.value(0).toInt();
        name = query3.value(1).toString();
        fname = query3.value(2).toString();
        Gender1 =query3.value(3).toString();
        Weight= query3.value(4).toInt();
        Height= query3.value(5).toInt();
        Tel= Weight= query3.value(6).toInt();
        Gender1= query3.value(7).toString();
        Age= query3.value(8).toInt();

    }
}


//--------------------- MODIFY Client ----------------------------------//

bool ClientAnglais::ModifyClient(Ui::GestionClient_ComdV *ui){

    int idc1= ui->lineEdit_idA->text().toInt();
    QString name1= ui->lineEdit_N->text();
    QString fname1= ui->lineEdit_FN->text();
    QString Gender1= ui->lineEdit_GENDER->text();
    int Weight= ui->lineEdit_WA->text().toInt();
    int Height= ui->lineEdit_HA->text().toInt();
    int Tel1= ui->lineEdit_TEL->text().toInt();
    QString email1= ui->lineEdit_EmailA->text();
    int Age= ui->lineEdit_AGEA->text().toInt();

    ClientAnglais CLA(idc1,name1,fname1,Age,email1,Tel1,Weight,Height,Gender1);
    QSqlQuery query3;

// query.prepare("UPDATE CLIENT SET NOM ='"+name+"',PRENOM ='"+fname+"',GENDER ='"+gender+"',POIDS='"+QString::number(poids)+"',TAILLE='"+QString::number(taille)+"',TEL='"+QString::number(tel)+"',EMAIL='"+email+"',AGE='"+QString::number(age)+"' WHERE ID_CLIENT= '"+QString::number(idc)+"'");
    query3.prepare(" UPDATE CLIENT SET NOM='"+name1+"', PRENOM='"+fname1+"',GENDER= '"+Gender1+"',POIDS= '"+QString::number(Weight)+"',TAILLE= '"+QString::number(Height)+"',TEL='"+QString::number(Tel1)+"',Email= '"+email1+"',AGE= '"+QString::number(Age)+"' WHERE ID_CLIENT= '"+QString::number(idc1)+"'  ");


    query3.bindValue(":ID_Client",get_IDC1lient());
    query3.bindValue(":name",get_name());
    query3.bindValue(":fname",get_fname());
    query3.bindValue(":Gender1",get_Gender1());
    query3.bindValue(":Weight",get_Weight());
    query3.bindValue(":Height",get_Height());
    query3.bindValue(":Tel",get_Tel1());
    query3.bindValue(":Mail",get_mail1());
    query3.bindValue(":Age",get_Age());

    return query3.exec();
}

//------------------------------------------ REMOVE Client -----------------------------------------------------------//

bool ClientAnglais::RemoveClient(Ui::GestionClient_ComdV *ui){
    int idc1= ui->lineEdit_53->text().toInt();
    ClientAnglais CLA(idc1,"","",0,"",0,0,0,"");

    QSqlQuery query3;

    query3.prepare(" DELETE FROM CLIENT WHERE ID_Client= " +QString::number(idc1)+" ");

    query3.bindValue(":ID_Client",get_IDC1lient());
    query3.bindValue(":name",get_name());
    query3.bindValue(":fname",get_fname());
    query3.bindValue(":Gender1",get_Gender1());
    query3.bindValue(":Weight",get_Weight());
    query3.bindValue(":Height",get_Height());
    query3.bindValue(":Tel",get_Tel1());
    query3.bindValue(":Mail",get_mail1());
    query3.bindValue(":Age",get_Age());

 return query3.exec();

}

//--------------------------------------- SORT Client-------------------------------//

QSqlQueryModel * ClientAnglais::SortClient(QString choice){
    QSqlQueryModel *model1= new QSqlQueryModel();

    if (choice== "ID_Client"){
        model1->setQuery(" SELECT * FROM CLIENT ORDER BY ID_CLIENT ASC");
    }
    else if (choice=="Weight"){
         model1->setQuery("SELECT * FROM CLIENT ORDER BY POIDS ASC ");
    }
    else if (choice== "Height"){
        model1->setQuery("SELECT * FROM CLIENT ORDER BY TAILLE ASC ");
    }
    else if (choice=="Age"){
          model1->setQuery("SELECT * FROM CLIENT ORDER BY age ASC ");
    }
    else if (choice=="Sort By"){
        model1->setQuery("SELECT * FROM CLIENT ");
    }

    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_Client"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("fname"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("Gender1"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("Weight"));
    model1->setHeaderData(5, Qt::Horizontal, QObject::tr("Height"));
    model1->setHeaderData(6, Qt::Horizontal, QObject::tr("Tel"));
    model1->setHeaderData(7, Qt::Horizontal, QObject::tr("Mail"));
    model1->setHeaderData(8, Qt::Horizontal, QObject::tr("Age"));

    return model1;

}
