#include "personnel.h"
#include "ui_personnel.h"
#include "person.h"
#include <QMessageBox>
#include <iostream>
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

personnel::personnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personnel)
{
    ui->setupUi(this);
     ui->tab_perso->setModel(PE.afficherperson());
    ui->id_perso->setValidator(new QIntValidator(0, 999, this));
        ui->telephone->setValidator(new QIntValidator(0, 99999999, this));
        ui->idposte->setValidator(new QIntValidator(0, 999, this));

}

personnel::~personnel()
{
    delete ui;
}
void personnel::on_supp_perso_clicked()
{
Person PE;
        Person PE1; PE1.setidperson(ui->id_a_supp->text().toInt());
        bool test=PE1.supprimerperson(PE1.getidperson());
        QMessageBox msgBox;

        if(test)
           { msgBox.setText("Suppression avec succes.");
        ui->tab_perso->setModel(PE.afficherperson());

        }
        else
            msgBox.setText("Echec de suppression");
            msgBox.exec();



}

void personnel::on_selectidperso_clicked()
{
    Person PO2;
    PO2.setidperson(ui->searchbar->text().toInt());


ui->tabperso->setModel(PO2.selectperson(PO2.getidperson()));
}

void personnel::on_miseajour_clicked()
{
    int idpselected=ui->searchbar->text().toInt();
    int id=0;
      QString nom=ui->newname->text();
      int telephone=ui->newphone->text().toInt();
      QString prenom=ui->newprename->text();
      QString email=ui->newemail->text();
      int idposte2=ui->newidp->text().toInt();
    Person PO3(id,nom,telephone,email,idposte2,prenom);
    bool test=PO3.modifierperson(idpselected);
    QMessageBox msgBox;

    if(test)
     {  msgBox.setText("Modif avec succes.");
       ui->tabperso->setModel(PO3.selectperson(idpselected));;
    }
    else
       msgBox.setText("Echec de Modif");
       msgBox.exec();
         }





void personnel::on_pdfbutt_2_clicked()
{
    QString strStream;
                 QTextStream out(&strStream);

                 const int rowCount = ui->tab_perso->model()->rowCount();
                 const int columnCount = ui->tab_perso->model()->columnCount();

                 out <<  "<html>\n"
                     "<head>\n"
                     "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                     <<  QString("<title>%1</title>\n").arg("strTitle")
                     <<  "</head>\n"
                     "<body bgcolor=#ffffff link=#5000A0>\n"

                    //     "<align='right'> " << datefich << "</align>"
                     "<center> <H1>Liste des Personnels </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                 // headers
                 out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                 for (int column = 0; column < columnCount; column++)
                     if (!ui->tab_perso->isColumnHidden(column))
                         out << QString("<th>%1</th>").arg(ui->tab_perso->model()->headerData(column, Qt::Horizontal).toString());
                 out << "</tr></thead>\n";

                 // data table
                 for (int row = 0; row < rowCount; row++) {
                     out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                     for (int column = 0; column < columnCount; column++) {
                         if (!ui->tab_perso->isColumnHidden(column)) {
                             QString data = ui->tab_perso->model()->data(ui->tab_perso->model()->index(row, column)).toString().simplified();
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

void personnel::on_imprbutt_2_clicked()
{

    QPrinter printer;

    printer.setPrinterName("desiered printer name");

  QPrintDialog dialog(&printer,this);

    if(dialog.exec()== QDialog::Rejected)

        return;
}

void personnel::on_comboBox_activated(const QString &arg1)
{
    Person P3;
               QString choix=ui->comboBox->currentText();
               ui->tab_perso->setModel(P3.afficher_choix1(choix));
}









void personnel::on_Ajouterpo_clicked()
{
    int id=ui->id_perso->text().toInt();
        int idpo=ui->idposte->text().toInt();
        QString nom=ui->nom_perso->text();
        int telephone=ui->telephone->text().toInt();
         QString prenom=ui->prenom->text();
          QString email=ui->email->text();
     Person PE(id,nom,telephone,email,idpo,prenom);
     bool test=PE.ajouterperson();
     QMessageBox msgBox;

     if(test)
       {  msgBox.setText("Ajout avec succes.");

     }
     else
         msgBox.setText("Echec d'ajout");
         msgBox.exec();

}



void personnel::on_ajoutperso_clicked()
{

    int id=ui->id_perso->text().toInt();
    int idpo=ui->idposte->text().toInt();
    QString nom=ui->nom_perso->text();
    int telephone=ui->telephone->text().toInt();
     QString prenom=ui->prenom->text();
      QString email=ui->email->text();
 Person PE(id,nom,telephone,email,idpo,prenom);
 bool test=PE.ajouterperson();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");

 }
 else
     msgBox.setText("Echec d'ajout");
     msgBox.exec();

}
