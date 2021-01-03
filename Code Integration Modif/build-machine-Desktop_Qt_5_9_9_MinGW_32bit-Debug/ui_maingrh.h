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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_maingrh
{
public:
    QPushButton *pushButton_perso;
    QLabel *label;
    QPushButton *pushButton_postes;

    void setupUi(QDialog *maingrh)
    {
        if (maingrh->objectName().isEmpty())
            maingrh->setObjectName(QStringLiteral("maingrh"));
        maingrh->resize(672, 484);
        pushButton_perso = new QPushButton(maingrh);
        pushButton_perso->setObjectName(QStringLiteral("pushButton_perso"));
        pushButton_perso->setGeometry(QRect(230, 320, 171, 81));
        label = new QLabel(maingrh);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 441, 91));
        QFont font;
        font.setFamily(QStringLiteral("Perpetua Titling MT"));
        font.setPointSize(14);
        font.setUnderline(true);
        label->setFont(font);
        label->setFrameShape(QFrame::WinPanel);
        pushButton_postes = new QPushButton(maingrh);
        pushButton_postes->setObjectName(QStringLiteral("pushButton_postes"));
        pushButton_postes->setGeometry(QRect(230, 210, 171, 81));

        retranslateUi(maingrh);

        QMetaObject::connectSlotsByName(maingrh);
    } // setupUi

    void retranslateUi(QDialog *maingrh)
    {
        maingrh->setWindowTitle(QApplication::translate("maingrh", "Dialog", Q_NULLPTR));
        pushButton_perso->setText(QApplication::translate("maingrh", "Gestion Personnel", Q_NULLPTR));
        label->setText(QApplication::translate("maingrh", "                          GESTION RH                                       ", Q_NULLPTR));
        pushButton_postes->setText(QApplication::translate("maingrh", "Gestion Postes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class maingrh: public Ui_maingrh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGRH_H
