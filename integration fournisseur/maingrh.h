#ifndef MAINGRH_H
#define MAINGRH_H
#include "postes.h"
#include <QDialog>
#include "personnel.h"


namespace Ui {
class maingrh;
}

class maingrh : public QDialog
{
    Q_OBJECT

public:
    explicit maingrh(QWidget *parent = nullptr);
    ~maingrh();

private slots:
    void on_pushButton_postes_clicked();

    void on_pushButton_perso_clicked();

    void on_push123_clicked();

private:
    Ui::maingrh *ui;
    //ajouter_afficherp *posdialog;
       // perso *persodialog;

    //afficherperso *persod;
    postes *postedg;
    personnel *persod;
};

#endif // MAINGRH_H
