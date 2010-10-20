TEMPLATE = lib
QT += xml
TARGET = XMLLogger


#DESTDIR = "$$IDE_BUILD_TREE/bin/Qt Creator.app/Contents/PlugIns/$$PROVIDER"
#include($$IDE_SOURCE_TREE/src/plugins/coreplugin/coreplugin.pri)
#LIBS += -L"$$IDE_BUILD_TREE/bin/Qt Creator.app/Contents/PlugIns/Nokia"
include(../../qtcreatorplugin.pri)
include(../../plugins/coreplugin/coreplugin.pri)
HEADERS += xmlloggerplugin.h \
    UserRoles.h
SOURCES += xmlloggerplugin.cpp
OTHER_FILES += XMLLogger.pluginspec
