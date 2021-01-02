/********************************************************************************
** Form generated from reading UI file 'ajouter_afficherp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTER_AFFICHERP_H
#define UI_AJOUTER_AFFICHERP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajouter_afficherp
{
public:
    QPushButton *pushButton_ajouterp;
    QPushButton *pushButton_afficherp;

    void setupUi(QDialog *ajouter_afficherp)
    {
        if (ajouter_afficherp->objectName().isEmpty())
            ajouter_afficherp->setObjectName(QStringLiteral("ajouter_afficherp"));
        ajouter_afficherp->resize(400, 300);
        pushButton_ajouterp = new QPushButton(ajouter_afficherp);
        pushButton_ajouterp->setObjectName(QStringLiteral("pushButton_ajouterp"));
        pushButton_ajouterp->setGeometry(QRect(120, 50, 111, 61));
        pushButton_afficherp = new QPushButton(ajouter_afficherp);
        pushButton_afficherp->setObjectName(QStringLiteral("pushButton_afficherp"));
        pushButton_afficherp->setGeometry(QRect(120, 110, 111, 61));

        retranslateUi(ajouter_afficherp);

        QMetaObject::connectSlotsByName(ajouter_afficherp);
    } // setupUi

    void retranslateUi(QDialog *ajouter_afficherp)
    {
        ajouter_afficherp->setWindowTitle(QApplication::translate("ajouter_afficherp", "Dialog", Q_NULLPTR));
        pushButton_ajouterp->setText(QApplication::translate("ajouter_afficherp", "Ajouter", Q_NULLPTR));
        pushButton_afficherp->setText(QApplication::translate("ajouter_afficherp", "Afficher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajouter_afficherp: public Ui_ajouter_afficherp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTER_AFFICHERP_H
