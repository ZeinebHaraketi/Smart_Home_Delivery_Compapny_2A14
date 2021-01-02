/********************************************************************************
** Form generated from reading UI file 'afficherperso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHERPERSO_H
#define UI_AFFICHERPERSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_afficherperso
{
public:
    QTabWidget *tabWidget;
    QWidget *Affichage;
    QTabWidget *tabWidget_2;
    QWidget *tab_12;
    QTableView *tab_perso_4;
    QComboBox *comboBox_4;
    QWidget *tab_13;
    QLineEdit *id_a_supp_4;
    QLabel *label_22;
    QCommandLinkButton *supp_perso_4;
    QWidget *tab_14;
    QLineEdit *searchbar_4;
    QLabel *label_23;
    QTableView *tabperso_4;
    QPushButton *selectidperso_4;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLineEdit *newname_4;
    QLineEdit *newprename_4;
    QLineEdit *newphone_4;
    QLineEdit *newemail_4;
    QLineEdit *newidp_4;
    QCommandLinkButton *miseajour_4;
    QWidget *Ajout;
    QGroupBox *Ajouter_personnel;
    QLineEdit *id_perso;
    QLineEdit *nom_perso;
    QLineEdit *prenom;
    QLineEdit *email;
    QLineEdit *idposte;
    QLineEdit *telephone;
    QPushButton *pushButton;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QPushButton *pdf_butt_2;
    QPushButton *imprbutt;

    void setupUi(QDialog *afficherperso)
    {
        if (afficherperso->objectName().isEmpty())
            afficherperso->setObjectName(QStringLiteral("afficherperso"));
        afficherperso->resize(829, 460);
        tabWidget = new QTabWidget(afficherperso);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 831, 371));
        Affichage = new QWidget();
        Affichage->setObjectName(QStringLiteral("Affichage"));
        tabWidget_2 = new QTabWidget(Affichage);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 771, 431));
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tab_perso_4 = new QTableView(tab_12);
        tab_perso_4->setObjectName(QStringLiteral("tab_perso_4"));
        tab_perso_4->setGeometry(QRect(70, 30, 691, 361));
        comboBox_4 = new QComboBox(tab_12);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(630, 0, 62, 22));
        tabWidget_2->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        id_a_supp_4 = new QLineEdit(tab_13);
        id_a_supp_4->setObjectName(QStringLiteral("id_a_supp_4"));
        id_a_supp_4->setGeometry(QRect(150, 60, 113, 20));
        label_22 = new QLabel(tab_13);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(90, 60, 47, 14));
        supp_perso_4 = new QCommandLinkButton(tab_13);
        supp_perso_4->setObjectName(QStringLiteral("supp_perso_4"));
        supp_perso_4->setGeometry(QRect(300, 160, 172, 41));
        tabWidget_2->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        searchbar_4 = new QLineEdit(tab_14);
        searchbar_4->setObjectName(QStringLiteral("searchbar_4"));
        searchbar_4->setGeometry(QRect(110, 10, 301, 20));
        label_23 = new QLabel(tab_14);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(50, 10, 47, 14));
        tabperso_4 = new QTableView(tab_14);
        tabperso_4->setObjectName(QStringLiteral("tabperso_4"));
        tabperso_4->setGeometry(QRect(10, 40, 541, 111));
        selectidperso_4 = new QPushButton(tab_14);
        selectidperso_4->setObjectName(QStringLiteral("selectidperso_4"));
        selectidperso_4->setGeometry(QRect(420, 10, 91, 23));
        label_24 = new QLabel(tab_14);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 180, 47, 14));
        label_25 = new QLabel(tab_14);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 210, 47, 14));
        label_26 = new QLabel(tab_14);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 240, 71, 16));
        label_27 = new QLabel(tab_14);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 270, 47, 14));
        label_28 = new QLabel(tab_14);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 300, 51, 16));
        newname_4 = new QLineEdit(tab_14);
        newname_4->setObjectName(QStringLiteral("newname_4"));
        newname_4->setGeometry(QRect(140, 180, 113, 20));
        newprename_4 = new QLineEdit(tab_14);
        newprename_4->setObjectName(QStringLiteral("newprename_4"));
        newprename_4->setGeometry(QRect(140, 210, 113, 20));
        newphone_4 = new QLineEdit(tab_14);
        newphone_4->setObjectName(QStringLiteral("newphone_4"));
        newphone_4->setGeometry(QRect(140, 240, 113, 20));
        newemail_4 = new QLineEdit(tab_14);
        newemail_4->setObjectName(QStringLiteral("newemail_4"));
        newemail_4->setGeometry(QRect(140, 270, 113, 20));
        newidp_4 = new QLineEdit(tab_14);
        newidp_4->setObjectName(QStringLiteral("newidp_4"));
        newidp_4->setGeometry(QRect(140, 300, 113, 20));
        miseajour_4 = new QCommandLinkButton(tab_14);
        miseajour_4->setObjectName(QStringLiteral("miseajour_4"));
        miseajour_4->setGeometry(QRect(370, 260, 131, 41));
        tabWidget_2->addTab(tab_14, QString());
        tabWidget->addTab(Affichage, QString());
        Ajout = new QWidget();
        Ajout->setObjectName(QStringLiteral("Ajout"));
        Ajouter_personnel = new QGroupBox(Ajout);
        Ajouter_personnel->setObjectName(QStringLiteral("Ajouter_personnel"));
        Ajouter_personnel->setGeometry(QRect(70, 40, 421, 341));
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
        label_29 = new QLabel(Ajouter_personnel);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 100, 47, 14));
        label_30 = new QLabel(Ajouter_personnel);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 130, 51, 16));
        label_31 = new QLabel(Ajouter_personnel);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(30, 170, 47, 14));
        label_32 = new QLabel(Ajouter_personnel);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(20, 70, 47, 14));
        label_33 = new QLabel(Ajout);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(100, 90, 47, 14));
        label_34 = new QLabel(Ajout);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(100, 70, 47, 14));
        tabWidget->addTab(Ajout, QString());
        pdf_butt_2 = new QPushButton(afficherperso);
        pdf_butt_2->setObjectName(QStringLiteral("pdf_butt_2"));
        pdf_butt_2->setGeometry(QRect(540, 400, 75, 23));
        imprbutt = new QPushButton(afficherperso);
        imprbutt->setObjectName(QStringLiteral("imprbutt"));
        imprbutt->setGeometry(QRect(630, 400, 75, 23));

        retranslateUi(afficherperso);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(afficherperso);
    } // setupUi

    void retranslateUi(QDialog *afficherperso)
    {
        afficherperso->setWindowTitle(QApplication::translate("afficherperso", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("afficherperso", "<html><head/><body><p>Affichage</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("afficherperso", "trier..", Q_NULLPTR)
         << QApplication::translate("afficherperso", "id", Q_NULLPTR)
         << QApplication::translate("afficherperso", "nomperso", Q_NULLPTR)
         << QApplication::translate("afficherperso", "idposte", Q_NULLPTR)
        );
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QApplication::translate("afficherperso", "Afficher", Q_NULLPTR));
        label_22->setText(QApplication::translate("afficherperso", "ID", Q_NULLPTR));
        supp_perso_4->setText(QApplication::translate("afficherperso", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_13), QApplication::translate("afficherperso", "Supprimer", Q_NULLPTR));
        label_23->setText(QApplication::translate("afficherperso", "Search ID", Q_NULLPTR));
        selectidperso_4->setText(QApplication::translate("afficherperso", "FIND", Q_NULLPTR));
        label_24->setText(QApplication::translate("afficherperso", "NOM", Q_NULLPTR));
        label_25->setText(QApplication::translate("afficherperso", "PRENOM", Q_NULLPTR));
        label_26->setText(QApplication::translate("afficherperso", "TELEPHONE", Q_NULLPTR));
        label_27->setText(QApplication::translate("afficherperso", "EMAIL", Q_NULLPTR));
        label_28->setText(QApplication::translate("afficherperso", "ID-POSTE", Q_NULLPTR));
        miseajour_4->setText(QApplication::translate("afficherperso", "Mise A Jour", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QApplication::translate("afficherperso", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Affichage), QApplication::translate("afficherperso", "Affichage", Q_NULLPTR));
        Ajouter_personnel->setTitle(QApplication::translate("afficherperso", "Ajouter personnel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("afficherperso", "Ajouter", Q_NULLPTR));
        label_29->setText(QApplication::translate("afficherperso", "E-mail", Q_NULLPTR));
        label_30->setText(QApplication::translate("afficherperso", "T\303\251l\303\251phone", Q_NULLPTR));
        label_31->setText(QApplication::translate("afficherperso", "idposte", Q_NULLPTR));
        label_32->setText(QApplication::translate("afficherperso", "Prenom", Q_NULLPTR));
        label_33->setText(QApplication::translate("afficherperso", "Nom", Q_NULLPTR));
        label_34->setText(QApplication::translate("afficherperso", "ID", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Ajout), QApplication::translate("afficherperso", "Ajout", Q_NULLPTR));
        pdf_butt_2->setText(QApplication::translate("afficherperso", "PDF", Q_NULLPTR));
        imprbutt->setText(QApplication::translate("afficherperso", "Imprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class afficherperso: public Ui_afficherperso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHERPERSO_H
