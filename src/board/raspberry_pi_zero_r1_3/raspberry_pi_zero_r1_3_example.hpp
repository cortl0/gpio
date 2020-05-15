/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef RASPBERRY_PI_ZERO_R1_3_EXAMPLE_HPP
#define RASPBERRY_PI_ZERO_R1_3_EXAMPLE_HPP

#include <iostream>

/*
 * Raspberry_Pi_Zero_r1_3
 * Write to PORT_PIN_0
 * Read from PORT_PIN_0
 */

#include "../../cpu.h"

void example()
{
    std::cout << "Raspberry_Pi_Zero_r1_3" << std::endl;

    std::cout << "write to J8_P03\nread ftom J8_P05" << std::endl;

    cpu _cpu;

    _cpu.write_bits(J8_P03_GPFSEL_REG, J8_P03_GPFSEL_BIT, 3, FSEL_OUTPUT);
    _cpu.write_bits(J8_P05_GPFSEL_REG, J8_P05_GPFSEL_BIT, 3, FSEL_INPUT);

    for (int i = 0; i < 5; i++)
    {
        _cpu.write_bit(J8_P03_GPSET_REG, J8_P03_GPSET_BIT, HIGH);

        std::cout << std::to_string(_cpu.read_bit(J8_P05_GPLEV_REG, J8_P05_GPLEV_BIT)) << std::endl;

        sleep(1);

        _cpu.write_bit(J8_P03_GPCLR_REG, J8_P03_GPCLR_BIT, HIGH);

        std::cout << std::to_string(_cpu.read_bit(J8_P05_GPLEV_REG, J8_P05_GPLEV_BIT)) << std::endl;

        sleep(1);
    }
}

#endif // RASPBERRY_PI_ZERO_R1_3_EXAMPLE_HPP
