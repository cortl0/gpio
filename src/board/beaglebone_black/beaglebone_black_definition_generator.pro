#
#   gpio
#   created by Ilya Shishkin
#   cortl@8iter.ru
#   https://github.com/cortl0/gpio
#   licensed by GPL v3.0
#

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += ../../cpu/ti_am335x/ti_am335x_definitions.h \
           beaglebone_black_definitions.h \
           beaglebone_black_example.hpp

SOURCES += beaglebone_black_definition_generator.cpp
