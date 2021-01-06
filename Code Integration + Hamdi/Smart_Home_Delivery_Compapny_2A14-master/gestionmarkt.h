#ifndef GESTIONMARKT_H
#define GESTIONMARKT_H

#include <QMainWindow>

namespace Ui {
class GestionMarkt;
}

class GestionMarkt : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestionMarkt(QWidget *parent = nullptr);
    ~GestionMarkt();

private slots:

    //------------------- ARTICLE ------------------------//
    void on_ajouter_Article_clicked();
    void on_RechercherART_clicked();
    void on_ModifierART_clicked();
    void on_SupprimerART_clicked();

    //---------------- PROMO ------------------------//
    void on_ajouter_Promo_clicked();
    void on_ModifierPro_clicked();
    void on_RecherchePro_clicked();
    void on_SupprimerPro_clicked();

private:
    Ui::GestionMarkt *ui;
};

#endif // GESTIONMARKT_H
