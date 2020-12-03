#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "machine.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMediaPlayer>
#include <QMessageBox>
#include  <QDebug>
#include <QRadioButton>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include <QtSql/QSqlQueryModel>
#include<QtPrintSupport/QPrinter>
#include <QVector2D>
#include <QVector>
#include <QSqlQuery>
#include<QDesktopServices>
#include <QMessageBox>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QValidator>
#include <QPrintDialog>
#include<QtSql/QSqlQuery>
#include<QVariant>
#include"plat1.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->horizontalHeader()->sectionResizeMode(QHeaderView::Interactive);;
}

MainWindow::~MainWindow()
{
    delete ui;

}



void MainWindow::on_pushButton1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    machines M;
    ui->tableView->setModel(M.afficher());
    plat1 p1;
     ui->tableView2->setModel(p1.afficher());
}

void MainWindow::on_pushButton2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();

}}

void MainWindow::on_pushButton3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();}
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();}
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();}
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();}
}



/***********ajouter*********/
void MainWindow::on_pushButton4_clicked()
{   machines m;

        QString meals= ui->lineEdit_9->text();
        QString poids_ideal= ui->lineEdit_10->text();
        QString duree_regime=ui->lineEdit_11->text();
        QString sport=ui->comboBox->currentText();


      machines A1(meals,poids_ideal,duree_regime);

     bool test=A1.ajouter(meals,poids_ideal,duree_regime,sport);
     ui->tableView->setModel(A1.afficher());
     QMessageBox msgBox;
      if(test&& m.verifva1(ui)&&m.verifva2(ui)&&m.verifva3(ui))
    {
          ui->tableView->setModel(A1.afficher());
                                 msgBox.setText(" Ajouté.");
                                 msgBox.exec();
      }
}
/************modifier************/
void MainWindow::on_pushButton5_clicked()
{
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();
          }
          QString meals = ui-> lineEdit_12-> text ();
          QString poids_ideal = ui->lineEdit_14 -> text ();
         QString duree_regime = ui-> lineEdit_13-> text ();
          QMessageBox msgBox ;
          machines m (meals, poids_ideal, duree_regime);
          bool test;
           test =m.updatemealss( meals) ;
          if (test) {msgBox.setText ("Edit successfully.");
         ui->tableView->setModel(m.afficher());
          }
         else msgBox.setText ("Failed to modify"); msgBox.exec ();
}




