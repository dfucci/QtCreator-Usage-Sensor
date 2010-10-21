TEMPLATE = lib
TARGET = XMLLogger
#CONFIG +=staticlib
CONFIG += debug_and_release
CONFIG += precompile_header
include(../../qtcreatorplugin.pri)
include(../../plugins/coreplugin/coreplugin.pri)
HEADERS += xmlloggerplugin.h \
    UserRoles.h \
    xmlevent.h
SOURCES += xmlloggerplugin.cpp \
    xmlevent.cpp
OTHER_FILES += XMLLogger.pluginspec
