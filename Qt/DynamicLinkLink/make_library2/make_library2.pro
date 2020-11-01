QT -= gui

TARGET = deco
TEMPLATE = lib
DEFINES += MAKE_LIBRARY2_LIBRARY

CONFIG += c++11

SOURCES += \
    decoration.cpp

HEADERS += \
    make_library2_global.h \
    decoration.h

DESTDIR = ../lib
