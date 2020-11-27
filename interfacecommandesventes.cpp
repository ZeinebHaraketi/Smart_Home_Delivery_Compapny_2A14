#include "interfacecommandesventes.h"
#include "ui_interfacecommandesventes.h"

InterfaceCommandesVentes::InterfaceCommandesVentes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InterfaceCommandesVentes)
{
    ui->setupUi(this);
}

InterfaceCommandesVentes::~InterfaceCommandesVentes()
{
    delete ui;
}
