#ifndef PERSON_H
#define PERSON_H


#include <QString>
#include <QSqlQueryModel>
class Person
{
public:
    Person();
    Person(int,QString,QString,QString,int,QString);
        int getidperson();
        int getidposte();
        QString getnomperson();
        QString getemail();
        QString gettlfeperson();
        void setidperson(int);
        void setidposte(int);
        QString getprenom();
        void setnomperson(QString);
        void setprenom(QString);
         void setemail(QString);
        void settlfperson(QString);
        bool ajouterperson();
        QSqlQueryModel* afficherperson();
        bool supprimerperson(int);
         bool modifierperson(int);
QSqlQueryModel* selectperson(int);
 QSqlQueryModel * afficher_choix1(QString );
       private:
        int idperson;
        QString  nomperson;
        QString telephone;
        QString email;
        int idposte1;
        QString prenom;
};

#endif // PERSON_H
