QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20

INCLUDE_DIRS += src

SOURCES += \
    src/game.cpp \
    src/gamescene.cpp \
    src/main.cpp \
    src/view.cpp

HEADERS += \
    src/car.h \
    src/game.h \
    src/gamescene.h \
    src/view.h

RESOURCES += \
    resources/resource.qrc
