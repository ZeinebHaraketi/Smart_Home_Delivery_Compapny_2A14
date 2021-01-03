#ifndef POSTE_H
#define POSTE_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlTableModel>
class Poste
{
public:
    Poste();
    Poste(int,QString,float);
        int getidposte();
        QString getnomposte();
        float getsalaire();
        void setidposte(int);
        void setnomposte(QString);
        void setsalaire(float);
        bool ajouterposte();
        QSqlQueryModel* afficherposte();
        bool supprimerposte(int);
         bool modifierposte(int);
         QSqlQueryModel* selectpost(int);

       private:
        int idposte;
        QString  nomposte;
        int salaire;
};

#endif // POSTE_H
