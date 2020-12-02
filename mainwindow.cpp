#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexion.h"
#include "article.h"
#include"QMessageBox"
#include"QIntValidator"
#include "promotion.h"
#include"QPropertyAnimation"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_article->setModel(A.afficher());
    ui->tab_promotion->setModel(P.afficher_1());
    ui->lineEdit->setValidator(new QIntValidator(0,99999999, this));
    ui->lineEdit_10->setValidator(new QIntValidator(0,9999999, this));

    an=new QPropertyAnimation(ui->pushButton_supp_art,"geometry");
    an->setDuration(3000);
    an->setStartValue(ui->pushButton_supp_art->geometry());
    an->setEndValue(QRect(300,200,100,500));
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_pushButton_clicked()
{
    int code=ui->lineEdit->text().toInt();
    QString type=ui->lineEdit_3->text();
    int prix=ui->lineEdit_4->text().toInt();
    int quant=ui->lineEdit_2->text().toInt();
    article e(prix,quant,type,code);
    bool test=e.ajouter_ar();
    if(test)
    {
        ui->tab_article->setModel(A.afficher());
        QMessageBox::information(nullptr,QObject::tr("ajouter un article"),
                                 QObject::tr("article ajouter\n Click cancel to exit"),QMessageBox::Cancel);
       }
    else
        QMessageBox::critical(nullptr,QObject::tr("ajouter un article"),
                                 QObject::tr("erreur\n Click cancel to exit"),QMessageBox::Cancel);

}











void MainWindow::on_pushButton_supp_art_clicked()
{
    int code=ui->lineEdit_5->text().toInt();
    bool test=A.supprimer(code);
    if(test)
    {
        ui->tab_article->setModel(A.afficher());
        QMessageBox::information(nullptr,QObject::tr("supprimer un article"),
                                 QObject::tr("article supprimer\n Click cancel to exit"),QMessageBox::Cancel);
       }
    else
        QMessageBox::critical(nullptr,QObject::tr("supprimer un article"),
                                 QObject::tr("erreur\n Click cancel to exit"),QMessageBox::Cancel);


}












void MainWindow::on_pushButton_3_clicked()
{
    int code=ui->lineEdit_6->text().toInt();
    QSqlQuery q;
    q.prepare("select * from article where code = :code");
    q.bindValue(":code",code);
    if(q.exec())
    {
        while (q.next())
        {

             ui->lineEdit_7->setText(q.value(2).toString());
             ui->lineEdit_8->setText(q.value(1).toString());
             ui->lineEdit_9->setText(q.value(3).toString());
         }
    }
}











void MainWindow::on_pushButton_mod_arti_clicked()
{
    int code=ui->lineEdit_6->text().toInt();
    QString type=ui->lineEdit_8->text();
    int prix=ui->lineEdit_9->text().toInt();
    int quant=ui->lineEdit_7->text().toInt();
    article e(prix,quant,type,code);

    bool test=e.modifier();
    if(test)
    {
        ui->tab_article->setModel(A.afficher());
        QMessageBox::information(nullptr,QObject::tr("modifier un article"),
                                 QObject::tr("article modifier\n Click cancel to exit"),QMessageBox::Cancel);
       }
    else
        QMessageBox::critical(nullptr,QObject::tr("modifier un article"),
                                 QObject::tr("erreur\n Click cancel to exit"),QMessageBox::Cancel);


}




void MainWindow::on_pushButton_2_clicked()
{
    int id=ui->lineEdit_10->text().toInt();
    QString date_pro=ui->lineEdit_12->text();
    int pourcentage=ui->lineEdit_13->text().toInt();
    int delai=ui->lineEdit_11->text().toInt();
    promotion s(pourcentage,delai,date_pro,id);
    bool test=s.ajouter_pro();
    if(test)
    {
        ui->tab_promotion->setModel(P.afficher_1());
        QMessageBox::information(nullptr,QObject::tr("ajouter une promotion"),
                                 QObject::tr("promotion ajouté\n Click cancel to exit"),QMessageBox::Cancel);
       }
    else
        QMessageBox::critical(nullptr,QObject::tr("ajouter une promotion"),
                                 QObject::tr("erreur\n Click cancel to exit"),QMessageBox::Cancel);


}





void MainWindow::on_pushButton_supp_pro_clicked()
{
    int id=ui->lineEdit_14->text().toInt();
    bool test=P.supprimer_1(id);
    if(test)
    {
        ui->tab_promotion->setModel(P.afficher_1());
        QMessageBox::information(nullptr,QObject::tr("supprimer une promotion"),
                                 QObject::tr("promotion supprimer\n Click cancel to exit"),QMessageBox::Cancel);
       }
    else
        QMessageBox::critical(nullptr,QObject::tr("supprimer une promotion"),
                                 QObject::tr("erreur\n Click cancel to exit"),QMessageBox::Cancel);
}









void MainWindow::on_pushButton_5_clicked()
{
    int id=ui->lineEdit_15->text().toInt();
    QSqlQuery q;
    q.prepare("select * from promotion where id = :id");
    q.bindValue(":id",id);
    if(q.exec())
    {
        while (q.next())
        {

             ui->lineEdit_16->setText(q.value(3).toString());
             ui->lineEdit_17->setText(q.value(2).toString());
             ui->lineEdit_18->setText(q.value(1).toString());
         }
    }

}






void MainWindow::on_pushButton_mod_pro_clicked()
{
    int id=ui->lineEdit_15->text().toInt();
    QString date_pro=ui->lineEdit_17->text();
    int pourcentage=ui->lineEdit_18->text().toInt();
    int delai=ui->lineEdit_16->text().toInt();

    promotion e(pourcentage,delai,date_pro,id);

    bool test=e.modifier_1();
    if(test)
    {
        ui->tab_promotion->setModel(P.afficher_1());
        QMessageBox::information(nullptr,QObject::tr("modifier une promotion"),
                                 QObject::tr("promotion modifier\n Click cancel to exit"),QMessageBox::Cancel);
       }
    else
        QMessageBox::critical(nullptr,QObject::tr("modifier une promotion"),
                                 QObject::tr("erreur\n Click cancel to exit"),QMessageBox::Cancel);


}

void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox msgBox ;

            QSqlQueryModel *model = new QSqlQueryModel();
                     model->setQuery("select * from article order by type_ar ");
                     model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
                     model->setHeaderData(1, Qt::Horizontal, QObject::tr("quantite"));
                     model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
                     //model->setHeaderData(3, Qt::Horizontal, QObject::tr("paymant"));
                     ui->tab_article->setModel(model);
                     ui->tab_article->show();
                     msgBox.setText("Tri avec succés.");

                     msgBox.exec();

}
















