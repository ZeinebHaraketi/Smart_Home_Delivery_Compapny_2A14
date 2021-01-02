/********************************************************************************
** Form generated from reading UI file 'postes.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTES_H
#define UI_POSTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_postes
{
public:
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *le_id;
    QLineEdit *nom_poste;
    QPushButton *Ajouterpo;
    QLineEdit *poste_salaire;
    QLabel *label_7;
    QWidget *tab_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tab_poste;
    QWidget *tab_2;
    QLabel *label;
    QLineEdit *le_id_sup;
    QPushButton *delposte;
    QWidget *Modifier;
    QLabel *label_2;
    QLineEdit *id_selected;
    QPushButton *selectbutton;
    QTableView *tablewi;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *edit_nom;
    QLineEdit *edit_salaire;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *postes)
    {
        if (postes->objectName().isEmpty())
            postes->setObjectName(QStringLiteral("postes"));
        postes->resize(602, 334);
        tabWidget_2 = new QTabWidget(postes);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 10, 491, 331));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 20, 291, 251));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 70, 47, 14));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 110, 91, 20));
        le_id = new QLineEdit(groupBox_2);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(160, 70, 113, 20));
        nom_poste = new QLineEdit(groupBox_2);
        nom_poste->setObjectName(QStringLiteral("nom_poste"));
        nom_poste->setGeometry(QRect(160, 110, 113, 20));
        Ajouterpo = new QPushButton(groupBox_2);
        Ajouterpo->setObjectName(QStringLiteral("Ajouterpo"));
        Ajouterpo->setGeometry(QRect(210, 180, 75, 23));
        poste_salaire = new QLineEdit(groupBox_2);
        poste_salaire->setObjectName(QStringLiteral("poste_salaire"));
        poste_salaire->setGeometry(QRect(160, 150, 113, 20));
        poste_salaire->setReadOnly(false);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 160, 47, 14));
        tabWidget_2->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget = new QTabWidget(tab_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 581, 321));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_poste = new QTableView(tab);
        tab_poste->setObjectName(QStringLiteral("tab_poste"));
        tab_poste->setGeometry(QRect(40, 0, 411, 261));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 47, 14));
        le_id_sup = new QLineEdit(tab_2);
        le_id_sup->setObjectName(QStringLiteral("le_id_sup"));
        le_id_sup->setGeometry(QRect(120, 50, 113, 20));
        delposte = new QPushButton(tab_2);
        delposte->setObjectName(QStringLiteral("delposte"));
        delposte->setGeometry(QRect(310, 50, 75, 23));
        tabWidget->addTab(tab_2, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QStringLiteral("Modifier"));
        label_2 = new QLabel(Modifier);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 30, 47, 14));
        id_selected = new QLineEdit(Modifier);
        id_selected->setObjectName(QStringLiteral("id_selected"));
        id_selected->setGeometry(QRect(180, 30, 113, 20));
        selectbutton = new QPushButton(Modifier);
        selectbutton->setObjectName(QStringLiteral("selectbutton"));
        selectbutton->setGeometry(QRect(320, 30, 75, 23));
        tablewi = new QTableView(Modifier);
        tablewi->setObjectName(QStringLiteral("tablewi"));
        tablewi->setGeometry(QRect(40, 61, 421, 101));
        groupBox = new QGroupBox(Modifier);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 169, 461, 131));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 10, 47, 14));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(340, 10, 47, 14));
        edit_nom = new QLineEdit(groupBox);
        edit_nom->setObjectName(QStringLiteral("edit_nom"));
        edit_nom->setGeometry(QRect(170, 50, 113, 20));
        edit_salaire = new QLineEdit(groupBox);
        edit_salaire->setObjectName(QStringLiteral("edit_salaire"));
        edit_salaire->setGeometry(QRect(340, 50, 113, 20));
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(330, 70, 172, 41));
        tabWidget->addTab(Modifier, QString());
        tabWidget_2->addTab(tab_3, QString());

        retranslateUi(postes);

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(postes);
    } // setupUi

    void retranslateUi(QDialog *postes)
    {
        postes->setWindowTitle(QApplication::translate("postes", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("postes", "ajouter postes", Q_NULLPTR));
        label_3->setText(QApplication::translate("postes", "ID", Q_NULLPTR));
        label_6->setText(QApplication::translate("postes", "Nom", Q_NULLPTR));
        le_id->setText(QString());
        Ajouterpo->setText(QApplication::translate("postes", "Ajouter", Q_NULLPTR));
        label_7->setText(QApplication::translate("postes", "Salaire", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("postes", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("postes", "Affichage", Q_NULLPTR));
        label->setText(QApplication::translate("postes", "ID", Q_NULLPTR));
        delposte->setText(QApplication::translate("postes", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("postes", "Supprimer", Q_NULLPTR));
        label_2->setText(QApplication::translate("postes", "ID", Q_NULLPTR));
        selectbutton->setText(QApplication::translate("postes", "Chercher", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("postes", "NEW", Q_NULLPTR));
        label_4->setText(QApplication::translate("postes", "NOM", Q_NULLPTR));
        label_5->setText(QApplication::translate("postes", "SALAIRE", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("postes", "mise a jour", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QApplication::translate("postes", "Modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("postes", "Afficher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class postes: public Ui_postes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTES_H
