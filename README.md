# Fast GPIO library
Minimum calculations at run time  
Maximum calculations at and before compile time  
C++

## Project directories and files

### ./bash/
GPIO scripts

### ./src/ (cpu || board) /
Board and CPU Implementation code

### ./src/ (cpu || board) / * / *_definition_generator.cpp
Definitions generator for each CPU and Board  
(calculations before compile time)

### ./src/ (cpu || board) / * / *_example.hpp
Example usung for each CPU and Board

### ./src/main.cpp
Example of using GPIO for CPUs and Boards

### ./src/creator/creator.cpp
Template for new CPUs and boards

## Available CPUs
Allwinner H2+ ([Datasheet](http://8iter.ru/datasheets/cpu/Allwinner_H2+_Datasheet_V1.2.pdf)) ([Example](https://github.com/cortl0/gpio/blob/master/src/cpu/allwinner_h2_plus/allwinner_h2_plus_example.hpp))  
Broadcom BCM2835 ([Datasheet](http://8iter.ru/datasheets/cpu/Broadcom_BCM2835_Datasheet.pdf)) ([Example](https://github.com/cortl0/gpio/blob/master/src/cpu/broadcom_bcm2835/broadcom_bcm2835_example.hpp))  
Texas Instruments AM335x ([Manual](http://8iter.ru/datasheets/cpu/Texas_Instruments_AM335x_and_AMIC110_Sitara_Manual.pdf))

## Available boards
BananaPi P2 Zero (BPI-P2 Zero) ([Datasheet](http://8iter.ru/datasheets/board/BananaPI_P2_Zero_Datasheet_v1_0.pdf)) ([Example](https://github.com/cortl0/gpio/blob/master/src/board/bpi_p2_zero/bpi_p2_zero_example.hpp))  
BeagleBone Black ([Datasheet](http://8iter.ru/datasheets/board/BeagleBone_Black_Datasheet.pdf))  
Raspberry Pi Zero rev 1.3 ([Datasheet](http://8iter.ru/datasheets/board/Raspberry_Pi_Zero_r1_3_Datasheet.pdf)) ([Example](https://github.com/cortl0/gpio/blob/master/src/board/raspberry_pi_zero_r1_3/raspberry_pi_zero_r1_3_example.hpp))

## Build
make  
make all  
make clean  
if available:  
make install  
make uninstall  
Qt build

### Example project
https://github.com/cortl0/device

## Author
Ilya Shishkin  
mailto:cortl@8iter.ru

## GitHub reference
https://github.com/cortl0/gpio

## License
This project is licensed under the GPL v3.0 - see the LICENSE file for details

[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=DPXPWAL9BQD8Q)
