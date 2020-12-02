#ifndef PROMOTION_H
#define PROMOTION_H
#include<QString>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlQueryModel>

class promotion
{
public:
    promotion();
    promotion(int,int,QString,int);
    int getid();
    int getpourcentage();
    QString getdate_pro();
    int getdelai();
    void setid(int);
    void setpourcentage(int);
    void setdate_pro(QString);
    void setdelai(int);
     bool ajouter_pro();
     QSqlQueryModel* afficher_1();
     bool supprimer_1(int);
     bool modifier_1();

private:
int id,pourcentage,delai ;
QString date_pro;
};

#endif // PROMOTION_H
