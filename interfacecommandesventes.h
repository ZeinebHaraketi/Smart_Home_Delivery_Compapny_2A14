#ifndef INTERFACECOMMANDESVENTES_H
#define INTERFACECOMMANDESVENTES_H

#include <QWidget>

namespace Ui {
class InterfaceCommandesVentes;
}

class InterfaceCommandesVentes : public QWidget
{
    Q_OBJECT

public:
    explicit InterfaceCommandesVentes(QWidget *parent = nullptr);
    ~InterfaceCommandesVentes();

private:
    Ui::InterfaceCommandesVentes *ui;
};

#endif // INTERFACECOMMANDESVENTES_H
