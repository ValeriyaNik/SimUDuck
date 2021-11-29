QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        decoyduck.cpp \
        duck.cpp \
        flybehavior.cpp \
        flynoway.cpp \
        flywithwings.cpp \
        main.cpp \
        mallardduck.cpp \
        mutequack.cpp \
        quack.cpp \
        quackbehavior.cpp \
        redheadduck.cpp \
        rubberduck.cpp \
        squeak.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    decoyduck.h \
    duck.h \
    flybehavior.h \
    flynoway.h \
    flywithwings.h \
    mallardduck.h \
    mutequack.h \
    quack.h \
    quackbehavior.h \
    redheadduck.h \
    rubberduck.h \
    squeak.h
