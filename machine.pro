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
    connection.cpp \
    machine.cpp \
    main.cpp \
    mainwindow.cpp \
    plat1.cpp \
    statistiques.cpp

HEADERS += \
    connection.h \
    machine.h \
    mainwindow.h \
    plat1.h \
    statistiques.h

FORMS += \
    mainwindow.ui \
    statistiques.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    machine.qrc

DISTFILES +=
