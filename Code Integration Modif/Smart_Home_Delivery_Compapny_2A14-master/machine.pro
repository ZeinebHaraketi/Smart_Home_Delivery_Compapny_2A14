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
    GestionClient_ComdV.cpp \
    admin.cpp \
    client.cpp \
    clientanglais.cpp \
    commandesv.cpp \
    commd_v_ang.cpp \
    connection.cpp \
    machine.cpp \
    main.cpp \
    maingrh.cpp \
    mainwindow.cpp \
    person.cpp \
    personnel.cpp \
    plat1.cpp \
    poste.cpp \
    postes.cpp \
    statistiques.cpp

HEADERS += \
    GestionClient_ComdV.h \
    admin.h \
    client.h \
    clientanglais.h \
    commandesv.h \
    commd_v_ang.h \
    connection.h \
    machine.h \
    maingrh.h \
    mainwindow.h \
    person.h \
    personnel.h \
    plat1.h \
    poste.h \
    postes.h \
    statistiques.h

FORMS += \
    GestionClient_ComdV.ui \
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
    machine.qrc

DISTFILES +=
