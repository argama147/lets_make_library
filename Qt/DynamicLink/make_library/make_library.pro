QT -= gui

TARGET = hello
TEMPLATE = lib
DEFINES += MAKE_LIBRARY_LIBRARY

CONFIG += c++11

SOURCES += \
    word.cpp

HEADERS += \
    make_library_global.h \
    word.h

DESTDIR = ../lib
