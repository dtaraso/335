#-------------------------------------------------
#
# Project created by QtCreator 2016-04-14T13:15:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proj4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addrecord.cpp

HEADERS  += \
    addrecord.h \
    employee.h \
    employee_database.h \
    mainwindow.h \
    bubblesorttemplate.h \
    bubblesortincreasing.h \
    bubblesortdecreasing.h \
    sortablevector.h \
    employeedatabasesortable.h \
    employeedatabasesortbyfirstname.h \
    employeedatabasesortbylastname.h \
    employeedatabasesortbyhireyear.h \
    sort.h

FORMS    += \
    addrecord.ui \
    mainwindow.ui
