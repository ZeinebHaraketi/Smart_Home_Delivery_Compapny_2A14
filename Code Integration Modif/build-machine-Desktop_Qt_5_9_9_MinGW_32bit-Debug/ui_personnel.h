/********************************************************************************
** Form generated from reading UI file 'personnel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNEL_H
#define UI_PERSONNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personnel
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QGroupBox *Ajouter_personnel;
    QLineEdit *id_perso;
    QLineEdit *nom_perso;
    QLineEdit *prenom;
    QLineEdit *email;
    QLineEdit *idposte;
    QLineEdit *telephone;
    QPushButton *ajoutperso;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_3;
    QLabel *label;
    QWidget *tab_2;
    QPushButton *imprbutt;
    QPushButton *pdfbutt;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTableView *tab_perso;
    QComboBox *comboBox;
    QPushButton *pdfbutt_2;
    QPushButton *imprbutt_2;
    QWidget *tab_4;
    QLineEdit *id_a_supp;
    QLabel *label_4;
    QCommandLinkButton *supp_perso;
    QWidget *tab_5;
    QLineEdit *searchbar;
    QLabel *label_12;
    QTableView *tabperso;
    QPushButton *selectidperso;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *newname;
    QLineEdit *newprename;
    QLineEdit *newphone;
    QLineEdit *newemail;
    QLineEdit *newidp;
    QCommandLinkButton *miseajour;
    QTableWidget *tableWidget;
    QFrame *line;

    void setupUi(QDialog *personnel)
    {
        if (personnel->objectName().isEmpty())
            personnel->setObjectName(QStringLiteral("personnel"));
        personnel->resize(758, 517);
        tabWidget = new QTabWidget(personnel);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-10, 0, 731, 431));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 110, 47, 14));
        Ajouter_personnel = new QGroupBox(tab);
        Ajouter_personnel->setObjectName(QStringLiteral("Ajouter_personnel"));
        Ajouter_personnel->setGeometry(QRect(100, 60, 331, 251));
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
        ajoutperso = new QPushButton(Ajouter_personnel);
        ajoutperso->setObjectName(QStringLiteral("ajoutperso"));
        ajoutperso->setGeometry(QRect(250, 220, 75, 23));
        label_10 = new QLabel(Ajouter_personnel);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 100, 47, 14));
        label_11 = new QLabel(Ajouter_personnel);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 130, 51, 16));
        label_13 = new QLabel(Ajouter_personnel);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 170, 47, 14));
        label_3 = new QLabel(Ajouter_personnel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 70, 47, 14));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 90, 47, 14));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        imprbutt = new QPushButton(tab_2);
        imprbutt->setObjectName(QStringLiteral("imprbutt"));
        imprbutt->setGeometry(QRect(370, 370, 75, 23));
        pdfbutt = new QPushButton(tab_2);
        pdfbutt->setObjectName(QStringLiteral("pdfbutt"));
        pdfbutt->setGeometry(QRect(480, 370, 75, 23));
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 40, 721, 371));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_perso = new QTableView(tab_3);
        tab_perso->setObjectName(QStringLiteral("tab_perso"));
        tab_perso->setGeometry(QRect(0, 0, 691, 311));
        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(630, 0, 62, 22));
        pdfbutt_2 = new QPushButton(tab_3);
        pdfbutt_2->setObjectName(QStringLiteral("pdfbutt_2"));
        pdfbutt_2->setGeometry(QRect(450, 320, 75, 23));
        imprbutt_2 = new QPushButton(tab_3);
        imprbutt_2->setObjectName(QStringLiteral("imprbutt_2"));
        imprbutt_2->setGeometry(QRect(540, 320, 75, 23));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        id_a_supp = new QLineEdit(tab_4);
        id_a_supp->setObjectName(QStringLiteral("id_a_supp"));
        id_a_supp->setGeometry(QRect(150, 60, 113, 20));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 60, 47, 14));
        supp_perso = new QCommandLinkButton(tab_4);
        supp_perso->setObjectName(QStringLiteral("supp_perso"));
        supp_perso->setGeometry(QRect(300, 160, 172, 41));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        searchbar = new QLineEdit(tab_5);
        searchbar->setObjectName(QStringLiteral("searchbar"));
        searchbar->setGeometry(QRect(110, 10, 301, 20));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 10, 47, 14));
        tabperso = new QTableView(tab_5);
        tabperso->setObjectName(QStringLiteral("tabperso"));
        tabperso->setGeometry(QRect(10, 40, 541, 111));
        selectidperso = new QPushButton(tab_5);
        selectidperso->setObjectName(QStringLiteral("selectidperso"));
        selectidperso->setGeometry(QRect(420, 10, 91, 23));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 47, 14));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 210, 47, 14));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 240, 71, 16));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 270, 47, 14));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 300, 51, 16));
        newname = new QLineEdit(tab_5);
        newname->setObjectName(QStringLiteral("newname"));
        newname->setGeometry(QRect(140, 180, 113, 20));
        newprename = new QLineEdit(tab_5);
        newprename->setObjectName(QStringLiteral("newprename"));
        newprename->setGeometry(QRect(140, 210, 113, 20));
        newphone = new QLineEdit(tab_5);
        newphone->setObjectName(QStringLiteral("newphone"));
        newphone->setGeometry(QRect(140, 240, 113, 20));
        newemail = new QLineEdit(tab_5);
        newemail->setObjectName(QStringLiteral("newemail"));
        newemail->setGeometry(QRect(140, 270, 113, 20));
        newidp = new QLineEdit(tab_5);
        newidp->setObjectName(QStringLiteral("newidp"));
        newidp->setGeometry(QRect(140, 300, 113, 20));
        miseajour = new QCommandLinkButton(tab_5);
        miseajour->setObjectName(QStringLiteral("miseajour"));
        miseajour->setGeometry(QRect(360, 280, 172, 41));
        tableWidget = new QTableWidget(tab_5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(-5, -29, 771, 411));
        tabWidget_2->addTab(tab_5, QString());
        label_7->raise();
        label_8->raise();
        label_9->raise();
        tableWidget->raise();
        searchbar->raise();
        label_12->raise();
        tabperso->raise();
        selectidperso->raise();
        label_5->raise();
        label_6->raise();
        newname->raise();
        newprename->raise();
        newphone->raise();
        newemail->raise();
        newidp->raise();
        miseajour->raise();
        line = new QFrame(tab_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 10, 118, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(tab_2, QString());

        retranslateUi(personnel);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(personnel);
    } // setupUi

    void retranslateUi(QDialog *personnel)
    {
        personnel->setWindowTitle(QApplication::translate("personnel", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("personnel", "Nom", Q_NULLPTR));
        Ajouter_personnel->setTitle(QApplication::translate("personnel", "Ajouter personnel", Q_NULLPTR));
        ajoutperso->setText(QApplication::translate("personnel", "Ajouter", Q_NULLPTR));
        label_10->setText(QApplication::translate("personnel", "E-mail", Q_NULLPTR));
        label_11->setText(QApplication::translate("personnel", "T\303\251l\303\251phone", Q_NULLPTR));
        label_13->setText(QApplication::translate("personnel", "idposte", Q_NULLPTR));
        label_3->setText(QApplication::translate("personnel", "Prenom", Q_NULLPTR));
        label->setText(QApplication::translate("personnel", "ID", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("personnel", "Ajout", Q_NULLPTR));
        imprbutt->setText(QApplication::translate("personnel", "Imprimer", Q_NULLPTR));
        pdfbutt->setText(QApplication::translate("personnel", "PDF", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("personnel", "trier..", Q_NULLPTR)
         << QApplication::translate("personnel", "id", Q_NULLPTR)
         << QApplication::translate("personnel", "nomperso", Q_NULLPTR)
         << QApplication::translate("personnel", "idposte", Q_NULLPTR)
        );
        pdfbutt_2->setText(QApplication::translate("personnel", "PDF", Q_NULLPTR));
        imprbutt_2->setText(QApplication::translate("personnel", "Imprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("personnel", "Afficher", Q_NULLPTR));
        label_4->setText(QApplication::translate("personnel", "ID", Q_NULLPTR));
        supp_perso->setText(QApplication::translate("personnel", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("personnel", "Supprimer", Q_NULLPTR));
        label_12->setText(QApplication::translate("personnel", "Search ID", Q_NULLPTR));
        selectidperso->setText(QApplication::translate("personnel", "FIND", Q_NULLPTR));
        label_5->setText(QApplication::translate("personnel", "NOM", Q_NULLPTR));
        label_6->setText(QApplication::translate("personnel", "PRENOM", Q_NULLPTR));
        label_7->setText(QApplication::translate("personnel", "TELEPHONE", Q_NULLPTR));
        label_8->setText(QApplication::translate("personnel", "EMAIL", Q_NULLPTR));
        label_9->setText(QApplication::translate("personnel", "ID-POSTE", Q_NULLPTR));
        miseajour->setText(QApplication::translate("personnel", "Mise A Jour", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("personnel", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("personnel", "Affichage", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class personnel: public Ui_personnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNEL_H
