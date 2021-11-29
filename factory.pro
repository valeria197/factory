QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

SOURCES += \
        classunit.cpp \
        cppclassunit.cpp \
        cppmethodunit.cpp \
        csharpclassunit.cpp \
        csharpmethodunit.cpp \
        javaclassunit.cpp \
        javamethodunit.cpp \
        main.cpp

DESTDIR = $$PWD/../out

HEADERS += \
    abstractfactory.h \
    classunit.h \
    cppclassunit.h \
    cppfactory.h \
    cppmethodunit.h \
    cppprintoperatorunit.h \
    csharpclassunit.h \
    csharpfactory.h \
    csharpmethodunit.h \
    csharpprintoperatorunit.h \
    javaclassunit.h \
    javafactory.h \
    javamethodunit.h \
    javaprintoperatorunit.h \
    methodunit.h \
    printoperatorunit.h \
    unit.h
