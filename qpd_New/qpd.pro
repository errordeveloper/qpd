# -------------------------------------------------
# Project created by QtCreator 2009-11-18T03:28:14
# -------------------------------------------------
QT += network qwt
TARGET = $$system(basename $$_PRO_FILE_PWD_)
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
HEADERS += mainwindow.h

FORMS += mainwindow.ui

LIBS += -L$$[QT_INSTALL_PLUGINS]/designer/ -lqpd_SockWidgPlugin
INCLUDEPATH += $$[QT_INSTALL_PLUGINS]/designer/libqpd_SockWidgPlugin.src/
