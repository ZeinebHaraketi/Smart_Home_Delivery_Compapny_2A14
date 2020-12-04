#ifndef AJOUTER_AFFICHERP_H
#define AJOUTER_AFFICHERP_H

#include <QDialog>
#include "ajouterp.h"
#include "postes.h"
namespace Ui {
class ajouter_afficherp;
}

class ajouter_afficherp : public QDialog
{
    Q_OBJECT

public:
    explicit ajouter_afficherp(QWidget *parent = nullptr);
    ~ajouter_afficherp();

private slots:
    void on_pushButton_ajouterp_clicked();

    void on_pushButton_afficherp_clicked();

private:
    Ui::ajouter_afficherp *ui;
    ajouterp *ajouter;
    postes *afficher;


};

#endif // AJOUTER_AFFICHERP_H
