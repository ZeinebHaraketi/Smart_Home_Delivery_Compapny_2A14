#include "interfacecommandesventes.h"
#include "ui_interfacecommandesventes.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QPdfWriter>
#include <QImage>
#include <QtPrintSupport/QPrinter>
#include <QPainter>

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
