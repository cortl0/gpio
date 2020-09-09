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

#include "../../cpu.h"

void example()
{
    std::cout << "Broadcom_BCM2835" << std::endl;
    std::cout << "write to P02" << std::endl;
    std::cout << "read ftom P03" << std::endl;

    gpio::cpu _cpu;

    _cpu.write_bits(P02_GPFSEL_REG, P02_GPFSEL_BIT, FSEL_OUTPUT, 3);
    _cpu.write_bits(P03_GPFSEL_REG, P03_GPFSEL_BIT, FSEL_INPUT, 3);

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
