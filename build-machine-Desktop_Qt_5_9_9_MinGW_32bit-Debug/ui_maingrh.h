/********************************************************************************
** Form generated from reading UI file 'maingrh.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGRH_H
#define UI_MAINGRH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_postes;
    QPushButton *pushButton_perso;
    QLabel *label;
    QPushButton *pushButton_perso_2;
    QPushButton *pushButton_postes_2;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(860, 446);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_postes = new QPushButton(centralwidget);
        pushButton_postes->setObjectName(QStringLiteral("pushButton_postes"));
        pushButton_postes->setGeometry(QRect(360, 170, 171, 81));
        pushButton_perso = new QPushButton(centralwidget);
        pushButton_perso->setObjectName(QStringLiteral("pushButton_perso"));
        pushButton_perso->setGeometry(QRect(360, 280, 171, 81));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 30, 441, 91));
        QFont font;
        font.setFamily(QStringLiteral("Perpetua Titling MT"));
        font.setPointSize(14);
        font.setUnderline(true);
        label->setFont(font);
        label->setFrameShape(QFrame::WinPanel);
        pushButton_perso_2 = new QPushButton(centralwidget);
        pushButton_perso_2->setObjectName(QStringLiteral("pushButton_perso_2"));
        pushButton_perso_2->setGeometry(QRect(420, 280, 171, 81));
        pushButton_postes_2 = new QPushButton(centralwidget);
        pushButton_postes_2->setObjectName(QStringLiteral("pushButton_postes_2"));
        pushButton_postes_2->setGeometry(QRect(420, 170, 171, 81));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 30, 441, 91));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::WinPanel);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion RH", Q_NULLPTR));
        pushButton_postes->setText(QApplication::translate("MainWindow", "Gestion Postes", Q_NULLPTR));
        pushButton_perso->setText(QApplication::translate("MainWindow", "Gestion Personnel", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "                          GESTION RH                                       ", Q_NULLPTR));
        pushButton_perso_2->setText(QApplication::translate("MainWindow", "Gestion Personnel", Q_NULLPTR));
        pushButton_postes_2->setText(QApplication::translate("MainWindow", "Gestion Postes", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "                          GESTION RH                                       ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGRH_H
