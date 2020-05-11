/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef BEAGLEBONE_BLACK_EXAMPLE_HPP
#define BEAGLEBONE_BLACK_EXAMPLE_HPP

#include <iostream>


#include "../../cpu.h"

void example()
{
    std::cout << "BeagleBone Black" << std::endl;

    cpu _cpu;

    while (1)
    {
        std::cout << std::to_string(_cpu.read_bit(GPIO_DATAIN, GPIO0_20_BIT_OFFSET)) << std::endl;

        sleep(1);
    }
}

#endif // BEAGLEBONE_BLACK_EXAMPLE_HPP
