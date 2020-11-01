QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

SOURCES += \
        main.cpp


win32: LIBS += -L$$PWD/../lib/ -lhello

INCLUDEPATH += $$PWD/../make_library
DEPENDPATH += $$PWD/../make_library

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../lib/hello.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../lib/libhello.a
