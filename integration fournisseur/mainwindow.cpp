#include "mainwindow.h"
#include "GestionClient_ComdV.h"
#include "ui_GestionClient_ComdV.h"
#include "maingrh.h"
#include "gestionmarkt.h"
#include "ui_gestionmarkt.h"
#include "ui_gestion-fournisseur.h"
#include "article.h"
#include "commande.h"
#include "fournisseur.h"
#include "promotion.h"
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
#include "admin.h"
#include "commd_v_ang.h"
#include "clientanglais.h"
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    son=new QSound("C:/Users/marya/Desktop/Smart_Home_Delivery_Compapny_2A14-master/marya.wav");
       ui->tabfournisseur->setModel(tmpfournisseur.afficher());
        ui->tabcommande->setModel(tmpcommande.afficher());
    ui->tableView->horizontalHeader()->sectionResizeMode(QHeaderView::Interactive);;
    animation =new QPropertyAnimation(ui->label,"geometry");
        animation->setDuration(10000);
        animation->setStartValue(ui->label->geometry());
        animation->setEndValue(QRect(200,200,100,50));

        QEasingCurve curve;
        curve.setType(QEasingCurve::OutBounce);
        animation->setEasingCurve(curve);
        curve.setAmplitude(2.00);
        animation->setLoopCount(3);
        animation->start();
}

MainWindow::~MainWindow()
{
    delete ui;

}



