#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLineEdit>
#include <QTabWidget>
#include <QToolBox>
#include "commandesv.h"
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
  //  void on_comboBox_4_activated();
    //void on_comboBox_5_activated();
    //void on_comboBox_6_activated();
    //void on_comboBox_7_activated();

    //---------- Afficher---------------//

    void on_comboBox_activated(); //chercher
    void on_comboBox_2_activated(); //trier
    //void on_tableView_clicked();
    void on_pushButton_modifier1_clicked();
    void on_pushButton_supp1_clicked();
  //  void on_pushButton_3_clicked(); // imprimer doc
   // void on_comboBox_3_activated(); // imprimer PDF

    //----------- CommandesV--------------------//

    //----------- Ajout---------------------//
     void on_pushButton_ajouter_clicked();

     //---------- Afficher--------------//

     //void on_comboBox_8_activated();//chercher
    // void on_comboBox_9_activated();
      void on_pushButton_modif2_clicked();
     void on_pushButton_supp2_clicked();
    // void on_pushButton_7_clicked(); //imprimer Doc
     //void on_pushButton_8_clicked(); //imprimer Pdf
    // void on_tableView_Com_clicked();

void on_pushButton_clicked();
void on_pushButton_2_clicked();
void on_pushButton_3_clicked();

     //void on_l9_cursorPositionChanged(int arg1, int arg2);

     void on_toolBox_windowTitleChanged(const QString &title);

private:
    Ui::MainWindow *ui;
    //CommandesV com;
};
#endif // MAINWINDOW_H