/*****************supprimer************/
void MainWindow::on_pushButton_7_clicked()
{
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();
          }
    machines A;

              if(A.supprimer(ui))
              {
                  QMessageBox ::information(this,"","meals Supprimé")  ;


                     ui->tableView->setModel(A.afficher());

              }
              else{
                  QMessageBox ::critical(this,"","erreur!")  ;
              }
}
/*************pdf**************/
void MainWindow::on_pushButton_15_clicked()
{
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();
          }
    QString strStream;
                     QTextStream out(&strStream);

                     const int rowCount = ui->tableView->model()->rowCount();
                     const int columnCount = ui->tableView->model()->columnCount();

                     out <<  "<html>\n"
                         "<head>\n"
                         "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                         <<  QString("<title>%1</title>\n").arg("strTitle")
                         <<  "</head>\n"
                         "<body bgcolor=#ffffff link=#5000A0>\n"

                        //     "<align='right'> " << datefich << "</align>"
                         "<center> <H1>Liste des programmes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                     // headers
                     out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                     for (int column = 0; column < columnCount; column++)
                         if (!ui->tableView->isColumnHidden(column))
                             out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
                     out << "</tr></thead>\n";

                     // data table
                     for (int row = 0; row < rowCount; row++) {
                         out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                         for (int column = 0; column < columnCount; column++) {
                             if (!ui->tableView->isColumnHidden(column)) {
                                 QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
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
/**********imprimer**********/
void MainWindow::on_pushButton_5_clicked()
{
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();
          }
    //imprimer

       QPrinter printer;

       printer.setPrinterName("desiered printer name");

     QPrintDialog dialog(&printer,this);

       if(dialog.exec()== QDialog::Rejected)

           return;
}


/*********chercher*********/
void MainWindow::on_lineEdit_7_cursorPositionChanged(int arg1, int arg2)
{
    machines m;
        QString inputValue,filterChecked;
        inputValue=ui->lineEdit_7->text();
        filterChecked="meals";

        if (ui->checkBox_2->isChecked()){
            filterChecked="poids_ideal";

        }
        if (ui->checkBox_3->isChecked()){
            filterChecked="duree_regime";

        }


        ui->tableView->setModel(m.getModelSpecial(inputValue,filterChecked));
}
/*************trier************/

void MainWindow::on_comboBox_2_activated(const QString &arg1)
{
    machines m;
            QString choix=ui->comboBox_2->currentText();
            ui->tableView->setModel(m.afficher_choix1(choix));
}
/*************modifier_select***********/
void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    ui->lineEdit_12->setText( ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString() );
    ui->lineEdit_14->setText( ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString() );
    ui->lineEdit_13->setText( ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString() );

}
/*************statistiques************** */
void MainWindow::on_pushButton_16_clicked()
{
    statistiques *s=new statistiques();
    s->show();
}

/*******actualiser********/
void MainWindow::on_actualiser_clicked()
{   machines m;
    ui->tableView->setModel(m.afficher());
}
/*********retour*********/
void MainWindow::on_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
/******************************plat1************************ */
void MainWindow::on_ajouter2_clicked()
{
            QString nomplat= ui->lineEdit_3->text();
            QString ingredients= ui->lineEdit_4->text();
            QString adresse=ui->lineEdit_5->text();
            QString paymant=ui->combo1->currentText();


          plat1 p1(nomplat,ingredients,adresse);

         bool test=p1.ajouter(nomplat,ingredients,adresse,paymant);
         ui->tableView2->setModel(p1.afficher());
         QMessageBox msgBox;
          if(test)
        {
              ui->tableView2->setModel(p1.afficher());
                                     msgBox.setText(" Ajouté.");
                                     msgBox.exec();
          }
}

/******************modifier2**********/


void MainWindow::on_modifier2_clicked()
{

    plat1 e;

            if(e.modifier1(ui))
            {
                QMessageBox ::information(this,"","Plat modifiee")  ;
    ui->tableView2->setModel(e.afficher());


            }
            else{QMessageBox ::information(this,"","plat erreur")  ;}
}

void MainWindow::on_tableView2_clicked(const QModelIndex &index)
{
    ui->line6->setText( ui->tableView2->model()->data(ui->tableView2->model()->index(ui->tableView2->selectionModel()->currentIndex().row(),0)).toString() );
    ui->line8->setText( ui->tableView2->model()->data(ui->tableView2->model()->index(ui->tableView2->selectionModel()->currentIndex().row(),1)).toString() );
    ui->line15->setText( ui->tableView2->model()->data(ui->tableView2->model()->index(ui->tableView2->selectionModel()->currentIndex().row(),2)).toString() );
}

/************actualiser2********/

void MainWindow::on_actualiser2_clicked()
{   plat1 p1;
    ui->tableView2->setModel(p1.afficher());
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();

}}
/*************retour2*********/
void MainWindow::on_retour2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();}

}
/************supprimer_2**************/
void MainWindow::on_supprimer2_clicked()
{   plat1 p1;
    if(p1.supprimer(ui))
    {
        QMessageBox ::information(this,"","plat Supprimé")  ;


           ui->tableView2->setModel(p1.afficher());

    }
    else{
        QMessageBox ::critical(this,"","erreur!")  ;
    }
}
/**********retour_home************/
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();

}}
/******pdf_2*********/
void MainWindow::on_PDF_2_clicked()
{
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();
          }
    QString strStream;
                     QTextStream out(&strStream);

                     const int rowCount = ui->tableView2->model()->rowCount();
                     const int columnCount = ui->tableView2->model()->columnCount();

                     out <<  "<html>\n"
                         "<head>\n"
                         "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                         <<  QString("<title>%1</title>\n").arg("strTitle")
                         <<  "</head>\n"
                         "<body bgcolor=#ffffff link=#5000A0>\n"

                        //     "<align='right'> " << datefich << "</align>"
                         "<center> <H1>Liste des plats </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                     // headers
                     out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                     for (int column = 0; column < columnCount; column++)
                         if (!ui->tableView2->isColumnHidden(column))
                             out << QString("<th>%1</th>").arg(ui->tableView2->model()->headerData(column, Qt::Horizontal).toString());
                     out << "</tr></thead>\n";

                     // data table
                     for (int row = 0; row < rowCount; row++) {
                         out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                         for (int column = 0; column < columnCount; column++) {
                             if (!ui->tableView2->isColumnHidden(column)) {
                                 QString data = ui->tableView2->model()->data(ui->tableView2->model()->index(row, column)).toString().simplified();
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
/**********imprimer_2*******/
void MainWindow::on_imprimer_3_clicked()
{
    QMediaPlayer * bulletsound = new QMediaPlayer();
          bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son1.wav"));
         if (bulletsound->state() == QMediaPlayer::PlayingState){
              bulletsound->setPosition(0);
          }
          else if (bulletsound->state() == QMediaPlayer::StoppedState){
              bulletsound->play();
          }
    //imprimer

       QPrinter printer;

       printer.setPrinterName("desiered printer name");

     QPrintDialog dialog(&printer,this);

       if(dialog.exec()== QDialog::Rejected)

           return;
}



void MainWindow::on_pushButton_19_clicked()
{
    QMessageBox msgBox ;

        QSqlQueryModel *model = new QSqlQueryModel();
                 model->setQuery("select * from PLAT1 order by nomplat ");
                 model->setHeaderData(0, Qt::Horizontal, QObject::tr("nomplat"));
                 model->setHeaderData(1, Qt::Horizontal, QObject::tr("ingredients"));
                 model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
                 model->setHeaderData(3, Qt::Horizontal, QObject::tr("paymant"));
                 ui->tableView2->setModel(model);
                 ui->tableView2->show();
                 msgBox.setText("Tri avec succés.");

                 msgBox.exec();
}



void MainWindow::on_lineEdit_10_cursorPositionChanged(int arg1, int arg2)
{
    machines m;
    m.verifva1(ui);
}

void MainWindow::on_lineEdit_11_cursorPositionChanged(int arg1, int arg2)
{
    machines m;
    m.verifva2(ui);
}

void MainWindow::on_lineEdit_9_cursorPositionChanged(int arg1, int arg2)
{
    machines m;
    m.verifva3(ui);
}
