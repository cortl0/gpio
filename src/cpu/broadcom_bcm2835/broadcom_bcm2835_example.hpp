/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef BROADCOM_BCM2835_EXAMPLE_HPP
#define BROADCOM_BCM2835_EXAMPLE_HPP

#include <iostream>

/*
 * Broadcom_BCM2835
 * Write to GPIO0_0
 * Read from GPIO0_0
 */

#include "../../cpu.h"

void example()
{
    std::cout << "Broadcom_BCM2835" << std::endl;

    cpu _cpu;


    for (int i = 0; i < 5; i++)
    {
        _cpu.write_bit(GPIO0, GPIO0_0_OFFSET, HIGH);

        std::cout << std::to_string(_cpu.read_bit(GPIO0, GPIO0_0_OFFSET)) << std::endl;

        sleep(1);

        _cpu.write_bit(GPIO0, GPIO0_0_OFFSET, LOW);

        std::cout << std::to_string(_cpu.read_bit(GPIO0, GPIO0_0_OFFSET)) << std::endl;

        sleep(1);
    }
}

#endif // BROADCOM_BCM2835_EXAMPLE_HPP
