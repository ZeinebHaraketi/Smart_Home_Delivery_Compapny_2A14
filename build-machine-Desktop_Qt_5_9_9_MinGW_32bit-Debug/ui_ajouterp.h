/********************************************************************************
** Form generated from reading UI file 'ajouterp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERP_H
#define UI_AJOUTERP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajouterp
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_id;
    QLineEdit *nom_poste;
    QPushButton *Ajouterpo;
    QLineEdit *poste_salaire;
    QLabel *label_3;

    void setupUi(QDialog *ajouterp)
    {
        if (ajouterp->objectName().isEmpty())
            ajouterp->setObjectName(QStringLiteral("ajouterp"));
        ajouterp->resize(400, 300);
        groupBox = new QGroupBox(ajouterp);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 291, 251));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 47, 14));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 91, 20));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(160, 70, 113, 20));
        nom_poste = new QLineEdit(groupBox);
        nom_poste->setObjectName(QStringLiteral("nom_poste"));
        nom_poste->setGeometry(QRect(160, 110, 113, 20));
        Ajouterpo = new QPushButton(groupBox);
        Ajouterpo->setObjectName(QStringLiteral("Ajouterpo"));
        Ajouterpo->setGeometry(QRect(210, 180, 75, 23));
        poste_salaire = new QLineEdit(groupBox);
        poste_salaire->setObjectName(QStringLiteral("poste_salaire"));
        poste_salaire->setGeometry(QRect(160, 150, 113, 20));
        poste_salaire->setReadOnly(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 160, 47, 14));

        retranslateUi(ajouterp);

        QMetaObject::connectSlotsByName(ajouterp);
    } // setupUi

    void retranslateUi(QDialog *ajouterp)
    {
        ajouterp->setWindowTitle(QApplication::translate("ajouterp", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ajouterp", "ajouter postes", Q_NULLPTR));
        label->setText(QApplication::translate("ajouterp", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("ajouterp", "Nom", Q_NULLPTR));
        le_id->setText(QString());
        Ajouterpo->setText(QApplication::translate("ajouterp", "Ajouter", Q_NULLPTR));
        label_3->setText(QApplication::translate("ajouterp", "Salaire", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajouterp: public Ui_ajouterp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERP_H
