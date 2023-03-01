QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_item.cpp \
    admin.cpp \
    all_item.cpp \
    check_appli.cpp \
    del_item.cpp \
    main.cpp \
    mainwindow.cpp \
    option.cpp \
    prop.cpp \
    regi.cpp \
    search_item.cpp \
    user.cpp

HEADERS += \
    add_item.h \
    admin.h \
    all_item.h \
    check_appli.h \
    del_item.h \
    mainwindow.h \
    option.h \
    prop.h \
    regi.h \
    search_item.h \
    user.h

FORMS += \
    add_item.ui \
    admin.ui \
    all_item.ui \
    check_appli.ui \
    del_item.ui \
    mainwindow.ui \
    option.ui \
    prop.ui \
    regi.ui \
    search_item.ui \
    user.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    APPLICANT.txt \
    DIVID.txt \
    ITEM.txt \
    K1.txt \
    K2.txt \
    K3.txt \
    PROP.txt \
    T1.txt \
    T2.txt \
    T3.txt \
    TMP_ITEM.txt \
    TMP_SEAR.txt \
    TMP_USER.txt \
    USER.txt
