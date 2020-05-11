#
#   gpio
#   created by Ilya Shishkin
#   cortl@8iter.ru
#   https://github.com/cortl0/gpio
#   licensed by GPL v3.0
#

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cpu.cpp \
        main.cpp

HEADERS += \
        cpu.h \
        define_example.h \
#
        cpu/allwinner_h2_plus/allwinner_h2_plus_definitions.h \
        cpu/allwinner_h2_plus/allwinner_h2_plus_example.hpp \
        cpu/ti_am335x/ti_am335x_definitions.h \
        cpu/ti_am335x/ti_am335x_example.hpp \
#
        board/bpi_p2_zero/bpi_p2_zero_definitions.h \
        board/bpi_p2_zero/bpi_p2_zero_example.hpp \
        board/beaglebone_black/beaglebone_black_definitions.h \
        board/beaglebone_black/beaglebone_black_example.hpp