#-------------------------------------------------
#
# Project created by QtCreator 2014-08-15T10:39:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleMDIApplication
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    FirstWindow.cpp \
    SecondWindow.cpp \
    ThirdWindow.cpp

HEADERS  += MainWindow.h \
    FirstWindow.h \
    SecondWindow.h \
    ThirdWindow.h

FORMS    += MainWindow.ui \
    FirstWindow.ui \
    SecondWindow.ui \
    ThirdWindow.ui
