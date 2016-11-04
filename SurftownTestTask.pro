QT += core
QT -= gui

CONFIG += c++11

TARGET = SurftownTestTask
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    wordscounter.cpp

HEADERS += \
    wordscounter.h
