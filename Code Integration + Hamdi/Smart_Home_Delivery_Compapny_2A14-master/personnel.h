#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "person.h"
#include <QDialog>

namespace Ui {
class personnel;
}

class personnel : public QDialog
{
    Q_OBJECT

public:
    explicit personnel(QWidget *parent = nullptr);
    ~personnel();

private slots:
    void on_comboBox_activated(const QString &arg1);

    void on_imprbutt_2_clicked();

    void on_pdfbutt_2_clicked();

    void on_miseajour_clicked();

    void on_supp_perso_clicked();

    void on_selectidperso_clicked();

    void on_Ajouterpo_clicked();

    void on_pushButton_clicked();

    void on_ajoutperso_clicked();

private:
    Ui::personnel *ui;
    Person PE;
};

#endif // PERSONNEL_H
