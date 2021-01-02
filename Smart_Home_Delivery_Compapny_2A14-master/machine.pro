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
    afficherperso.cpp \
    client.cpp \
    commandesv.cpp \
    connection.cpp \
    grh.cpp \
    machine.cpp \
    main.cpp \
    mainwindow.cpp \
    person.cpp \
    plat1.cpp \
    poste.cpp \
    postes.cpp \
    statistiques.cpp

HEADERS += \
    GestionClient_ComdV.h \
    admin.h \
    afficherperso.h \
    client.h \
    commandesv.h \
    connection.h \
    grh.h \
    machine.h \
    mainwindow.h \
    person.h \
    plat1.h \
    postes.h \
    statistiques.h

FORMS += \
    GestionClient_ComdV.ui \
    afficherperso.ui \
    grh.ui \
    mainwindow.ui \
    postes.ui \
    statistiques.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=

DISTFILES +=
