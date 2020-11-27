#ifndef INTERFACESCLIENT_H
#define INTERFACESCLIENT_H

#include <QWidget>

namespace Ui {
class InterfacesClient;
}

class InterfacesClient : public QWidget
{
    Q_OBJECT

public:
    explicit InterfacesClient(QWidget *parent = nullptr);
    ~InterfacesClient();

private:
    Ui::InterfacesClient *ui;
};

#endif // INTERFACESCLIENT_H
