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
    addrecord.cpp \
    employee.cpp

HEADERS  += \
    addrecord.h \
    employee.h \
    employee_database.h \
    mainwindow.h

FORMS    += \
    addrecord.ui \
    mainwindow.ui
