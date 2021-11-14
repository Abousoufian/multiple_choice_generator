TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        false_answer.cpp \
        getQuestion.cpp \
        good_answer.cpp \
        main.cpp \
        question.cpp

HEADERS += \
    answer.h \
    question.h
