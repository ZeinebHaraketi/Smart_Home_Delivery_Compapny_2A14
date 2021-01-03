#include "statistiques.h"
#include "ui_statistiques.h"
#include"machine.h"
statistiques::statistiques(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::statistiques)
{
    ui->setupUi(this);

    machines m;
    QBarSet *set1=new QBarSet("1");

    *set1 <<m.calculersport("oui")<<m.calculersport("non");
    QBarSeries *series=new QBarSeries();
    series->append(set1);

    QChart *chart =new QChart();
    chart->addSeries(series);
    chart->setTitle("statistiques sport");
    chart->setAnimationOptions(QChart::AllAnimations);
    QStringList categories;
    categories <<"Oui"<<"Non";
    QBarCategoryAxis *axis=new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis,series);


    QChartView *chartview=new QChartView(chart);

    this->setCentralWidget(chartview);
}

statistiques::~statistiques()
{
    delete ui;
}
