#include "connection.h"

// test tutoriel Git
Connection::Connection()
{

}
bool Connection::createconnection()
{
    db=QSqlDatabase::addDatabase("QODBC");
       db.setDatabaseName("projet2a");//inserer le nom de la source de données ODBC
       db.setUserName("amine");//inserer nom de l'utilisateur
       db.setPassword("amine");//inserer mot de passe de cet utilisateur
       bool test=false;
       if (db.open())
       test=true;

           return  test;

}
void Connection::closeConnection(){db.close();}
