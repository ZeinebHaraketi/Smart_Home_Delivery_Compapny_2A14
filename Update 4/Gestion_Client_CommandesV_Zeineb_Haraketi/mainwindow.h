#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLineEdit>
#include <QTabWidget>
#include <QToolBox>
#include "commandesv.h"
#include "client.h"
#include <QPropertyAnimation>
#include "statistiques.h"

//#include "stats.h"
//#include "ui_stats.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT



public:
    MainWindow(QWidget *parent = nullptr);
    //MainWindow(QDialog *parent = nullptr);
    ~MainWindow();

 private slots:
    //------------ Client--------------//
    //--------- Ajout--------------------//

    void on_pushButton_ajouter1_clicked();


    //---------- Afficher---------------//

  //  void on_pushButton_3_clicked(); // imprimer doc
   // void on_comboBox_3_activated(); // imprimer PDF

   void on_pushButton_5_clicked();//modifier
   void on_pushButton_4_clicked();//rechercher
   void on_pushButton_6_clicked();//supprimer

   void on_comboBox_trier_activated();//trier client
   void on_Refresh_Client_clicked();//refresh client

    //----------- CommandesV--------------------//


     void on_pushButton_ajouter_clicked();//ajouter Command


     void on_pushButton_7_clicked(); //imprimer Doc
     void on_pushButton_8_clicked(); //imprimer Pdf

           void on_pushButton_clicked();// rechercher Command
           void on_pushButton_2_clicked();// modifier Command
           void on_pushButton_3_clicked();// supprimer Command

        void on_comboBox_20_activated(); //trier
        void on_Refresh_clicked();//refresh

        void on_Previous_clicked();// previously


           //-------------------------------------- Statistiques-------------------------------//
          // void on_pushButton_20_clicked();
           void on_pushButton_22_clicked();

private:
    Ui::MainWindow *ui;
    QPropertyAnimation *animation ;

};
#endif // MAINWINDOW_H
