/********************************************************************************
** Form generated from reading UI file 'ajouterperso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERPERSO_H
#define UI_AJOUTERPERSO_H

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

class Ui_ajouterperso
{
public:
    QGroupBox *Ajouter_personnel;
    QLineEdit *id_perso;
    QLineEdit *nom_perso;
    QLineEdit *prenom;
    QLineEdit *email;
    QLineEdit *idposte;
    QLineEdit *telephone;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ajouterperso)
    {
        if (ajouterperso->objectName().isEmpty())
            ajouterperso->setObjectName(QStringLiteral("ajouterperso"));
        ajouterperso->resize(400, 300);
        Ajouter_personnel = new QGroupBox(ajouterperso);
        Ajouter_personnel->setObjectName(QStringLiteral("Ajouter_personnel"));
        Ajouter_personnel->setGeometry(QRect(30, 30, 331, 251));
        id_perso = new QLineEdit(Ajouter_personnel);
        id_perso->setObjectName(QStringLiteral("id_perso"));
        id_perso->setGeometry(QRect(130, 20, 113, 20));
        nom_perso = new QLineEdit(Ajouter_personnel);
        nom_perso->setObjectName(QStringLiteral("nom_perso"));
        nom_perso->setGeometry(QRect(130, 50, 113, 20));
        prenom = new QLineEdit(Ajouter_personnel);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(130, 70, 113, 20));
        email = new QLineEdit(Ajouter_personnel);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(130, 100, 113, 20));
        idposte = new QLineEdit(Ajouter_personnel);
        idposte->setObjectName(QStringLiteral("idposte"));
        idposte->setGeometry(QRect(130, 170, 113, 20));
        telephone = new QLineEdit(Ajouter_personnel);
        telephone->setObjectName(QStringLiteral("telephone"));
        telephone->setGeometry(QRect(130, 130, 113, 20));
        pushButton = new QPushButton(Ajouter_personnel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 220, 75, 23));
        label_6 = new QLabel(Ajouter_personnel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 100, 47, 14));
        label_8 = new QLabel(Ajouter_personnel);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 130, 51, 16));
        label_7 = new QLabel(Ajouter_personnel);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 170, 47, 14));
        label_3 = new QLabel(Ajouter_personnel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 70, 47, 14));
        label = new QLabel(ajouterperso);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 47, 14));
        label_2 = new QLabel(ajouterperso);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 47, 14));

        retranslateUi(ajouterperso);

        QMetaObject::connectSlotsByName(ajouterperso);
    } // setupUi

    void retranslateUi(QDialog *ajouterperso)
    {
        ajouterperso->setWindowTitle(QApplication::translate("ajouterperso", "Dialog", Q_NULLPTR));
        Ajouter_personnel->setTitle(QApplication::translate("ajouterperso", "Ajouter personnel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ajouterperso", "Ajouter", Q_NULLPTR));
        label_6->setText(QApplication::translate("ajouterperso", "E-mail", Q_NULLPTR));
        label_8->setText(QApplication::translate("ajouterperso", "T\303\251l\303\251phone", Q_NULLPTR));
        label_7->setText(QApplication::translate("ajouterperso", "idposte", Q_NULLPTR));
        label_3->setText(QApplication::translate("ajouterperso", "Prenom", Q_NULLPTR));
        label->setText(QApplication::translate("ajouterperso", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("ajouterperso", "Nom", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajouterperso: public Ui_ajouterperso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERPERSO_H
