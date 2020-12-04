#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{

    db=QSqlDatabase::addDatabase("QODBC");

db.setDatabaseName("projet2a");
db.setUserName("amine");//inserer nom de l'utilisateur
db.setPassword("amine");//inserer mot de passe de cet utilisateur


if (db.open())
return true;
    return  false;
}
void Connexion::fermerConnexion()
{db.close();}
