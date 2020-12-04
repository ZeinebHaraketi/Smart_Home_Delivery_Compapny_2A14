#include "afficherperso.h"
#include "ui_afficherperso.h"
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







afficherperso::afficherperso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afficherperso)
{
    ui->setupUi(this);
    ui->tab_perso->setModel(PE.afficherperson());
    ui->id_a_supp->setValidator(new QIntValidator(0, 999, this));
    ui->searchbar->setValidator(new QIntValidator(0, 999, this));
    ui->newidp->setValidator(new QIntValidator(0, 999, this));
    ui->newphone->setValidator(new QIntValidator(0, 99999999, this));
}

afficherperso::~afficherperso()
{
    delete ui;
}

void afficherperso::on_supp_perso_clicked()
{

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

void afficherperso::on_selectidperso_clicked()
{
    Person PO2;
    PO2.setidperson(ui->searchbar->text().toInt());


ui->tabperso->setModel(PO2.selectperson(PO2.getidperson()));
}

void afficherperso::on_miseajour_clicked()
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





void afficherperso::on_pdfbutt_clicked()
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

void afficherperso::on_imprbutt_clicked()
{

    QPrinter printer;

    printer.setPrinterName("desiered printer name");

  QPrintDialog dialog(&printer,this);

    if(dialog.exec()== QDialog::Rejected)

        return;
}

void afficherperso::on_comboBox_activated(const QString &arg1)
{
    Person P3;
               QString choix=ui->comboBox->currentText();
               ui->tab_perso->setModel(P3.afficher_choix1(choix));
}
