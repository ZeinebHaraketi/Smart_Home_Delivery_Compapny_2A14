#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ajouter_afficherp.h"
#include "perso.h"
#include "statistiques.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_postes_clicked();

    void on_pushButton_perso_clicked();

    void on_pushButton_stat_clicked();

private:
    Ui::MainWindow *ui;
    ajouter_afficherp *posdialog;
    perso *persodialog;
statistiques *statdialog;

};
#endif // MAINWINDOW_H
