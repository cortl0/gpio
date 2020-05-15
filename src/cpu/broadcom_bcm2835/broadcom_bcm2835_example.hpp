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

    std::cout << "write to P02\nread ftom P03" << std::endl;

    cpu _cpu;

    _cpu.write_bits(P02_GPFSEL_REG, P02_GPFSEL_BIT, 3, FSEL_OUTPUT);
    _cpu.write_bits(P03_GPFSEL_REG, P03_GPFSEL_BIT, 3, FSEL_INPUT);

    for (int i = 0; i < 5; i++)
    {
        _cpu.write_bit(P02_GPSET_REG, P02_GPSET_BIT, HIGH);

        std::cout << std::to_string(_cpu.read_bit(P03_GPLEV_REG, P03_GPLEV_BIT)) << std::endl;

        sleep(1);

        _cpu.write_bit(P02_GPCLR_REG, P02_GPCLR_BIT, HIGH);

        std::cout << std::to_string(_cpu.read_bit(P03_GPLEV_REG, P03_GPLEV_BIT)) << std::endl;

        sleep(1);
    }
}

#endif // BROADCOM_BCM2835_EXAMPLE_HPP
