/********************************************************************************
** Form generated from reading UI file 'grh.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRH_H
#define UI_GRH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_grh
{
public:
    QPushButton *pushButton_perso;
    QPushButton *pushButton_postes;
    QLabel *label;

    void setupUi(QDialog *grh)
    {
        if (grh->objectName().isEmpty())
            grh->setObjectName(QStringLiteral("grh"));
        grh->resize(696, 439);
        pushButton_perso = new QPushButton(grh);
        pushButton_perso->setObjectName(QStringLiteral("pushButton_perso"));
        pushButton_perso->setGeometry(QRect(250, 270, 171, 81));
        pushButton_postes = new QPushButton(grh);
        pushButton_postes->setObjectName(QStringLiteral("pushButton_postes"));
        pushButton_postes->setGeometry(QRect(250, 160, 171, 81));
        label = new QLabel(grh);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 441, 91));
        QFont font;
        font.setFamily(QStringLiteral("Perpetua Titling MT"));
        font.setPointSize(14);
        font.setUnderline(true);
        label->setFont(font);
        label->setFrameShape(QFrame::WinPanel);

        retranslateUi(grh);

        QMetaObject::connectSlotsByName(grh);
    } // setupUi

    void retranslateUi(QDialog *grh)
    {
        grh->setWindowTitle(QApplication::translate("grh", "Dialog", Q_NULLPTR));
        pushButton_perso->setText(QApplication::translate("grh", "Gestion Personnel", Q_NULLPTR));
        pushButton_postes->setText(QApplication::translate("grh", "Gestion Postes", Q_NULLPTR));
        label->setText(QApplication::translate("grh", "                          GESTION RH                                       ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class grh: public Ui_grh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRH_H
