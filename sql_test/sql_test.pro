QT       += core gui
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    comboboxdelegate.cpp \
    editdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    noeditdelegate.cpp \
    qsqlrelationaltablemodel_returnrec.cpp \
    select_mainwindow.cpp \
    sqldialog.cpp \
    sqlinfodialog.cpp

HEADERS += \
    comboboxdelegate.h \
    editdialog.h \
    mainwindow.h \
    noeditdelegate.h \
    qsqlrelationaltablemodel_returnrec.h \
    select_mainwindow.h \
    sqldialog.h \
    sqlinfodialog.h

FORMS += \
    editdialog.ui \
    mainwindow.ui \
    select_mainwindow.ui \
    sqldialog.ui \
    sqlinfodialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
