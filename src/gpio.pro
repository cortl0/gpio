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
        example.h \
        config.h \
#
        cpu/allwinner_h2_plus/allwinner_h2_plus.h \
        cpu/allwinner_h2_plus/allwinner_h2_plus_example.hpp \
        cpu/broadcom_bcm2835/broadcom_bcm2835.h \
        cpu/broadcom_bcm2835/broadcom_bcm2835_example.hpp \
        cpu/ti_am335x/ti_am335x.h \
        cpu/ti_am335x/ti_am335x_example.hpp \
#
        board/bpi_p2_zero/bpi_p2_zero.h \
        board/bpi_p2_zero/bpi_p2_zero_example.hpp \
        board/beaglebone_black/beaglebone_black.h \
        board/beaglebone_black/beaglebone_black_example.hpp \
        board/raspberry_pi_zero_r1_3/raspberry_pi_zero_r1_3.h \
        board/raspberry_pi_zero_r1_3/raspberry_pi_zero_r1_3_example.hpp
