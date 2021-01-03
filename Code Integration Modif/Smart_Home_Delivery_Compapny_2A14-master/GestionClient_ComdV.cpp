#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "GestionClient_ComdV.h"
#include "ui_GestionClient_ComdV.h"
#include <QMessageBox>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include <QtSql/QSqlQueryModel>
#include <QSqlQuery>
#include<QDesktopServices>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QValidator>
#include <QPrintDialog>
#include<QVariant>
#include <QToolBox>
#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QPrintDialog>
#include <QPrinter>
#include <QAbstractItemView>
#include <QSqlTableModel>
#include <QTableView>
#include <qtableview.h>
#include <QApplication>
#include <QLineEdit>
#include <QSlider>
#include <QDialog>
#include <iostream>
#include <QRadioButton>
#include<QPdfWriter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include<QVariant>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QTableWidget>
#include <qtoolbox.h>
#include <QLineEdit>
#include <QString>
#include <QApplication>
#include <iostream>
#include "connection.h"
#include "client.h"
#include "commandesv.h"
//#include "stats.h"
//#include "ui_stats.h"
#include <QTableView>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtCharts/QChartView>
#include <QPieSeries>
#include <QPieSlice>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtCharts/QChartView>
#include <QPrinter>
#include <QTranslator>
#include <QLibraryInfo>
#include<QSound>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QTimer>
#include <QDateTime>
#include "clientanglais.h"

GestionClient_ComdV::GestionClient_ComdV(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GestionClient_ComdV)
{
    CommandesV com;
    Client client;
    ui->setupUi(this);
//bool test= ct.createconnection();

    ui->tableView_Com->setModel(com.afficher());
    ui->tableClient->setModel(client.afficherclient());


    // STATS
   // connect(ui->pushButton_22, SIGNAL(clicked(bool)), this,SLOT(pushButton_20));



    //TIMER
    /*timer = new QTimer(this);
        connect (timer,SIGNAL(timeout()),this,SLOT(showtime()));
        timer->start(1000);*/
}


GestionClient_ComdV::~GestionClient_ComdV()
{
    delete ui;
}

//------------ Client--------------//



//--------- Ajouter CLIENT--------------------//

void GestionClient_ComdV::on_pushButton_ajouter1_clicked(){
int idc= ui->lineEdit_id->text().toInt();
QString name= ui->lineEdit_nom->text();
QString fname= ui->lineEdit_prenom->text();
QString gender= ui->lineEdit_g->text();
int poids= ui->lineEdit_p->text().toInt();
int taille= ui->lineEdit_t->text().toInt();
int tel= ui->lineEdit_tel->text().toInt();
QString email= ui->lineEdit_mail->text();
int age= ui->lineEdit_a->text().toInt();

Client client(idc,name,fname,age,email,tel,poids,taille,gender);

if((idc>0)&&(idc<9999)&&(age>18)&&(tel>0)&&(poids>=50)&&(taille>150)&&(age<90)&&(poids<250)&&(taille<210)){
bool test1= client.ajouterclient();

if (test1){
    qDebug()<<"Client ajouté avec succées";
    QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr("ajout Client effectue\n"
                                                                             "click cancel to exit."),QMessageBox::Cancel);
}
else
{
    QMessageBox:: critical(nullptr,QObject::tr("Oh No!"),QObject::tr("ajout Client non effectue\n"
                                                                             "click cancel to exit."),QMessageBox::Cancel);
}
}
else{
    QMessageBox::critical(nullptr, QObject::tr("Erreur !"),
                        QObject::tr("Controle de Saisie!.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}
 }

/*void MainWindow::on_pushButton_9_clicked(){
   Client *cl= new Client;
   ui->tableView_cl->setModel(cl->afficherclient());
}
*/

//--------------- MODIFIER CLIENT---------------//

void GestionClient_ComdV::on_pushButton_5_clicked(){
    int idc= ui->lineEdit_id_3->text().toInt();
    Client client(idc,"","",0,"",0,0,0,"");
    client.modifierclient(ui);
    QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" modifier effectue\n"
                                                                             "click cancel to exit."),QMessageBox::Cancel);
}

//---------------- SUPPRIMER CLIENT----------------------------//

void GestionClient_ComdV::on_pushButton_6_clicked(){
    int idc= ui->lineEdit_id_12->text().toInt();
     Client client(idc,"","",0,"",0,0,0,"");
     client.supprimerclient(ui);
     QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" supprimer effectue\n"
                                                                              "click cancel to exit."),QMessageBox::Cancel);
}

