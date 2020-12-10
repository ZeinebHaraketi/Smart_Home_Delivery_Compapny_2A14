#include "statistiques.h"
#include "ui_statistiques.h"
#include "commandesv.h"
#include "client.h"
statistiques::statistiques(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::statistiques)
{
    ui->setupUi(this);

   CommandesV commd;
    //Client cl;

    QBarSet *set1=new QBarSet("1");
    *set1<<commd.get_Prix();
    QBarSeries *series=new QBarSeries();
    series->append(set1);

    QChart *chart =new QChart();
    chart->addSeries(series);
    chart->setTitle("statistiques prix commandesV ");
    chart->setAnimationOptions(QChart::AllAnimations);
    QStringList categories;
    categories <<"70"<<"100"<<"110"<<"120"<<"170"<<"190"<<"210"<<"250"<<"275"<<"300"<<"350"<<"400"<<"450"<<"500";
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
