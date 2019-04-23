include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# C++11
QMAKE_CXXFLAGS += -std=c++11

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS += ../app/common.h \
    ../app/text/_text.h \
    ../app/text/text.h \
    shared.h \
    mwbb_test.h \
    rc_test.h \
    shownonempty_test.h

SOURCES += main.cpp \
    ../app/load.c \
    ../app/mwcrsr.c \
    ../app/text/append_line.c \
    ../app/text/delete_line.c \
    ../app/text/change_cursor_position.c \
    ../app/text/process_forward.c \
    ../app/text/create_text.c \
    ../app/text/prepend_line.c \
    ../app/text/remove_all.c \
    ../app/show.c \
    ../app/mwbb.c \
    ../app/rc.c \
    ../app/shownonempty.c

INCLUDEPATH += ../app
