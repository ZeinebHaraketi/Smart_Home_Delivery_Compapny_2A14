#ifndef GESTIONCLIENT_COMDV_H
#define GESTIONCLIENT_COMDV_H
#include <QMainWindow>
#include <QLineEdit>
#include <QTabWidget>
#include <QToolBox>
#include "commandesv.h"
#include "client.h"
#include <QPropertyAnimation>
#include "statistiques.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "commd_v_ang.h"



QT_BEGIN_NAMESPACE
namespace Ui { class GestionClient_ComdV; }
QT_END_NAMESPACE

class GestionClient_ComdV : public QMainWindow
{
    Q_OBJECT



public:
    GestionClient_ComdV(QWidget *parent = nullptr);
    //MainWindow(QDialog *parent = nullptr);
    ~GestionClient_ComdV();

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

     //   void showtime();//time

        //------------------Retour au MainWindow------------------------------//
        //Client
        void on_retour_z_2_clicked();
        //COMMDV
        //void on_retour_z_clicked();

          //*******--------------------------------- English Version ------------------------------******//
        //----------------------------- CLIENT---------------------------//

         //************************************* ADD CLIENT*********************//
                             void on_ADDC_clicked();
                             //refresh
                             void on_Refresh_Client_2_clicked();

         //************************************* MODIFY CLIENT*********************//
                             //Search//
                             void on_Search_clicked();

                             void on_Modify_clicked();

         //************************************* REMOVE CLIENT*********************//

                             void on_Remove_clicked();
                             //Sort by
                             void on_Sort_by_activated();
                             //previously
                             void on_Previous1_clicked();
                             //Next Page
                            // void on_Next1_clicked();


         //--------------------- PRODUCT----------------------------------//
        //************************************* ADD COMMDV *********************//
                           void on_ADD_Product_clicked();
                           //Refresh
                           void on_Refresh_2_clicked();


      //************************************* MODIFY COMMDV*********************//

                           void on_ModifyP_clicked();
                           //Search//
                          void on_SearchP_clicked();

       //************************************* REMOVE COMMDV*********************//
                          void on_RemoveP_clicked();

                          //Sort By
                         void on_comboBox_SortC_activated();
                          // previously
                          void on_ReturnP_clicked();
                          // PRINT AS DOC
                           void on_PRINT_clicked();
                          //PRINT AS PDF
                           void on_Print_PDF_clicked();

       //********************************* CHOOSE A LANGUAGE *****************************//
                             //Francais//
                             void on_Francais_clicked();
                             //Anglais//
                             void on_Anglais_clicked();


private:
    Ui::GestionClient_ComdV *ui;
    QPropertyAnimation *animation;


};
#endif // GESTIONCLIENT_COMDV_H
