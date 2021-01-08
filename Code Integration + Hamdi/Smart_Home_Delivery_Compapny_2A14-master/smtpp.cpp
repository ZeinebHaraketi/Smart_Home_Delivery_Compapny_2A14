#include "smtpp.h"
#include "ui_smtpp.h"
#include "smtp.h"

smtpp::smtpp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smtpp)
{
    ui->setupUi(this);
}

smtpp::~smtpp()
{
    delete ui;
}

void smtpp::on_sendbutton_clicked()
{
    smtp = new Smtp("amineteibb@gmail.com" , "dope32235", "smtp.gmail.com",465);
           connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

          QString msg=ui->plainTextEdit->toPlainText();


           smtp->sendMail("amineteibb@gmail.com","mohamedamine.teyeb@esprit.tn",ui->subject_edit->text(),msg);
           bool test2;
           if(test2)

           {

               QMessageBox :: information(nullptr, QObject :: tr("Send e-Mail"),

                                          QObject::tr("e-Mail sent "),QMessageBox::Cancel);
    }

}
