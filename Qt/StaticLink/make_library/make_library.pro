QT -= gui

#TARGET = hello
TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11

SOURCES += \
    word.cpp

HEADERS += \
    word.h

DESTDIR = ../lib
