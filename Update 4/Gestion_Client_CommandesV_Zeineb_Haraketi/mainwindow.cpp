#include "mainwindow.h"
#include "ui_mainwindow.h"
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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    CommandesV com;
    Client client;
    ui->setupUi(this);
//bool test= ct.createconnection();

    ui->tableView_Com->setModel(com.afficher());
    ui->tableClient->setModel(client.afficherclient());


    // STATS
   // connect(ui->pushButton_22, SIGNAL(clicked(bool)), this,SLOT(pushButton_20));


}


MainWindow::~MainWindow()
{
    delete ui;
}

//------------ Client--------------//



//--------- Ajouter CLIENT--------------------//

void MainWindow::on_pushButton_ajouter1_clicked(){
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

void MainWindow::on_pushButton_5_clicked(){
    int idc= ui->lineEdit_id_3->text().toInt();
    Client client(idc,"","",0,"",0,0,0,"");
    client.modifierclient(ui);
    QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" modifier effectue\n"
                                                                             "click cancel to exit."),QMessageBox::Cancel);
}

//---------------- SUPPRIMER CLIENT----------------------------//

void MainWindow::on_pushButton_6_clicked(){
    int idc= ui->lineEdit_id_12->text().toInt();
     Client client(idc,"","",0,"",0,0,0,"");
     client.supprimerclient(ui);
     QMessageBox:: information(nullptr,QObject::tr("Bravo"),QObject::tr(" supprimer effectue\n"
                                                                              "click cancel to exit."),QMessageBox::Cancel);
}

//--------------- RECHERCHER CLIENT -----------------------//
void MainWindow::on_pushButton_4_clicked(){
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
void MainWindow::on_comboBox_trier_activated(){
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
void MainWindow::on_Refresh_Client_clicked(){
    /*
    CommandesV com;
    ui->tableView_Com->setModel(com.afficher());
     */
 Client cl;
 ui->tableClient->setModel(cl.afficherclient());
}

//---------------------------- Previously-------------------------------------//
void MainWindow::on_Previous_clicked(){
ui->toolBox->setCurrentIndex(0);
}


//----------- CommandesV--------------------//

//----------- Ajouter COMMANDES---------------------//


void MainWindow::on_pushButton_ajouter_clicked(){
    int id= ui->lineEdit_6->text().toInt();
    QString nom= ui->lineEdit_7->text();
    int prix= ui->lineEdit_8->text().toInt();
    QString date= ui->l9->text();

CommandesV com(id,nom,prix,date);

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

void MainWindow::on_pushButton_clicked(){
    int id= ui->lineEdit->text().toInt();

    CommandesV com(id,"",0,"");
    com.RechercherCommandes(id);
    ui->lineEdit_2 ->setText(com.get_nomProduit());
    ui -> lineEdit_3 ->setText(QString::number(com.get_Prix()));
    ui -> lineEdit_4 -> setText(com.get_DateFabrication());
    qDebug()<<"Recherche CommandesV effectuée avec succées";

}

//-------------------- Modifier COMMANDES --------------------------//


void MainWindow::on_pushButton_2_clicked(){
    int id= ui->lineEdit->text().toInt();
    CommandesV com(id,"",0,"");
    com.modifier(ui);
    qDebug()<<"CommandesV modifié avec succées";
}

//--------------- Supprimer COMMANDES--------------------//
void MainWindow::on_pushButton_3_clicked(){
   int id= ui->lineEdit_5->text().toInt();
    CommandesV com(id,"",0,"");
    com.supprimer(ui);
    qDebug()<<"CommandesV supprimé avec succées";
}

//---------------- Imprimer Commandes AS PDF --------------------//
void MainWindow::on_pushButton_7_clicked(){
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

void MainWindow::on_pushButton_8_clicked(){
    QPrinter printer;
    bool test= true;

        printer.setPrinterName("desiered printer name");

      QPrintDialog dialog(&printer,this);

        if(dialog.exec()== QDialog::Rejected)
            test= false;

}

//--------------------- Trier CommandesVente---------------------------//

void MainWindow::on_comboBox_20_activated(){
    CommandesV com;
    QString choix1= ui->comboBox_20->currentText();
    ui->tableView_Com->setModel(com.TrierCommandes(choix1));
}

//----------------------- Refresh CommandesVente------------------------//
void MainWindow::on_Refresh_clicked(){
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

void MainWindow::on_pushButton_22_clicked(){
    CommandesV com;
   //  ui->tableView_Stats->setModel(com.afficher());
    statistiques *stat= new statistiques();
    stat->show();
}
