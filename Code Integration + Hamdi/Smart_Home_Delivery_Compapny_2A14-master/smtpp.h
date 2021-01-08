#ifndef SMTPP_H
#define SMTPP_H
#include "smtp.h"
#include <QDialog>

namespace Ui {
class smtpp;
}

class smtpp : public QDialog
{
    Q_OBJECT

public:
    explicit smtpp(QWidget *parent = nullptr);
    ~smtpp();

private slots:
    void on_sendbutton_clicked();

private:
    Ui::smtpp *ui;
    Smtp *smtp;
};

#endif // SMTPP_H
