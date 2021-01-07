QT       += core gui sql
QT       +=printsupport
QT       +=multimedia
QT       +=charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../Desktop/gestion fournisseur - Copie - Copie/fournisseur.cpp \
    GestionClient_ComdV.cpp \
    admin.cpp \
    article.cpp \
    client.cpp \
    clientanglais.cpp \
    commande.cpp \
    commandesv.cpp \
    commd_v_ang.cpp \
    connection.cpp \
    fournisseur.cpp \
    fournisseur.cpp \
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
    statistiques.cpp

HEADERS += \
    ../../Desktop/gestion fournisseur - Copie - Copie/fournisseur.h \
    ../../Desktop/gestion fournisseur - Copie - Copie/fournisseur.h \
    GestionClient_ComdV.h \
    admin.h \
    article.h \
    client.h \
    clientanglais.h \
    commande.h \
    commandesv.h \
    commd_v_ang.h \
    connection.h \
    fournisseur.h \
    fournisseur.h \
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
    statistiques.h

FORMS += \
    ../../Desktop/gestion fournisseur - Copie - Copie/mainwindow.ui \
    ../../Desktop/gestion fournisseur - Copie/mainwindow.ui \
    GestionClient_ComdV.ui \
    gestion-fournisseur.ui \
    gestionmarkt.ui \
    maingrh.ui \
    mainwindow.ui \
    personnel.ui \
    postes.ui \
    statistiques.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    machine.qrc \
    traduction.qrc

DISTFILES +=
