#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "fournisseur.h"
#include "commande.h"
#include "smtp.h"
#include <QString>
#include <QSound>

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
    void on_ajouter_vehicule_clicked();

    void on_supprimer_vehicule_clicked();


    void on_ajouter_vehicule_2_clicked();

    void on_supprimer_panne_clicked();



    void on_ajouter_vehicule_3_clicked();

    void on_chercherfour_clicked();

    void on_modiffour_clicked();

    void on_imprimer_clicked();



    void on_trie1_clicked();

    void on_trie2_clicked();

    void on_play_clicked();

    void on_stop_clicked();

private:
    Ui::MainWindow *ui;
    QSound *son;


    fournisseur tmpfournisseur;
    commande tmpcommande;
};
#endif // MAINWINDOW_H
