QT       += core gui
QT += concurrent


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    process.cpp \
    rr.cpp \
    rr2.cpp \
    sjfnon.cpp \
    sjfnon2.cpp

HEADERS += \
    mainwindow.h \
    process.h \
    rr.h \
    rr2.h \
    sjfnon.h \
    sjfnon2.h

FORMS += \
    mainwindow.ui \
    rr.ui \
    rr2.ui \
    sjfnon.ui \
    sjfnon2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
