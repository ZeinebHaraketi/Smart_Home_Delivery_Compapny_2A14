#include "connection.h"

Connection::Connection()
{

}
bool Connection::createconnection()
{
    db=QSqlDatabase::addDatabase("QODBC");
       db.setDatabaseName("valo");
       db.setUserName("mahdi");
       db.setPassword("garrawi1999");
       bool test=false;
       if (db.open())
       test=true;

           return  test;

}
void Connection::closeConnection(){db.close();}
