/********************************************************************************
** Form generated from reading UI file 'GestionClient_ComdV.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONCLIENT_COMDV_H
#define UI_GESTIONCLIENT_COMDV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionClient_ComdV
{
public:
    QWidget *centralwidget;
    QToolBox *toolBox;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_tel;
    QLineEdit *lineEdit_mail;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_ajouter1;
    QLineEdit *lineEdit_g;
    QLineEdit *lineEdit_p;
    QLineEdit *lineEdit_t;
    QLineEdit *lineEdit_a;
    QPushButton *pushButton_9;
    QPushButton *retour_z_2;
    QWidget *tab_2;
    QTableView *tableClient;
    QComboBox *comboBox_trier;
    QPushButton *Refresh_Client;
    QWidget *tab_7;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLineEdit *lineEdit_id_3;
    QLineEdit *lineEdit_id_4;
    QLineEdit *lineEdit_id_5;
    QLineEdit *lineEdit_id_6;
    QLineEdit *lineEdit_id_7;
    QLineEdit *lineEdit_id_8;
    QLineEdit *lineEdit_id_9;
    QLineEdit *lineEdit_id_10;
    QLineEdit *lineEdit_id_11;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *tab_11;
    QLabel *label_37;
    QLineEdit *lineEdit_id_12;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_ajouter;
    QLineEdit *l9;
    QPushButton *retour_z;
    QWidget *tab_5;
    QLineEdit *lineEdit;
    QLabel *label_17;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_18;
    QLineEdit *lineEdit_2;
    QLabel *label_19;
    QLineEdit *lineEdit_3;
    QLabel *label_20;
    QLineEdit *lineEdit_4;
    QTimeEdit *clock;
    QPushButton *pushButton_activer;
    QWidget *tab_4;
    QTableView *tableView_Com;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QComboBox *comboBox_20;
    QPushButton *Refresh;
    QPushButton *Previous;
    QWidget *tab_6;
    QLabel *label_21;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_3;
    QWidget *page_3;
    QPushButton *pushButton_22;
    QTableView *tableView_Stats;
    QMenuBar *menubar;
    QMenu *menuMyProject;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestionClient_ComdV)
    {
        if (GestionClient_ComdV->objectName().isEmpty())
            GestionClient_ComdV->setObjectName(QStringLiteral("GestionClient_ComdV"));
        GestionClient_ComdV->resize(1073, 578);
        centralwidget = new QWidget(GestionClient_ComdV);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setEnabled(true);
        toolBox->setGeometry(QRect(0, 0, 1061, 531));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 212, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 191, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 113, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(255, 231, 93, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        toolBox->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Bookman Old Style"));
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        toolBox->setFont(font);
        toolBox->setStyleSheet(QStringLiteral("background-image: url(:/bg1.jpg);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 1061, 444));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 911, 431));
        tabWidget->setStyleSheet(QStringLiteral("background-image: url(:/back30.jpg);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 61, 16));
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_id = new QLineEdit(tab);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(130, 20, 141, 22));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 55, 16));
        label_2->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 55, 16));
        label_3->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_nom = new QLineEdit(tab);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(130, 80, 141, 22));
        lineEdit_prenom = new QLineEdit(tab);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(130, 130, 141, 22));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 210, 55, 16));
        label_4->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 290, 55, 16));
        label_5->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_tel = new QLineEdit(tab);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setGeometry(QRect(130, 210, 151, 22));
        lineEdit_mail = new QLineEdit(tab);
        lineEdit_mail->setObjectName(QStringLiteral("lineEdit_mail"));
        lineEdit_mail->setGeometry(QRect(130, 280, 151, 22));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(530, 90, 55, 16));
        label_6->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(530, 150, 55, 16));
        label_7->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(530, 30, 55, 16));
        label_8->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 220, 55, 16));
        label_9->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        pushButton_ajouter1 = new QPushButton(tab);
        pushButton_ajouter1->setObjectName(QStringLiteral("pushButton_ajouter1"));
        pushButton_ajouter1->setGeometry(QRect(630, 340, 93, 28));
        lineEdit_g = new QLineEdit(tab);
        lineEdit_g->setObjectName(QStringLiteral("lineEdit_g"));
        lineEdit_g->setGeometry(QRect(610, 30, 211, 22));
        lineEdit_p = new QLineEdit(tab);
        lineEdit_p->setObjectName(QStringLiteral("lineEdit_p"));
        lineEdit_p->setGeometry(QRect(610, 90, 211, 22));
        lineEdit_t = new QLineEdit(tab);
        lineEdit_t->setObjectName(QStringLiteral("lineEdit_t"));
        lineEdit_t->setGeometry(QRect(610, 150, 211, 22));
        lineEdit_a = new QLineEdit(tab);
        lineEdit_a->setObjectName(QStringLiteral("lineEdit_a"));
        lineEdit_a->setGeometry(QRect(620, 220, 211, 22));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(770, 340, 93, 28));
        retour_z_2 = new QPushButton(tab);
        retour_z_2->setObjectName(QStringLiteral("retour_z_2"));
        retour_z_2->setGeometry(QRect(454, 342, 91, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableClient = new QTableView(tab_2);
        tableClient->setObjectName(QStringLiteral("tableClient"));
        tableClient->setGeometry(QRect(30, 40, 711, 331));
        tableClient->setFrameShape(QFrame::WinPanel);
        tableClient->setFrameShadow(QFrame::Raised);
        tableClient->setGridStyle(Qt::CustomDashLine);
        comboBox_trier = new QComboBox(tab_2);
        comboBox_trier->setObjectName(QStringLiteral("comboBox_trier"));
        comboBox_trier->setGeometry(QRect(780, 140, 101, 22));
        Refresh_Client = new QPushButton(tab_2);
        Refresh_Client->setObjectName(QStringLiteral("Refresh_Client"));
        Refresh_Client->setGeometry(QRect(780, 80, 93, 28));
        tabWidget->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_28 = new QLabel(tab_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 20, 71, 21));
        label_28->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_29 = new QLabel(tab_7);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 60, 55, 16));
        label_29->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_30 = new QLabel(tab_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 110, 55, 16));
        label_30->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_31 = new QLabel(tab_7);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 150, 55, 16));
        label_31->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_32 = new QLabel(tab_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(20, 210, 61, 16));
        label_32->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_33 = new QLabel(tab_7);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(550, 20, 55, 16));
        label_33->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_34 = new QLabel(tab_7);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(550, 60, 55, 16));
        label_34->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_35 = new QLabel(tab_7);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(550, 100, 55, 16));
        label_35->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        label_36 = new QLabel(tab_7);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(550, 140, 55, 16));
        label_36->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_id_3 = new QLineEdit(tab_7);
        lineEdit_id_3->setObjectName(QStringLiteral("lineEdit_id_3"));
        lineEdit_id_3->setGeometry(QRect(120, 20, 181, 22));
        lineEdit_id_4 = new QLineEdit(tab_7);
        lineEdit_id_4->setObjectName(QStringLiteral("lineEdit_id_4"));
        lineEdit_id_4->setGeometry(QRect(120, 60, 181, 22));
        lineEdit_id_5 = new QLineEdit(tab_7);
        lineEdit_id_5->setObjectName(QStringLiteral("lineEdit_id_5"));
        lineEdit_id_5->setGeometry(QRect(120, 110, 181, 22));
        lineEdit_id_6 = new QLineEdit(tab_7);
        lineEdit_id_6->setObjectName(QStringLiteral("lineEdit_id_6"));
        lineEdit_id_6->setGeometry(QRect(120, 150, 181, 22));
        lineEdit_id_7 = new QLineEdit(tab_7);
        lineEdit_id_7->setObjectName(QStringLiteral("lineEdit_id_7"));
        lineEdit_id_7->setGeometry(QRect(120, 200, 181, 22));
        lineEdit_id_8 = new QLineEdit(tab_7);
        lineEdit_id_8->setObjectName(QStringLiteral("lineEdit_id_8"));
        lineEdit_id_8->setGeometry(QRect(640, 20, 181, 22));
        lineEdit_id_9 = new QLineEdit(tab_7);
        lineEdit_id_9->setObjectName(QStringLiteral("lineEdit_id_9"));
        lineEdit_id_9->setGeometry(QRect(640, 60, 181, 22));
        lineEdit_id_10 = new QLineEdit(tab_7);
        lineEdit_id_10->setObjectName(QStringLiteral("lineEdit_id_10"));
        lineEdit_id_10->setGeometry(QRect(640, 100, 181, 22));
        lineEdit_id_11 = new QLineEdit(tab_7);
        lineEdit_id_11->setObjectName(QStringLiteral("lineEdit_id_11"));
        lineEdit_id_11->setGeometry(QRect(640, 140, 181, 22));
        pushButton_4 = new QPushButton(tab_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 310, 93, 28));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(750, 300, 93, 28));
        tabWidget->addTab(tab_7, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_37 = new QLabel(tab_11);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(100, 150, 61, 16));
        label_37->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_id_12 = new QLineEdit(tab_11);
        lineEdit_id_12->setObjectName(QStringLiteral("lineEdit_id_12"));
        lineEdit_id_12->setGeometry(QRect(260, 150, 351, 22));
        pushButton_6 = new QPushButton(tab_11);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(920, 320, 93, 28));
        tabWidget->addTab(tab_11, QString());
        toolBox->addItem(page, QStringLiteral("Gestion Client"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 1061, 444));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 10, 981, 451));
        tabWidget_2->setStyleSheet(QStringLiteral("background-image: url(:/back30.jpg);"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 40, 111, 16));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 120, 101, 16));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 250, 55, 16));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 340, 101, 16));
        lineEdit_6 = new QLineEdit(tab_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(220, 40, 201, 22));
        lineEdit_7 = new QLineEdit(tab_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(220, 120, 201, 22));
        lineEdit_8 = new QLineEdit(tab_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(220, 250, 191, 22));
        pushButton_ajouter = new QPushButton(tab_3);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(810, 240, 93, 28));
        l9 = new QLineEdit(tab_3);
        l9->setObjectName(QStringLiteral("l9"));
        l9->setGeometry(QRect(220, 340, 191, 22));
        retour_z = new QPushButton(tab_3);
        retour_z->setObjectName(QStringLiteral("retour_z"));
        retour_z->setGeometry(QRect(820, 320, 75, 23));
        tabWidget_2->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        lineEdit = new QLineEdit(tab_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 50, 271, 22));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 60, 121, 16));
        label_17->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        pushButton = new QPushButton(tab_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 140, 93, 28));
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(710, 230, 93, 28));
        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 130, 101, 16));
        label_18->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_2 = new QLineEdit(tab_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 130, 271, 22));
        label_19 = new QLabel(tab_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 240, 55, 16));
        label_19->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_3 = new QLineEdit(tab_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 240, 271, 22));
        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 330, 101, 16));
        label_20->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_4 = new QLineEdit(tab_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(220, 320, 271, 22));
        clock = new QTimeEdit(tab_5);
        clock->setObjectName(QStringLiteral("clock"));
        clock->setGeometry(QRect(710, 20, 118, 22));
        pushButton_activer = new QPushButton(tab_5);
        pushButton_activer->setObjectName(QStringLiteral("pushButton_activer"));
        pushButton_activer->setGeometry(QRect(710, 60, 93, 28));
        tabWidget_2->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_Com = new QTableView(tab_4);
        tableView_Com->setObjectName(QStringLiteral("tableView_Com"));
        tableView_Com->setGeometry(QRect(20, 20, 781, 371));
        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(830, 70, 111, 28));
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(840, 130, 111, 28));
        comboBox_20 = new QComboBox(tab_4);
        comboBox_20->setObjectName(QStringLiteral("comboBox_20"));
        comboBox_20->setGeometry(QRect(840, 180, 111, 22));
        Refresh = new QPushButton(tab_4);
        Refresh->setObjectName(QStringLiteral("Refresh"));
        Refresh->setGeometry(QRect(840, 240, 111, 28));
        Previous = new QPushButton(tab_4);
        Previous->setObjectName(QStringLiteral("Previous"));
        Previous->setGeometry(QRect(840, 300, 111, 28));
        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_21 = new QLabel(tab_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(60, 180, 111, 16));
        label_21->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_5 = new QLineEdit(tab_6);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(260, 180, 281, 22));
        pushButton_3 = new QPushButton(tab_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(780, 300, 93, 28));
        tabWidget_2->addTab(tab_6, QString());
        toolBox->addItem(page_2, QStringLiteral("Gestion Commandes de Ventes"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 1061, 444));
        pushButton_22 = new QPushButton(page_3);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(820, 280, 93, 41));
        tableView_Stats = new QTableView(page_3);
        tableView_Stats->setObjectName(QStringLiteral("tableView_Stats"));
        tableView_Stats->setGeometry(QRect(90, 20, 651, 401));
        tableView_Stats->setStyleSheet(QStringLiteral("background-image: url(:/back30.jpg);"));
        toolBox->addItem(page_3, QStringLiteral("Statistiques"));
        GestionClient_ComdV->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestionClient_ComdV);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1073, 21));
        menuMyProject = new QMenu(menubar);
        menuMyProject->setObjectName(QStringLiteral("menuMyProject"));
        GestionClient_ComdV->setMenuBar(menubar);
        statusbar = new QStatusBar(GestionClient_ComdV);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GestionClient_ComdV->setStatusBar(statusbar);

        menubar->addAction(menuMyProject->menuAction());

        retranslateUi(GestionClient_ComdV);

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GestionClient_ComdV);
    } // setupUi

    void retranslateUi(QMainWindow *GestionClient_ComdV)
    {
        GestionClient_ComdV->setWindowTitle(QApplication::translate("GestionClient_ComdV", "GestionClient_ComdV", Q_NULLPTR));
        label->setText(QApplication::translate("GestionClient_ComdV", "Id_Client", Q_NULLPTR));
        label_2->setText(QApplication::translate("GestionClient_ComdV", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("GestionClient_ComdV", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("GestionClient_ComdV", "tel", Q_NULLPTR));
        label_5->setText(QApplication::translate("GestionClient_ComdV", "Email", Q_NULLPTR));
        label_6->setText(QApplication::translate("GestionClient_ComdV", "Poids", Q_NULLPTR));
        label_7->setText(QApplication::translate("GestionClient_ComdV", "Taille", Q_NULLPTR));
        label_8->setText(QApplication::translate("GestionClient_ComdV", "Gender", Q_NULLPTR));
        label_9->setText(QApplication::translate("GestionClient_ComdV", "Age", Q_NULLPTR));
        pushButton_ajouter1->setText(QApplication::translate("GestionClient_ComdV", "ajouter", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("GestionClient_ComdV", "Afficher", Q_NULLPTR));
        retour_z_2->setText(QApplication::translate("GestionClient_ComdV", "retour", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GestionClient_ComdV", "Ajouter Client", Q_NULLPTR));
        comboBox_trier->clear();
        comboBox_trier->insertItems(0, QStringList()
         << QApplication::translate("GestionClient_ComdV", "Trier", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "Id_Client", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "Poids", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "taille", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "age", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "gender", Q_NULLPTR)
        );
        Refresh_Client->setText(QApplication::translate("GestionClient_ComdV", "Refresh", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GestionClient_ComdV", "Afficher Client", Q_NULLPTR));
        label_28->setText(QApplication::translate("GestionClient_ComdV", "Id_Client", Q_NULLPTR));
        label_29->setText(QApplication::translate("GestionClient_ComdV", "Nom", Q_NULLPTR));
        label_30->setText(QApplication::translate("GestionClient_ComdV", "Prenom", Q_NULLPTR));
        label_31->setText(QApplication::translate("GestionClient_ComdV", "tel", Q_NULLPTR));
        label_32->setText(QApplication::translate("GestionClient_ComdV", "Email", Q_NULLPTR));
        label_33->setText(QApplication::translate("GestionClient_ComdV", "Gender", Q_NULLPTR));
        label_34->setText(QApplication::translate("GestionClient_ComdV", "Poids", Q_NULLPTR));
        label_35->setText(QApplication::translate("GestionClient_ComdV", "Taille", Q_NULLPTR));
        label_36->setText(QApplication::translate("GestionClient_ComdV", "Age", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GestionClient_ComdV", "Rechercher", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("GestionClient_ComdV", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("GestionClient_ComdV", "Modifier Client", Q_NULLPTR));
        label_37->setText(QApplication::translate("GestionClient_ComdV", "Id_Client", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("GestionClient_ComdV", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("GestionClient_ComdV", "Suuprimer Client", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("GestionClient_ComdV", "Gestion Client", Q_NULLPTR));
        label_13->setText(QApplication::translate("GestionClient_ComdV", "Id_CommandesV", Q_NULLPTR));
        label_14->setText(QApplication::translate("GestionClient_ComdV", "Nom_Produit", Q_NULLPTR));
        label_15->setText(QApplication::translate("GestionClient_ComdV", "Prix", Q_NULLPTR));
        label_16->setText(QApplication::translate("GestionClient_ComdV", "Date_Fabrication", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("GestionClient_ComdV", "Ajouter", Q_NULLPTR));
        retour_z->setText(QApplication::translate("GestionClient_ComdV", "retour", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("GestionClient_ComdV", "Ajouter Commandes de Ventes", Q_NULLPTR));
        label_17->setText(QApplication::translate("GestionClient_ComdV", "Id_CommandesV", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GestionClient_ComdV", "Rechercher", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GestionClient_ComdV", "modifier", Q_NULLPTR));
        label_18->setText(QApplication::translate("GestionClient_ComdV", "Nom_Produit", Q_NULLPTR));
        label_19->setText(QApplication::translate("GestionClient_ComdV", "Prix", Q_NULLPTR));
        label_20->setText(QApplication::translate("GestionClient_ComdV", "Date_Fabrication", Q_NULLPTR));
        pushButton_activer->setText(QApplication::translate("GestionClient_ComdV", "Bienvenue", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("GestionClient_ComdV", "Modifier Commandes de Ventes", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("GestionClient_ComdV", "Imprimer PDF", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("GestionClient_ComdV", "Imprimer Doc", Q_NULLPTR));
        comboBox_20->clear();
        comboBox_20->insertItems(0, QStringList()
         << QApplication::translate("GestionClient_ComdV", "Trier", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "Tout", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "Id_CommandesVente", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "nom_Produit", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "Prix", Q_NULLPTR)
         << QApplication::translate("GestionClient_ComdV", "Date_Fabrication", Q_NULLPTR)
        );
        Refresh->setText(QApplication::translate("GestionClient_ComdV", "Refresh", Q_NULLPTR));
        Previous->setText(QApplication::translate("GestionClient_ComdV", "Previous", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("GestionClient_ComdV", "Afficher Commandes de Ventes", Q_NULLPTR));
        label_21->setText(QApplication::translate("GestionClient_ComdV", "Id_CommandesV", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GestionClient_ComdV", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("GestionClient_ComdV", "Supprimer Commandes de Ventes", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("GestionClient_ComdV", "Gestion Commandes de Ventes", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("GestionClient_ComdV", "Stats Go", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("GestionClient_ComdV", "Statistiques", Q_NULLPTR));
        menuMyProject->setTitle(QApplication::translate("GestionClient_ComdV", "MyProject", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GestionClient_ComdV: public Ui_GestionClient_ComdV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONCLIENT_COMDV_H
