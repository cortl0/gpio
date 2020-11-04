#
#   gpio
#   created by Ilya Shishkin
#   cortl@8iter.ru
#   https://github.com/cortl0/gpio
#   licensed by GPL v3.0
#

TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += ../../cpu/allwinner_h2_plus/allwinner_h2_plus.h \
           bpi_p2_zero.h \
           bpi_p2_zero_example.hpp

SOURCES += bpi_p2_zero_generator.cpp
