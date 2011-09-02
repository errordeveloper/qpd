VERSION	 = -0.2
CONFIG      += designer plugin
TARGET      = $$qtLibraryTarget($$TARGET)
TEMPLATE    = lib
CONFIG += release


INSTALLS += target sources # ?? headers

INCLUDEPATH += $$PWD
HEADERS += $$PWD/qpd_basic_plugin.h $$PWD/qpd_basic.h
SOURCES += $$PWD/qpd_basic_plugin.cpp $$PWD/qpd_basic.cpp

OTHER_FILES = $$PWD/libqpd_basic.pluginspec

include(customwidget.pri)

#target.path = $$[QT_INSTALL_PLUGINS]/designer
#target.path = /usr/lib/qtcreator/plugins/Local

target.path = $$[QT_INSTALL_PLUGINS]/designer
sources.files = $$SOURCES $$HEADERS *.pro
sources.path = $$[QT_INSTALL_PLUGINS]/designer/$$qtLibraryTarget($$TARGET).src

## well, the header should go in a better place
## but the idea is that suppose we want to set write
## permissions on that path for QT developer :)
