# Fast GPIO library
Minimum calculations at run time  
Maximum calculations at and before compile time  
C++

## Project directories and files

#### ./bash/
GPIO scripts

#### ./src/ (cpu || board) / * .h
Board and CPU definitions

#### ./src/ (cpu || board) / * / *_generator.cpp
Definitions generator for each CPU and Board  
(calculations before compile time)

#### ./src/ (cpu || board) / * / *_example.hpp
Example usung for each CPU and Board

#### ./src/main.cpp
Example of using GPIO for all CPUs and Boards

#### ./src/creator/creator.cpp
Template for new CPUs and boards

## Available CPUs
Allwinner H2+ ([Datasheet](http://8iter.ru/datasheets/cpu/Allwinner_H2+_Datasheet_V1.2.pdf)) ([Example](https://github.com/cortl0/gpio/blob/master/src/cpu/allwinner_h2_plus/allwinner_h2_plus_example.hpp))  
Broadcom BCM2835 ([Datasheet](http://8iter.ru/datasheets/cpu/Broadcom_BCM2835_Datasheet.pdf)) ([Example](https://github.com/cortl0/gpio/blob/master/src/cpu/broadcom_bcm2835/broadcom_bcm2835_example.hpp))  
Texas Instruments AM335x ([Manual](http://8iter.ru/datasheets/cpu/Texas_Instruments_AM335x_and_AMIC110_Sitara_Manual.pdf))

## Available boards
BananaPi P2 Zero (BPI-P2 Zero) ([Datasheet](http://8iter.ru/datasheets/board/BananaPI_P2_Zero_Datasheet_v1_0.pdf)) ([Example](https://github.com/cortl0/gpio/blob/master/src/board/bpi_p2_zero/bpi_p2_zero_example.hpp))  
BeagleBone Black ([Datasheet](http://8iter.ru/datasheets/board/BeagleBone_Black_Datasheet.pdf))  
Raspberry Pi Zero rev 1.3 ([Datasheet](http://8iter.ru/datasheets/board/Raspberry_Pi_Zero_r1_3_Datasheet.pdf)) ([Example](https://github.com/cortl0/gpio/blob/master/src/board/raspberry_pi_zero_r1_3/raspberry_pi_zero_r1_3_example.hpp))

## Example project
https://github.com/cortl0/device

## Build
make  
make clean  
make install  
make uninstall  
Qt build

## Usage
```
#include "board/bpi_p2_zero/bpi_p2_zero.h"

int main()
{
    gpio::cpu _cpu(BASE_ADDRESS_GPIO);
    
    _cpu.write_bits(CON2_P10_CFG_REG, CON2_P10_CFG_BIT, P_SELECT_INPUT, P_SELECT_LENGTH);
    _cpu.write_bits(CON2_P10_PUL_REG, CON2_P10_PUL_BIT, P_PULL_DOWN, P_PULL_LENGTH);
    bool state_CON2_P10 = _cpu.read_bit(CON2_P10_DAT_REG, CON2_P10_DAT_BIT);
    
    _cpu.write_bits(CON2_P07_CFG_REG, CON2_P07_CFG_BIT, P_SELECT_OUTPUT, P_SELECT_LENGTH);
    bool state_CON2_P07 = HIGH;
    _cpu.write_bit (CON2_P07_DAT_REG, CON2_P07_DAT_BIT, state_CON2_P07);
    
    return 0;
}
```

## Author
Ilya Shishkin  
mailto:cortl@8iter.ru

## GitHub reference
https://github.com/cortl0/gpio

## License
This project is licensed under the GPL v3.0 - see the LICENSE file for details

[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=cortl@yandex.ru&item_name=for+the+development+gpio+and+my+other+projects&amount=5%2e00&currency_code=USD)  