//--------------- RECHERCHER CLIENT -----------------------//
void GestionClient_ComdV::on_pushButton_4_clicked(){
    int idc= ui->lineEdit_id_3->text().toInt();
    Client client(idc,"","",0,"",0,0,0,"");
    client.RechercherClient(idc);
    //ui->lineEdit_2 ->setText(com.get_nomProduit());
    ui->lineEdit_id_4->setText(client.get_nom());
    ui->lineEdit_id_5->setText(client.get_prenom());
    ui -> lineEdit_id_6 ->setText(QString::number(client.get_tel()));
    ui->lineEdit_id_7->setText(client.get_mail());
    ui->lineEdit_id_8->setText(client.get_gender());
    ui -> lineEdit_id_9->setText(QString::number(client.get_poids()));
    ui -> lineEdit_id_10 ->setText(QString::number(client.get_taille()));
    ui -> lineEdit_id_11 ->setText(QString::number(client.get_age()));
    QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" recherche effectue\n"
                                                                             "click cancel to exit."),QMessageBox::Cancel);

}


//----------------------------------- TRIER CLIENT------------------------------------------//
void GestionClient_ComdV::on_comboBox_trier_activated(){
    /*
    CommandesV com;
    QString choix1= ui->comboBox_20->currentText();
    ui->tableView_Com->setModel(com.TrierCommandes(choix1));
     */
 Client cl;
 QString choix= ui->comboBox_trier->currentText();
 ui->tableClient->setModel(cl.TrierClient(choix));
}

//---------------------------- REFRESH CLIENT----------------------------------------//
void GestionClient_ComdV::on_Refresh_Client_clicked(){
    /*
    CommandesV com;
    ui->tableView_Com->setModel(com.afficher());
     */
 Client cl;
 ui->tableClient->setModel(cl.afficherclient());
}

//---------------------------- Previously-------------------------------------//
void GestionClient_ComdV::on_Previous_clicked(){
ui->toolBox->setCurrentIndex(0);
}


//----------- CommandesV--------------------//

//----------- Ajouter COMMANDES---------------------//


void GestionClient_ComdV::on_pushButton_ajouter_clicked(){
    int id= ui->lineEdit_6->text().toInt();
    QString nom= ui->lineEdit_7->text();
    int prix= ui->lineEdit_8->text().toInt();
    QString date= ui->l9->text();
    int quat= ui->l_ajout_qte->text().toInt();

CommandesV com(id,nom,prix,date,quat);

if((id>0)&&(id<9999)&&(prix>10)){
bool test= com.ajouter();

    if (test){
        qDebug()<<"CommandesV ajouté avec succées";
        QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr("ajout commandesV effectue\n"
                                                                                 "click cancel to exit."),QMessageBox::Cancel);
    }
    else if ((id==0)&&(prix=0)) {
        ui->lineEdit_6->setText(" !champ obligatoire! ");
        ui->lineEdit_8->setText(" !champ obligatoire! ");
        if(prix==10)
            ui->lineEdit_8->setText(" !Champ invalide! ");
    }
    else
    {
        QMessageBox:: critical(nullptr,QObject::tr("Oh No!"),QObject::tr("ajout commandesV non effectue\n"
                                                                                 "click cancel to exit."),QMessageBox::Cancel);
    }




          }
