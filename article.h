#ifndef ARTICLE_H
#define ARTICLE_H

#include<QString>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlQueryModel>

class article
{
public:
    article();
    article(int,int,QString,int);
    int getprix();
    int getquantite();
    QString gettype_ar();
    int getcode();
    void setprix(int);
    void setquantite(int);
    void settype_ar(QString);
    void setcode(int);
     bool ajouter_ar();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifier();

private:
int prix,quantite,code ;
QString type_ar;
};

#endif // ARTICLE_H
