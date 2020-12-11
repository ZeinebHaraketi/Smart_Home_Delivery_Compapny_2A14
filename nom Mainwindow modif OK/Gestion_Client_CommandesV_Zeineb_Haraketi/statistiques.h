#ifndef STATISTIQUES_H
#define STATISTIQUES_H

#include <QMainWindow>
#include<QtCharts/QChartView>
#include<QtCharts/QBarSeries>
#include<QtCharts/QBarSet>
#include<QtCharts/QLegend>
#include<QtCharts/QBarCategoryAxis>
#include<QtCharts/QHorizontalStackedBarSeries>
#include<QtCharts/QLineSeries>
#include<QtCharts/QCategoryAxis>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class statistiques;
}

class statistiques : public QMainWindow
{
    Q_OBJECT

public:
    explicit statistiques(QWidget *parent = nullptr);
    ~statistiques();

private:
    Ui::statistiques *ui;
};

#endif // STATISTIQUES_H
