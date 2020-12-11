#include "interfacesclient.h"
#include "ui_interfacesclient.h"

InterfacesClient::InterfacesClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InterfacesClient)
{
    ui->setupUi(this);
}

InterfacesClient::~InterfacesClient()
{
    delete ui;
}
