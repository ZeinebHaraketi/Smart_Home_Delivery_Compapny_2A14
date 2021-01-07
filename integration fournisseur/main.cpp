#include "mainwindow.h"
#include"connection.h"
#include <QApplication>
#include <QMessageBox>
#include <QTranslator>
#include <QInputDialog>

#include"machine.h"
int main(int argc, char *argv[])
{   Connection c;
    machines p;
    QApplication a(argc, argv);
    bool test=c.createconnection();

    QTranslator t1;
        QStringList  languages;
        languages << " espagnol "<< " italien "<< " francais ";
        QString lang=QInputDialog::getItem(NULL,"Select a language","language",languages);

        if(lang=="espagnol")
        {
            t1.load(":/espagnol.qm");
        }
            else if(lang=="italien")
        {
            t1.load(":/italien.qm");
        }
        if(lang!="francais")
        {
            a.installTranslator(&t1); }
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
