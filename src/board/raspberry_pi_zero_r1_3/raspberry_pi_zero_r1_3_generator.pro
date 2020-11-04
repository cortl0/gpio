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

HEADERS += ../../cpu/broadcom_bcm2835/broadcom_bcm2835.h \
           raspberry_pi_zero_r1_3.h \
           raspberry_pi_zero_r1_3_example.hpp

SOURCES += raspberry_pi_zero_r1_3_generator.cpp
