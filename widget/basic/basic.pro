VERSION	 = -0.2
CONFIG      += designer plugin
TARGET      = $$qtLibraryTarget($$TARGET)
TEMPLATE    = lib
CONFIG += release


INSTALLS += target sources # ?? headers

INCLUDEPATH += $$PWD
HEADERS += $$PWD/qpd_sockwidgplugin.h $$PWD/qpd_sockwidg.h
SOURCES += $$PWD/qpd_sockwidgplugin.cpp $$PWD/qpd_sockwidg.cpp

OTHER_FILES = $$PWD/libqpd_SockWidgPlugin.pluginspec

include(customwidget.pri)

#target.path = $$[QT_INSTALL_PLUGINS]/designer
#target.path = /usr/lib/qtcreator/plugins/Local

target.path = $$[QT_INSTALL_PLUGINS]/designer
sources.files = $$SOURCES $$HEADERS *.pro
sources.path = $$[QT_INSTALL_PLUGINS]/designer/$$qtLibraryTarget($$TARGET).src

## well, the header should go in a better place
## but the idea is that suppose we want to set write
## permissions on that path for QT developer :)
