#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "avis.h"
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


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_7_clicked()
{
    QString nom_reclm= ui->lineEdit_4->text();
            QString num_reclm= ui->lineEdit_5->text();
            QString date_reclm=ui->lineEdit_9->text();
            QString obj= ui->lineEdit_6->text();

            dialog E;

          dialog A1(nom_reclm,num_reclm,obj,date_reclm);

         bool test=E.ajouter(nom_reclm,num_reclm,obj,date_reclm);
          if(test)
        {
        QMessageBox::information(nullptr, QObject::tr("Ajouter une reclamtion"),
                          QObject::tr("reclamation ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
        dialog M;
        ui->tableView->setModel(M.afficher());
        }

          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter une reclamation"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

        }
}

void MainWindow::on_pushButton_9_clicked()
{
    dialog p1;
           if(p1.supprimer(ui))
           {
               QMessageBox ::information(this,"","reclamation Supprimé")  ;


                  ui->tableView->setModel(p1.afficher());

           }
           else{
               QMessageBox ::critical(this,"","erreur!")  ;
           }
}

void MainWindow::on_pushButton_8_clicked()
{
    dialog e;

                   if(e.modifier1(ui))
                   {
                       QMessageBox ::information(this,"","reclamations modifiee")  ;
           ui->tableView->setModel(e.afficher());


                   }
                   else{QMessageBox ::information(this,"","erreur")  ;}
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    ui->lineEdit_10->setText( ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString() );
    ui->lineEdit_7->setText( ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString() );
    ui->lineEdit_8->setText( ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString() );
    ui->lineEdit->setText( ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),3)).toString() );

}

void MainWindow::on_pushButton_11_clicked()
{
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
                             "<center> <H1>Liste des reclamations </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

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
                     doc.setPageSize(printer.pageRect().size());
                     doc.print(&printer);

}

void MainWindow::on_pushButton_12_clicked()
{
    QPrinter printer;

           printer.setPrinterName("desiered printer name");

         QPrintDialog dialog(&printer,this);

           if(dialog.exec()== QDialog::Rejected)

               return;
}



void MainWindow::on_pushButton_15_clicked()
{
    QString nom_produit= ui->lineEdit_15->text();
            QString objA= ui->lineEdit_16->text();
            QString nb_etoiles= ui->lineEdit_17->text();

            avis E;

          avis A1(nom_produit,objA,nb_etoiles);

         bool test=E.ajouter(nom_produit,objA,nb_etoiles);
          if(test)
        {
        QMessageBox::information(nullptr, QObject::tr("Ajouter une avis"),
                          QObject::tr("avis ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
        avis M;
        ui->tableView_2->setModel(M.afficher());
        }

          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter une avis"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

        }
}

void MainWindow::on_pushButton_5_clicked()
{
    avis e;

                   if(e.modifier1(ui))
                   {
                       QMessageBox ::information(this,"","avis modifiee") ;
           ui->tableView_2->setModel(e.afficher());


                   }
                   else{QMessageBox ::information(this,"","erreur")  ;}
}

void MainWindow::on_pushButton_16_clicked()
{
    avis p1;
           if(p1.supprimer(ui))
           {
               QMessageBox ::information(this,"","reclamation Supprimé")  ;


                  ui->tableView_2->setModel(p1.afficher());

           }
           else{
               QMessageBox ::critical(this,"","erreur!")  ;
           }
}






void MainWindow::on_tableView_2_clicked(const QModelIndex &index)
{
    ui->lineEdit_2->setText( ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString() );
    ui->lineEdit_3->setText( ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),1)).toString() );
    ui->lineEdit_13->setText( ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),2)).toString() );
}





void MainWindow::on_lineEdit_11_cursorPositionChanged(int arg1, int arg2)
{
    int RowCount;
            QString nom_reclm1=ui->lineEdit_11->text();
            dialog dialog;
            ui->tableView->setModel(dialog.ConsulterPointageParticulier(nom_reclm1,&RowCount));
}

void MainWindow::on_pushButton_3_clicked()
{
avis t;
ui->tableView_2->setModel(t.triid());
}
