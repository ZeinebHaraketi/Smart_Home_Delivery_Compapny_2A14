#ifndef AFFICHERPERSO_H
#define AFFICHERPERSO_H
#include "person.h"
#include <QDialog>

namespace Ui {
class afficherperso;
}

class afficherperso : public QDialog
{
    Q_OBJECT

public:
    explicit afficherperso(QWidget *parent = nullptr);
    ~afficherperso();

private slots:
    void on_commandLinkButton_clicked();

    void on_supp_perso_clicked();

    void on_selectidperso_clicked();

    void on_miseajour_clicked();

    void on_pdfbutt_clicked();

    void on_imprbutt_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

    void on_supp_perso_4_clicked();

    void on_miseajour_4_clicked();

    void on_selectidperso_4_clicked();

    void on_comboBox_4_activated(const QString &arg1);

private:
    Ui::afficherperso *ui;
    Person PE;
};

#endif // AFFICHERPERSO_H
