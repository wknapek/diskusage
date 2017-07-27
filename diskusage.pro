TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
INCLUDEPATH += /usr/include/boost
LIBS += -L/usr/include/boost -lboost_filesystem -lboost_system

SOURCES += main.cpp
