#include "mainwindow.h"
#include"connection.h"
#include <QApplication>
#include <QMessageBox>
#include"machine.h"
int main(int argc, char *argv[])
{   Connection c;
    machines p;
    QApplication a(argc, argv);
    bool test=c.createconnection();


    MainWindow w;
    if(test)
  {  w.show();
      QMessageBox::information(nullptr,QObject::tr("database is open"),
                               QObject::tr("connection succesful.\n"),
                               QMessageBox::Ok);
    }
    else
    QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                          QObject::tr("connection failed.\n""click Cancel to exit."),
            QMessageBox::Cancel);
    return a.exec();
}
