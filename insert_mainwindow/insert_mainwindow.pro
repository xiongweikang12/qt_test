QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    insert_window.cpp \
    main.cpp \
    mainwindow.cpp \
    mytform.cpp \
    setheadlabeldialog.cpp \
    setitemdialog.cpp \
    tsizedialog.cpp

HEADERS += \
    insert_window.h \
    mainwindow.h \
    mytform.h \
    setheadlabeldialog.h \
    setitemdialog.h \
    tsizedialog.h

FORMS += \
    insert_window.ui \
    mainwindow.ui \
    mytform.ui \
    setheadlabeldialog.ui \
    setitemdialog.ui \
    tsizedialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc \
    res.qrc
