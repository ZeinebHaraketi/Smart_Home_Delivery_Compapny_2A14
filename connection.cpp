#include "connection.h"


// Test tutoriel Git

connection::connection()
{
   db = QSqlDatabase::addDatabase("QODBC");
}

bool connection::createconnection(){
   bool test=false;

    db.setDatabaseName("Source_Projet2A");//inserer le nom de la source de données ODBC
    db.setUserName("zeineb");//inserer nom de l'utilisateur
    db.setPassword("wolf");//inserer mot de passe de cet utilisateur

    if (db.open())
    test=true;





        return  test;

}

void connection::closeconnection(){
    db.close();
}
