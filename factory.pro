QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

SOURCES += \
        main.cpp

DESTDIR = $PWD/../out

HEADERS += \
    classunit.h \
    methodunit.h \
    printoperatorunit.h \
    unit.h
