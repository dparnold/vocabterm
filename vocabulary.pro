#-------------------------------------------------
#
# Project created by QtCreator 2017-06-03T18:52:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = vocabulary
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vocabulary.cpp \
    vocable.cpp \
    managevocabulary.cpp

HEADERS  += mainwindow.h \
    vocabulary.h \
    vocable.h \
    managevocabulary.h

FORMS    += mainwindow.ui \
    managevocabulary.ui

DISTFILES += \
    ../../workspace/vocabulary/voc.txt
CONFIG += c++11
