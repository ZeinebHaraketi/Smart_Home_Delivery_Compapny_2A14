#ifndef AJOUTERP_H
#define AJOUTERP_H

#include <QDialog>

namespace Ui {
class ajouterp;
}

class ajouterp : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterp(QWidget *parent = nullptr);
    ~ajouterp();

private slots:
    void on_pushButton_clicked();

    void on_Ajouterpo_clicked();

private:
    Ui::ajouterp *ui;

};

#endif // AJOUTERP_H