else {
    QMessageBox::critical(nullptr, QObject::tr("Erreur !"),
                        QObject::tr("Controle de Saisie!.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

//---------------- Rechercher Commandes ----------------------------//

void GestionClient_ComdV::on_pushButton_clicked(){
    int id= ui->lineEdit->text().toInt();

    CommandesV com(id,"",0,"",0);
    com.RechercherCommandes(id);
    ui->lineEdit_2 ->setText(com.get_nomProduit());
    ui -> lineEdit_3 ->setText(QString::number(com.get_Prix()));
    ui -> lineEdit_4 -> setText(com.get_DateFabrication());
    qDebug()<<"Recherche CommandesV effectuée avec succées";

}

//-------------------- Modifier COMMANDES --------------------------//


void GestionClient_ComdV::on_pushButton_2_clicked(){
    int id= ui->lineEdit->text().toInt();
    CommandesV com(id,"",0,"",0);
    com.modifier(ui);
    qDebug()<<"CommandesV modifié avec succées";
}

//--------------- Supprimer COMMANDES--------------------//
void GestionClient_ComdV::on_pushButton_3_clicked(){
   int id= ui->lineEdit_5->text().toInt();
    CommandesV com(id,"",0,"",0);
    com.supprimer(ui);
    qDebug()<<"CommandesV supprimé avec succées";
}

//---------------- Imprimer Commandes AS PDF --------------------//
void GestionClient_ComdV::on_pushButton_7_clicked(){
    QString strStream;
                    QTextStream out(&strStream);

                    const int rowCount = ui->tableView_Com->model()->rowCount();
                    const int columnCount = ui->tableView_Com->model()->columnCount();

                    out <<  "<html>\n"
                        "<head>\n"
                        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                        <<  QString("<title>%1</title>\n").arg("strTitle")
                        <<  "</head>\n"
                        "<body bgcolor=#ffffff link=#5000A0>\n"

                       //     "<align='right'> " << datefich << "</align>"
                        "<center> <H1>Liste des commandes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                    // headers
                    out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                    for (int column = 0; column < columnCount; column++)
                        if (!ui->tableView_Com->isColumnHidden(column))
                            out << QString("<th>%1</th>").arg(ui->tableView_Com->model()->headerData(column, Qt::Horizontal).toString());
                    out << "</tr></thead>\n";

                    // data table
                    for (int row = 0; row < rowCount; row++) {
                        out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                        for (int column = 0; column < columnCount; column++) {
                            if (!ui->tableView_Com->isColumnHidden(column)) {
                                QString data = ui->tableView_Com->model()->data(ui->tableView_Com->model()->index(row, column)).toString().simplified();
                                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                            }
                        }
                        out << "</tr>\n";
                    }
                    out <<  "</table> </center>\n"
                        "</body>\n"
                        "</html>\n";

              QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

               QPrinter printer (QPrinter::PrinterResolution);
                printer.setOutputFormat(QPrinter::PdfFormat);
               printer.setPaperSize(QPrinter::A4);
              printer.setOutputFileName(fileName);

               QTextDocument doc;
                doc.setHtml(strStream);
                doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                doc.print(&printer);
}
//---------------------- Imprimer AS DOC ----------------------------//

void GestionClient_ComdV::on_pushButton_8_clicked(){
    QPrinter printer;
    bool test= true;

        printer.setPrinterName("desiered printer name");

      QPrintDialog dialog(&printer,this);

        if(dialog.exec()== QDialog::Rejected)
            test= false;

}

//--------------------- Trier CommandesVente---------------------------//

void GestionClient_ComdV::on_comboBox_20_activated(){
    CommandesV com;
    QString choix1= ui->comboBox_20->currentText();
    ui->tableView_Com->setModel(com.TrierCommandes(choix1));
}

//----------------------- Refresh CommandesVente------------------------//
void GestionClient_ComdV::on_Refresh_clicked(){
    CommandesV com;
    ui->tableView_Com->setModel(com.afficher());
}


//--------------------------------------------------------- STATISTIQUES----------------------------------------------------//

/*
void MainWindow::on_pushButton_20_clicked(){
  Stats *statik= new Stats(this);
  statik->show();

}*/

/*void MainWindow::on_pushButton_22_clicked(){
    Stats interf;
    interf.setModal(true);
    interf.exec();
}
*/

/*void GestionClient_ComdV::on_pushButton_22_clicked(){
    CommandesV com;
   //  ui->tableView_Stats->setModel(com.afficher());
    statistiques *stat= new statistiques();
    stat->show();
}*/


//--------------------------------- TIME---------------------------------------------//

/*
void MainWindow::showtime(){
    QTime time=QTime::currentTime();
        QString time_text=time.toString("mm : ss");
       // ui->digital_clock->setText(time_text);
ui->clock->startTimer(180,time);
}*/




void GestionClient_ComdV::on_retour_z_2_clicked()
{
    this->hide() ;

           MainWindow * t;
            t=new MainWindow(this);

            t->show();


}

//----------------------------- COMMD_V_ANG ---------------------------//

//************************************* ADD COMMDV *********************//
void GestionClient_ComdV::on_ADD_Product_clicked(){
    int idv= ui->l_add_idv->text().toInt();
         QString name1= ui->l_add_name->text();
         int price= ui->l_add_price->text().toInt();
         QString dateM= ui->l_add_dateM->text();
         int qte= ui->l_add_qte->text().toInt();

         commd_v_ang CommDVA(idv,name1,price,dateM,qte);


             bool teste2= CommDVA.ADD_CommDV();

             if(teste2){
                 qDebug()<< " Product ADDED Successfully";
                 ui->tableView_Com_ANG->setModel(CommDVA.DISPLAY_CommDV());//refresh
                 QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr("ADDED Product Successfully\n"
                                                                                          "click cancel to exit."),QMessageBox::Cancel);
             }



             else {
                 QMessageBox:: critical(nullptr,QObject::tr("Oh No!"),QObject::tr("ADD Product Failed\n"
                                                                                          "click cancel to exit."),QMessageBox::Cancel);
             }
}

//------------------------------ Refresh -----------------------------//

void GestionClient_ComdV::on_Refresh_2_clicked(){
 commd_v_ang CommDVA;
 ui->tableView_Com_ANG->setModel(CommDVA.DISPLAY_CommDV());
}

//------------------------------ SEARCH CommDVA--------------------------------//
void GestionClient_ComdV::on_SearchP_clicked(){
    int idv= ui->l_modif_idv->text().toInt();
    commd_v_ang CA(idv,"",0,"",0);
    CA.SearchCommandes(idv);


    ui->l_modif_name->setText(CA.get_nameProduct());
    ui->l_modif_price->setText(QString::number(CA.get_Price()));
    ui->l_modif_dateM->setText(CA.get_DateM());
    ui->l_modify_qte->setText(QString::number(CA.get_quantite()));

    qDebug()<<" The Search Was Successfull";
}

//************************************* MODIFY COMMDV *********************//
void GestionClient_ComdV::on_ModifyP_clicked(){
  int idv= ui->l_modif_idv->text().toInt();
   commd_v_ang CA(idv,"",0,"",0);
   CA.Modify_CommDV(ui);
   qDebug()<<" Product MODIFIED Successfully";
}

//************************************* REMOVE COMMDV *********************//
void GestionClient_ComdV::on_RemoveP_clicked(){
  int idv= ui->l_remove_idv->text().toInt();
   commd_v_ang CA(idv,"",0,"",0);
   CA.Remove_CommDV(ui);
   qDebug()<<" Product REMOVED Successfully";
}
//------------------------------------previously------------------------------------//
void GestionClient_ComdV::on_ReturnP_clicked(){
      ui->toolBox->setCurrentIndex(3);
}

//---------------------------------------- SORT COMMDV BY------------------------------------//
void GestionClient_ComdV::on_comboBox_SortC_activated(){
    commd_v_ang CA;
    QString choice1= ui->comboBox_SortC->currentText();
    ui->tableView_Com_ANG->setModel(CA.SortCommandes(choice1));
}

//--------------------- PRINT AS DOC -----------------------------------//
void GestionClient_ComdV::on_PRINT_clicked(){
    QPrinter printer;
        bool teste= true;

            printer.setPrinterName("desiered printer name");

          QPrintDialog dialog(&printer,this);

            if(dialog.exec()== QDialog::Rejected)
                teste= false;
}

//------------------------------- PRINT AS PDF -----------------------------------------//
void GestionClient_ComdV::on_Print_PDF_clicked(){
    QString strStream1;
                        QTextStream out(&strStream1);

                        const int rowCount = ui->tableView_Com_ANG->model()->rowCount();
                        const int columnCount = ui->tableView_Com_ANG->model()->columnCount();

                        out <<  "<html>\n"
                            "<head>\n"
                            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                            <<  QString("<title>%1</title>\n").arg("strTitle")
                            <<  "</head>\n"
                            "<body bgcolor=#ffffff link=#5000A0>\n"

                           //     "<align='right'> " << datefich << "</align>"
                            "<center> <H1>Liste des commandes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                        // headers
                        out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                        for (int column = 0; column < columnCount; column++)
                            if (!ui->tableView_Com_ANG->isColumnHidden(column))
                                out << QString("<th>%1</th>").arg(ui->tableView_Com_ANG->model()->headerData(column, Qt::Horizontal).toString());
                        out << "</tr></thead>\n";

                        // data table
                        for (int row = 0; row < rowCount; row++) {
                            out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                            for (int column = 0; column < columnCount; column++) {
                                if (!ui->tableView_Com_ANG->isColumnHidden(column)) {
                                    QString data = ui->tableView_Com_ANG->model()->data(ui->tableView_Com_ANG->model()->index(row, column)).toString().simplified();
                                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                }
                            }
                            out << "</tr>\n";
                        }
                        out <<  "</table> </center>\n"
                            "</body>\n"
                            "</html>\n";

                  QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                   QPrinter printer (QPrinter::PrinterResolution);
                    printer.setOutputFormat(QPrinter::PdfFormat);
                   printer.setPaperSize(QPrinter::A4);
                  printer.setOutputFileName(fileName);

                   QTextDocument doc;
                    doc.setHtml(strStream1);
                    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                    doc.print(&printer);
}

//----------------------------- CLIENT---------------------------//

//************************************* ADD CLIENT*********************//
void GestionClient_ComdV::on_ADDC_clicked(){
    int idc1= ui->lineEdit_idA->text().toInt();
      QString name1= ui->lineEdit_N->text();
      QString Fname1= ui->lineEdit_FN->text();
      QString Gender1= ui->lineEdit_GENDER->text();
      int Weight= ui->lineEdit_WA->text().toInt();
      int Height= ui->lineEdit_HA->text().toInt();
      int Tel1= ui->lineEdit_TEL->text().toInt();
      QString email1= ui->lineEdit_EmailA->text();
      int Age= ui->lineEdit_AGEA->text().toInt();

      ClientAnglais CLA(idc1,name1,Fname1,Age,email1,Tel1,Weight,Height,Gender1);


          bool teste1= CLA.AddClient();

          if (teste1){
              //ui->tableView_AngCl->setModel(cl.afficherclient());
              qDebug()<<"Added Client Successfully";
              QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr("Added Client Successfully\n"
                                                                                       "click cancel to exit."),QMessageBox::Cancel);
          }
          else
          {
              QMessageBox:: critical(nullptr,QObject::tr("Oh No!"),QObject::tr("Added Client Failed\n"
                                                                                       "click cancel to exit."),QMessageBox::Cancel);
          }

}

//------------------------------------ REFRESH---------------------------------------------//
void GestionClient_ComdV::on_Refresh_Client_2_clicked(){
    ClientAnglais cl;
    ui->tableView_AngCl->setModel(cl.DisplayClient());
}

//--------------------- Search -------------------------------//
void GestionClient_ComdV::on_Search_clicked(){
    int Idc= ui->lineEdit_idc->text().toInt();

        ClientAnglais CLA(Idc,"","",0,"",0,0,0,"");
        CLA.SearchClient(Idc);

        ui->lineEdit_N_2->setText(CLA.get_name());
        ui->lineEdit_FN_2->setText(CLA.get_fname());
        ui->lineEdit_TEL_2->setText(QString::number(CLA.get_Tel1()));
        ui->lineEdit_email->setText(CLA.get_mail1());
        ui->lineEdit_GENDER_2->setText(CLA.get_Gender1());
        ui->lineEdit_WEIGHT->setText(QString::number(CLA.get_Weight()));
        ui->lineEdit_Height->setText(QString::number(CLA.get_Height()));
        ui->lineEdit_AGE->setText(QString::number(CLA.get_Age()));

        QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" The SEARCH was Successful \n"
                                                                                 "click cancel to exit."),QMessageBox::Cancel);
}
//************************************* MODIFY CLIENT*********************//
void GestionClient_ComdV::on_Modify_clicked(){
    int Idc= ui->lineEdit_idc->text().toInt();

    ClientAnglais CLA(Idc,"","",0,"",0,0,0,"");
    CLA.ModifyClient(ui);
    QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" Client MODIFIED Successfully \n"
                                                                             "click cancel to exit."),QMessageBox::Cancel);

}

//************************************* REMOVE CLIENT*********************//
void GestionClient_ComdV::on_Remove_clicked(){
  //lineEdit_53

    int idc1= ui->lineEdit_53->text().toInt();
    ClientAnglais CLA(idc1,"","",0,"",0,0,0,"");
    CLA.RemoveClient(ui);
    QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" Client REMOVED Successfully \n"
                                                                             "click cancel to exit."),QMessageBox::Cancel);
}

//************************************* SORT CLIENT*********************//
void GestionClient_ComdV::on_Sort_by_activated(){
    ClientAnglais cla;

    QString choice=ui->Sort_by->currentText();
    ui->tableView_AngCl->setModel(cla.SortClient(choice));
}

//******************************** PREVIOUSLY Client******************************//
void GestionClient_ComdV::on_Previous1_clicked(){
    ui->toolBox->setCurrentIndex(2);
}
//********************************* CHOOSE A LANGUAGE *****************************//
       //-------------------Francais-------------------//
void GestionClient_ComdV::on_Francais_clicked(){
   ui->toolBox->setCurrentIndex(1);
}
       //-------------------English-------------------//
void GestionClient_ComdV::on_Anglais_clicked(){
    ui->toolBox->setCurrentIndex(3);
}
