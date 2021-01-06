#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtPrintSupport/QPrinter>
#include <QPrintDialog>
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 son=new QSound("C:/Users/marya/Desktop/gestion fournisseur - Copie/marya.wav");

    ui->tabfournisseur->setModel(tmpfournisseur.afficher());
     ui->tabcommande->setModel(tmpcommande.afficher());



}


MainWindow::~MainWindow()
{
    delete ui;
}


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
