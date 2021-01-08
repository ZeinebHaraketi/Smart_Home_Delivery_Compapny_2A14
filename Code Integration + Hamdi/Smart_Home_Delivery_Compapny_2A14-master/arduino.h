#ifndef ARDUINO_H
#define ARDUINO_H
#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QString>
#include <QList>
#include <QStringList>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QDebug>
#include <QListIterator>
#include <QMessageBox>
#include <QRegExp>
#include <QFont>

class arduino
{
public:
    arduino();
    arduino(QString);
    void readArduino(void);
     bool chercherard(QString);
private:


    const QString commTabText;
    const QString lcdTabText;
    //const qint32 defaultBaudRate;



    //Ports related
    QSerialPort *ard;
    QString currentPort;
    QList <QSerialPortInfo> portInfoList;
    QStringList baudRateList;

    qint32 currentBaudRate;
    QString currentBaudRateString;
    QString id;
    QString mdp;
    QString data;
};

#endif // ARDUINO_H
