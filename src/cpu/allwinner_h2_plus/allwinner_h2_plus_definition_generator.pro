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

HEADERS += allwinner_h2_plus_definitions.h \
           allwinner_h2_plus_example.hpp

SOURCES += allwinner_h2_plus_definition_generator.cpp
