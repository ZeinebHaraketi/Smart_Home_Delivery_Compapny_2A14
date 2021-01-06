#include "commd_v_ang.h"
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtDebug>
#include <QDebug>
commd_v_ang::commd_v_ang()
{
    ID_COMMDV=0;
    name_Product="";
    Price=0;
    Date_M="";
    qte=0;
}
commd_v_ang::commd_v_ang(int idv,QString na,int pr,QString date,int quat){
    this->ID_COMMDV= idv;
    this->name_Product= na;
    this->Price= pr;
    this->Date_M= date;
    this->qte= quat;

}
//The Setters//
void commd_v_ang::set_IDCOMMDV(int idv){ID_COMMDV=idv;}
void commd_v_ang::set_nameProduct(QString name){name_Product=name;}
void commd_v_ang::set_Price(int pr){Price=pr;}
void commd_v_ang::set_DateM(QString date){Date_M=date;}
void commd_v_ang::set_quantite(int quant){qte=quant;}

//------------------------------------ ADD COMMDV---------------------------------------------------//

bool commd_v_ang::ADD_CommDV(){
    QSqlQuery query4;

    query4.prepare(" INSERT INTO COMMANDESVENTE(ID_COMMANDESVENTE,NOM_PRODUIT,PRIX,DATE_FABRICATION,QTE)" "VALUES(:ID_COMMDV,:name_Product,:Price,:Date_M,:qte)");

    query4.bindValue(":ID_COMMDV",get_IDCOMMDV());
    query4.bindValue(":name_Product",get_nameProduct());
    query4.bindValue(":Price",get_Price());
    query4.bindValue(":Date_M",get_DateM());
    query4.bindValue(":qte",get_quantite());

    return query4.exec();
}

//-------------------------------- DISPLAY COMMDV-------------------------------------------//
QSqlQueryModel * commd_v_ang::DISPLAY_CommDV(){

    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM COMMANDESVENTE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_COMMDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("name_Product"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date_M"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite"));

    return model;
}

//---------------------------------- SEARCH COMMDV---------------------------------------//
void commd_v_ang::SearchCommandes(int idv){

    QSqlQuery query4;

    query4.prepare("SELECT * FROM COMMANDESVENTE WHERE Id_CommandesVente= '"+QString::number(idv)+"'");
    query4.exec();

    while(query4.next()){
        ID_COMMDV= query4.value(0).toInt();
        name_Product= query4.value(1).toString();
        Price= query4.value(2).toInt();
        Date_M= query4.value(3).toString();
    }

}

//----------------------------- MODIFY COMMDV----------------------------------------------------//

bool commd_v_ang::Modify_CommDV(Ui::GestionClient_ComdV *ui){
    int idv= ui->l_modif_idv->text().toInt();
    QString name1= ui->l_modif_name->text();
    int price= ui->l_modif_price->text().toInt();
    QString dateM= ui->l_modif_dateM->text();
    int qtet= ui->l_modify_qte->text().toInt();

    commd_v_ang CA(idv,name1,price,dateM,qtet);

    QSqlQuery query4;

    query4.prepare(" UPDATE COMMANDESVENTE SET NOM_PRODUIT ='"+name1+"', PRIX= '"+QString::number(price)+"',DATE_FABRICATION='"+dateM+"',QTE='"+QString::number(qtet)+"' WHERE ID_COMMANDESVENTE= '"+QString::number(idv)+"'");
    query4.bindValue(":ID_COMMDV",get_IDCOMMDV());
    query4.bindValue(":name_Product",get_nameProduct());
    query4.bindValue(":Price",get_Price());
    query4.bindValue(":Date_M",get_DateM());
    query4.bindValue(":qte",get_quantite());

    return query4.exec();
}

//--------------------------------- REMOVE COMMDV-------------------------------------------------//
bool commd_v_ang::Remove_CommDV(Ui::GestionClient_ComdV *ui){

    int idv= ui->l_remove_idv->text().toInt();
    commd_v_ang CA(idv,"",0,"",0);

    QSqlQuery query4;

    query4.prepare(" DELETE  From COMMANDESVENTE  WHERE Id_CommandesVente= "+QString::number(idv)+" ");
    query4.bindValue(":ID_COMMDV",get_IDCOMMDV());
    query4.bindValue(":name_Product",get_nameProduct());
    query4.bindValue(":Price",get_Price());
    query4.bindValue(":Date_M",get_DateM());
    query4.bindValue(":qte",get_quantite());

    return query4.exec();
}

//------------------------------ SORT COMMDV----------------------------------------------//
QSqlQueryModel * commd_v_ang::SortCommandes(QString choice1){
    QSqlQueryModel *model=new QSqlQueryModel();

    if(choice1=="ID_COMMDV"){
         model->setQuery("SELECT * FROM COMMANDESVENTE ORDER BY ID_COMMANDESVENTE ASC ");
    }
    else if("name_Product"){
        model->setQuery("SELECT * FROM COMMANDESVENTE ORDER BY NOM_PRODUIT ");
    }
    else if(choice1=="Price"){
         model->setQuery("SELECT * FROM COMMANDESVENTE ORDER BY PRIX ASC ");
    }
    else if(choice1=="Date_M"){
          model->setQuery("SELECT * FROM COMMANDESVENTE ORDER BY DATE_FABRICATION ");
    }
    else if(choice1=="Sort By"){
        model->setQuery("SELECT * FROM COMMANDESVENTE");
    }
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_COMMDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("name_Product"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date_M"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite"));

 return model;
}
