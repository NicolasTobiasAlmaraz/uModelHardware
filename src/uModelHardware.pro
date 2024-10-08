QT       += core gui
QT += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    assistantform.cpp \
    form.cpp \
    main.cpp \
    mainwindow.cpp \
    xmlhandler/pcbhandler.cpp \
    xmlhandler/umfhandler.cpp \
    xmlhandler/umhhandler.cpp \
    xmlhandler/xmlhandler.cpp

HEADERS += \
    assistantform.h \
    form.h \
    mainwindow.h \
    xmlhandler/pcbhandler.h \
    xmlhandler/umfhandler.h \
    xmlhandler/umhhandler.h \
    xmlhandler/xmlhandler.h

FORMS += \
    assistantform.ui \
    form.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rsc.qrc

DISTFILES +=