void MainWindow::on_pushButton1_clicked()
{  admin a1;
    QMessageBox msgBox;
    QString ID,MOT_de_passe;
ID=ui->lineEdit->text();
MOT_de_passe=ui->lineEdit_2->text();


if((ID!="")&&(MOT_de_passe!=""))


{if(a1.chercher(ID,MOT_de_passe))
    {   QMediaPlayer * bulletsound = new QMediaPlayer();
        bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son3.wav"));
       if (bulletsound->state() == QMediaPlayer::PlayingState){
            bulletsound->setPosition(0);
        }
   else if (bulletsound->state() == QMediaPlayer::StoppedState)
       {
            bulletsound->play();}
        ui->stackedWidget->setCurrentIndex(1);
        machines M;
        ui->tableView->setModel(M.afficher());
        plat1 p1;
         ui->tableView2->setModel(p1.afficher());
         msgBox.setText(" bienvenue.");
         msgBox.exec();}



   else{
        QMediaPlayer * bulletsound = new QMediaPlayer();
           bulletsound->setMedia(QUrl::fromLocalFile("C:/Users/HP/Downloads/son2.wav"));
          if (bulletsound->state() == QMediaPlayer::PlayingState){
               bulletsound->setPosition(0);
           }
           else if (bulletsound->state() == QMediaPlayer::StoppedState){
               bulletsound->play();}

           msgBox.setText("faux compte.");
             msgBox.exec();}



}
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
          if(test&&p1.verifva4(ui)&& p1.verifva5(ui)&&p1.verifva6(ui))
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

void MainWindow::on_lineEdit_3_cursorPositionChanged(int arg1, int arg2)
{
    plat1 p1;
    p1.verifva4(ui);
}

void MainWindow::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{
    plat1 p1;
    p1.verifva5(ui);
}

void MainWindow::on_lineEdit_5_cursorPositionChanged(int arg1, int arg2)
{
    plat1 p1;
    p1.verifva6(ui);
}

void MainWindow::on_zaneib_clicked()
{
    this->hide() ;

           GestionClient_ComdV * m;
            m=new GestionClient_ComdV(this);

            m->show();
}



void MainWindow::on_amine_clicked()
{
    this->hide() ;
    maingrh *main;
    main=new maingrh(this);

    main->show();
}

void MainWindow::on_Hamdi_clicked(){
  this->hide() ;
    GestionMarkt *pro;
    pro= new GestionMarkt(this);

    pro->show();
}

/*****maria*****/

void MainWindow::on_ajouter_vehicule_clicked()
{
    int num = ui->num_four->text().toInt();

     QString nom= ui->nom_four->text();
       QString mail= ui->mail_four->text();
  fournisseur f(num,nom ,mail);
  bool test=f.ajouter();
  if(test)
{ui->tabfournisseur->setModel(tmpfournisseur.afficher());//refresh
      QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                   notifyIcon->show();
                   notifyIcon->setIcon(QIcon("icone.png"));

                   notifyIcon->showMessage("GESTION FOURNISSEUR ","Fournisseur Ajouté",QSystemTrayIcon::Information,15000);
QMessageBox::information(nullptr, QObject::tr("Ajouter un fournisseur"),
                  QObject::tr("fournisseur ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un fournisseur"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_supprimer_vehicule_clicked()
{
    int num = ui->num_fours->text().toInt();
        bool test=tmpfournisseur.supprimer(num);
        if(test)
        {ui->tabfournisseur->setModel(tmpfournisseur.afficher());//refresh
            QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                         notifyIcon->show();
                         notifyIcon->setIcon(QIcon("icone.png"));

                         notifyIcon->showMessage("GESTION FOURNISSEUR ","Fournisseur supprimé",QSystemTrayIcon::Information,15000);


            QMessageBox::information(nullptr, QObject::tr("Supprimer un fournisseur"),
                        QObject::tr("fournisseur supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un fournisseur"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
             }

void MainWindow::on_ajouter_vehicule_2_clicked()
{
    int nbcommande = ui->nb_com->text().toInt();
    int quantite= ui->quantite_com->text().toInt();
     QString type= ui->type_com->text();

  commande c (nbcommande,quantite ,type);
  bool test=c.ajouter();
  if(test)
{ui->tabcommande->setModel(tmpcommande.afficher());//refresh
      QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                   notifyIcon->show();
                   notifyIcon->setIcon(QIcon("icone.png"));

                   notifyIcon->showMessage("GESTION COMMANDE ","Commande Ajouté",QSystemTrayIcon::Information,15000);
QMessageBox::information(nullptr, QObject::tr("Ajouter une commande"),
                  QObject::tr("commande ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une commande"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_supprimer_panne_clicked()
{
    long nbcommande=ui->nb_com_sup->text().toLong();
    bool test=tmpcommande.supprimer(nbcommande);
    if(test)
    {ui->tabcommande->setModel(tmpcommande.afficher());//refresh
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                     notifyIcon->show();
                     notifyIcon->setIcon(QIcon("icone.png"));

                     notifyIcon->showMessage("GESTION COMMANDE ","Commande supprimé",QSystemTrayIcon::Information,15000);
        QMessageBox::information(nullptr, QObject::tr("Supprimer une commande"),
                    QObject::tr(" commande supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une commande"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}



void MainWindow::on_ajouter_vehicule_3_clicked()
{
    {int nbcommande = ui->nbmodif->text().toInt();
          QString type = ui->typemodif->text();



            bool test=tmpcommande.modifier(nbcommande,type);
            if(test)
            {ui->tabcommande->setModel(tmpcommande.afficher());//refresh
                QMessageBox::information(nullptr, QObject::tr("modifier une commande"),
                            QObject::tr("commande modifier.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);

            }
            else
                QMessageBox::critical(nullptr, QObject::tr("modifier une commande"),
                            QObject::tr("Erreur !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
       }
}

void MainWindow::on_chercherfour_clicked()
{
    QString nom = ui->cher1->text();
       ui->tabpanne_2->setModel(tmpfournisseur.cherch_four(nom));
}

void MainWindow::on_modiffour_clicked()
{
    {int num = ui->numfm->text().toInt();
          QString nom = ui->nomfm->text();



            bool test=tmpfournisseur.modifier(num,nom);
            if(test)
            {ui->tabfournisseur->setModel(tmpfournisseur.afficher());//refresh
                QMessageBox::information(nullptr, QObject::tr("modifier un fournisseur"),
                            QObject::tr("fournisseur modifier.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);

            }
            else
                QMessageBox::critical(nullptr, QObject::tr("modifier un fournisseur"),
                            QObject::tr("Erreur !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
       }
}

void MainWindow::on_imprimer_clicked()
{


        QPrinter printer;
            printer.setPrinterName("Imprimer");
            QPrintDialog dialog(&printer,this);
            dialog.exec();
    }

void MainWindow::on_trie1_clicked()
{
    ui->tabtrier->setModel(tmpcommande.afficher_tri_nb());
}

void MainWindow::on_trie2_clicked()
{
    ui->tabtrier->setModel(tmpcommande.afficher_tri_type());
}

void MainWindow::on_play_clicked()
{
    son->play();

}

void MainWindow::on_stop_clicked()
{
    son->stop();
}

void MainWindow::on_pushButton_clicked()
{
    ui->label_9->setText("supplier number");
   ui->label_10->setText("supplier name") ;
    ui->label_11->setText("supplier mail") ;

     ui->ajouter_vehicule->setText("add") ;
     ui->supprimer_vehicule->setText("delete") ;
     ui->label_5->setText("supplier number") ;
     ui->modiffour->setText("edit") ;
     ui->label_19->setText("supplier num") ;
     ui->label_20->setText("supplier name") ;
     ui->label_12->setText("supplier name") ;
     ui-> chercherfour->setText("search") ;
     ui->imprimer->setText("print") ;
     ui->label_13->setText("number of ordered items") ;
     ui->label_15->setText("quantity") ;
     ui->label_16->setText("type") ;
      ui->supprimer_panne->setText("delete") ;
       ui->label_14->setText("number of ordered items") ;
        ui->ajouter_vehicule_3->setText("edit") ;
        ui->label_17->setText("number of ordered items") ;
        ui->label_18->setText("type of ordered items") ;

        ui->trie1->setText("sort ordered item's number") ;
        ui->trie2->setText("sort the type of order") ;
        ui->ajouter_vehicule_2->setText("add") ;

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label_9->setText("número de proveedor");
   ui->label_10->setText("nombre de proveedor") ;
    ui->label_11->setText("mail de proveedor") ;

     ui->ajouter_vehicule->setText("añadir") ;
     ui->supprimer_vehicule->setText("Eliminar") ;
     ui->label_5->setText("número de proveedor") ;
     ui->modiffour->setText("editar") ;
     ui->label_19->setText("número de proveedor") ;
     ui->label_20->setText("nombre de proveedor") ;
     ui->label_12->setText("nombre de proveedor") ;
     ui-> chercherfour->setText("buscar") ;
     ui->imprimer->setText("imprimir") ;
     ui->label_13->setText("número de artículos pedidos") ;
     ui->label_15->setText("cantidad") ;
     ui->label_16->setText("tipo") ;
      ui->supprimer_panne->setText("eliminar") ;
       ui->label_14->setText("número de artículos pedidos") ;
        ui->ajouter_vehicule_3->setText("editar") ;
        ui->label_17->setText("número de artículos pedidos") ;
        ui->label_18->setText("tipo de artículos pedidos") ;

        ui->trie1->setText("ordenar el número de artículos ordenados") ;
        ui->trie2->setText("ordenar el tipo  de artículos ordenados") ;
        ui->ajouter_vehicule_2->setText("añadir") ;
}
