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

HEADERS += broadcom_bcm2835_definitions.h \
           broadcom_bcm2835_example.hpp

SOURCES += broadcom_bcm2835_definition_generator.cpp
