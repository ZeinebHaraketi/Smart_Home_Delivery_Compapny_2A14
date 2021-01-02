#ifndef GRH_H
#define GRH_H

#include <QDialog>
#include "afficherperso.h"
#include "perso.h"
#include "postes.h"
#include "statistiques.h"

namespace Ui {
class grh;
}

class grh : public QDialog
{
    Q_OBJECT

public:
    explicit grh(QWidget *parent = nullptr);
    ~grh();

private slots:
    void on_pushButton_postes_clicked();

    void on_pushButton_perso_clicked();

private:
    Ui::grh *ui;
    afficherperso *persod;
    postes *postedg;

};

#endif // GRH_H
