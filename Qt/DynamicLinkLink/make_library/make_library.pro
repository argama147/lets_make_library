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


unix|win32: LIBS += -L$$PWD/../lib/ -ldeco

INCLUDEPATH += $$PWD/../make_library2
DEPENDPATH += $$PWD/../make_library2
