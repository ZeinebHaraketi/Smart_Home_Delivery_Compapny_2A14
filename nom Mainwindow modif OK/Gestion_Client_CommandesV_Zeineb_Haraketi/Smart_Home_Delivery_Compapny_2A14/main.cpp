#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include "client.h"
#include "utilisateur.h"
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
    bool test= c.createconnection();
    MainWindow w;


    if (test)// si la connexion est etablie
    {
        w.show();
        QMessageBox::information(nullptr,QObject::tr("database is open"),QObject::tr("connection successful. \n" "Click Cancel to exit."),QMessageBox::Cancel);


    }
    else //Si la connexion a echoue
    {
        QMessageBox::critical(nullptr,QObject::tr("database is not open"),QObject::tr("connection failed. \n" "Click Cancel to exit."),QMessageBox::Cancel);

    }
    return a.exec();
}
