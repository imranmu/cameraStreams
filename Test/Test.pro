include(../gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt
INCLUDEPATH += \
        ../../googletest/googletest/include \
        ../../googletest/googlemock/include/

HEADERS += \
        ../displayctrlfunctions.h \
        tst_videosrcflags.h

SOURCES += \
        ../displayctrlfunctions.cpp \
        main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../build/lib/release/ -lgtest
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../build/lib/debug/ -lgtest
else:unix: LIBS += -L$$PWD/../../../../build/lib/ -lgtest

INCLUDEPATH += $$PWD/../../../../build/lib/Release
DEPENDPATH += $$PWD/../../../../build/lib/Release

FORMS += \
    ../mainwindow.ui


