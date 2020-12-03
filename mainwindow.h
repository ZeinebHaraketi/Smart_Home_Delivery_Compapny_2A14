#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"statistiques.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_16_clicked();

    void on_lineEdit_7_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_17_clicked();

    void on_comboBox_2_activated(const QString &arg1);

    void on_tableView_clicked(const QModelIndex &index);

    void on_actualiser_clicked();

    void on_retour_clicked();

    void on_ajouter2_clicked();

    void on_tableView2_activated(const QModelIndex &index);

    void on_tableView2_clicked(const QModelIndex &index);

    void on_modifier2_clicked();

    void on_actualiser2_clicked();

    void on_retour2_clicked();

    void on_supprimer2_clicked();

    void on_pushButton_clicked();

    void on_PDF_2_clicked();

    void on_imprimer_3_clicked();

    void on_pushButton_19_clicked();

    void on_lineEdit_10_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_11_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_9_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_3_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_5_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
