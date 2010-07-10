CONFIG      += designer plugin
TARGET      = $$qtLibraryTarget($$TARGET)
TEMPLATE    = lib
CONFIG += release

#target.path = $$[QT_INSTALL_PLUGINS]/designer
#target.path = /usr/lib/qtcreator/plugins/Local
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

INCLUDEPATH += $$PWD
HEADERS += $$PWD/qpd_sockwidg.h \
	   $$PWD/qpd_sockwidgplugin.h
SOURCES += $$PWD/qpd_sockwidg.cpp \
	   $$PWD/qpd_sockwidgplugin.cpp

include(customwidget.pri)
