#include "stats.h"
#include "ui_stats.h"
#include "connection.h"
#include "client.h"
#include "commandesv.h"
#include <QMap>
#include <QVector>
#include <QString>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtWidgets/QGridLayout>
#include <QSqlQuery>
#include <QDebug>

Stats::Stats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stats)
{
    ui->setupUi(this);
    QVector <QPieSlice *> tab;
   QPieSeries *series= new QPieSeries();
   QSqlQuery qry;
   int nb=0;
   int nb_femme=0;
   int nb_homme=0;

   qry.prepare("SELECT * FROM CLIENT ");
   if(qry.exec()){
       while (qry.next()){
           nb++;
           if(qry.value(9)=="FEMME"){ nb_femme++;}
           else if(qry.value(9)=="HOMME"){nb_homme++;}
       }
   }
   qDebug()<<"FEMME"<<nb_femme;
   qDebug()<<"HOMME"<<nb_homme;
   float test1= (nb_femme*100)/nb;
   QString chaine = QString::number(test1);
   float test2= (nb_homme*100)/nb;
   QString chaine2 = QString::number(test2);


   series ->append("FEMME "+chaine+"%",(nb_femme));
   series ->append("HOMME "+chaine2+"%",(nb_homme));

   QPieSlice * slice0= series->slices().at(0);
   slice0->setLabelVisible();
   QPieSlice * slice1= series->slices().at(1);
   slice1->setLabelVisible();

   if(nb_femme>nb_homme){
       slice0->setExploded();
              slice0->setPen(QPen(Qt::green,2));
              slice0->setBrush(Qt::yellow);
   }
   else{
       slice1->setExploded();
        slice1->setPen(QPen(Qt::green,2));
        slice1->setBrush(Qt::yellow);
   }

   QChart *chart = new QChart();
       chart->addSeries(series);

       chart->setTitle(" Voici les Statistiques des Client ");
       chart->legend()->hide();

        QChartView *chartview = new QChartView (chart);
        chartview->setRenderHint(QPainter::Antialiasing);
        QGridLayout *mainLayout = new QGridLayout;
        mainLayout->addWidget(chartview, 1, 1);
        setLayout(mainLayout);

}

Stats::~Stats()
{
    delete ui;
}
