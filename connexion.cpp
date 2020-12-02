#include "connexion.h"
#include<QtSql/QSqlDatabase>

connexion::connexion()
{

}
bool connexion::createconnect()
{
    bool test=false;
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test1");
    //db.setUserName("system");
    db.setPassword("hamdi02");
    db.setUserName("system");

    if(db.open())
        test=true;

    return test;
}
