#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>


connection::connection()
{
   db = QSqlDatabase::addDatabase("QODBC");
}

bool connection::createconnection(){
   bool test=false;
  // db = QSqlDatabase::addDatabase("QODBC");
   // db.driverName().contains("SQL",Qt::CaseInsensitive);

    db.setDatabaseName("source");//inserer le nom de la source de données ODBC
    db.setUserName("zeineb");//inserer nom de l'utilisateur
    db.setPassword("wolf");//inserer mot de passe de cet utilisateur

    if (db.open())
    {test=true;

   }

        return  test;
}

void connection::closeconnection(){
    db.close();
}

