#ifndef PERSO_H
#define PERSO_H

#include <QDialog>
#include "ajouterperso.h"
#include "afficherperso.h"

namespace Ui {
class perso;
}

class perso : public QDialog
{
    Q_OBJECT

public:
    explicit perso(QWidget *parent = nullptr);
    ~perso();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::perso *ui;
    ajouterperso *ajoutpdialog;
    afficherperso *affpdialog;
};

#endif // PERSO_H
