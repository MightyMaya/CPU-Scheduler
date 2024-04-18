QT       += core gui
QT += concurrent


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fcfs.cpp \
    fcfs2.cpp \
    main.cpp \
    mainwindow.cpp \
    pri.cpp \
    pri2.cpp \
    prinon.cpp \
    prinon2.cpp \
    process.cpp \
    rr.cpp \
    rr2.cpp \
    sjf.cpp \
    sjf2.cpp \
    sjfnon.cpp \
    sjfnon2.cpp

HEADERS += \
    fcfs.h \
    fcfs2.h \
    mainwindow.h \
    pri.h \
    pri2.h \
    prinon.h \
    prinon2.h \
    process.h \
    rr.h \
    rr2.h \
    sjf.h \
    sjf2.h \
    sjfnon.h \
    sjfnon2.h

FORMS += \
    fcfs.ui \
    fcfs2.ui \
    mainwindow.ui \
    pri.ui \
    pri2.ui \
    prinon.ui \
    prinon2.ui \
    rr.ui \
    rr2.ui \
    sjf.ui \
    sjf2.ui \
    sjfnon.ui \
    sjfnon2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
