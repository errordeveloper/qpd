# -------------------------------------------------
# Project created by QtCreator 2009-11-18T03:28:14
# -------------------------------------------------
QT += network qwt
TARGET = qpd
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp
HEADERS += mainwindow.h \
    qpd_sockwidg.h

FORMS += mainwindow.ui

LIBS += -L/usr/lib/qt4/plugins/designer/ -lqpd_SockWidgPlugin
