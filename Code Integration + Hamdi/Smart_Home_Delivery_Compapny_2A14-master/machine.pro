QT       += core gui sql
QT       +=printsupport
QT       +=multimedia
QT       +=charts
QT       +=network
QT       +=serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    GestionClient_ComdV.cpp \
    admin.cpp \
    arduino.cpp \
    article.cpp \
    client.cpp \
    clientanglais.cpp \
    commandesv.cpp \
    commd_v_ang.cpp \
    connection.cpp \
    gestionmarkt.cpp \
    machine.cpp \
    main.cpp \
    maingrh.cpp \
    mainwindow.cpp \
    person.cpp \
    personnel.cpp \
    plat1.cpp \
    poste.cpp \
    postes.cpp \
    promotion.cpp \
    smtp.cpp \
    smtpp.cpp \
    statistiques.cpp

HEADERS += \
    GestionClient_ComdV.h \
    admin.h \
    arduino.h \
    article.h \
    client.h \
    clientanglais.h \
    commandesv.h \
    commd_v_ang.h \
    connection.h \
    gestionmarkt.h \
    machine.h \
    maingrh.h \
    mainwindow.h \
    person.h \
    personnel.h \
    plat1.h \
    poste.h \
    postes.h \
    promotion.h \
    smtp.h \
    smtpp.h \
    statistiques.h

FORMS += \
    GestionClient_ComdV.ui \
    gestionmarkt.ui \
    maingrh.ui \
    mainwindow.ui \
    personnel.ui \
    postes.ui \
    smtpp.ui \
    statistiques.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    machine.qrc

DISTFILES +=

SUBDIRS += \
    QArduinoTools.pro
