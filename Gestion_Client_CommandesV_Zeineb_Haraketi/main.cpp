#include "mainwindow.h"
#include <QMessageBox>
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // QSqlDatabase db;
    connection c;
    c.createconnection();
    MainWindow w;
    w.show();

    /*{w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


*/
    return a.exec();
}

