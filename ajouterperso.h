#ifndef AJOUTERPERSO_H
#define AJOUTERPERSO_H

#include <QDialog>

namespace Ui {
class ajouterperso;
}

class ajouterperso : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterperso(QWidget *parent = nullptr);
    ~ajouterperso();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ajouterperso *ui;
};

#endif // AJOUTERPERSO_H
