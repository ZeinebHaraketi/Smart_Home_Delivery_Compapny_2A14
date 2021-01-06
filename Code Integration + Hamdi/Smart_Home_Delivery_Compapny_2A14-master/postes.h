#ifndef POSTES_H
#define POSTES_H
#include "poste.h"
#include <QDialog>

namespace Ui {
class postes;
}

class postes : public QDialog
{
    Q_OBJECT

public:
    explicit postes(QWidget *parent = nullptr);
    ~postes();

private slots:
    void on_supprimerposte_clicked();

    void on_delposte_clicked();

    void on_selectbutton_clicked();

    void on_commandLinkButton_clicked();

    void on_Ajouterpo_clicked();

private:
    Ui::postes *ui;
    Poste P;
    Poste P2;
};

#endif // POSTES_H
