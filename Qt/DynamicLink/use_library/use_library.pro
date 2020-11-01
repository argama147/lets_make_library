QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

SOURCES += \
        main.cpp

win32: LIBS += -L$$PWD/../lib/ -lhello

INCLUDEPATH += $$PWD/../make_library
DEPENDPATH += $$PWD/../make_library
