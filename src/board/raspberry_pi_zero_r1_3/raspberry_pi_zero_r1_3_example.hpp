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

    cpu _cpu;


    for (int i = 0; i < 5; i++)
    {
        _cpu.write_bit(CON0_0_DAT_OFFSET, CON0_0_BIT_OFFSET, HIGH);

        std::cout << std::to_string(_cpu.read_bit(CON0_0_DAT_OFFSET, CON0_0_BIT_OFFSET)) << std::endl;

        sleep(1);

        _cpu.write_bit(CON0_0_DAT_OFFSET, CON0_0_BIT_OFFSET, LOW);

        std::cout << std::to_string(_cpu.read_bit(CON0_0_DAT_OFFSET, CON0_0_BIT_OFFSET)) << std::endl;

        sleep(1);
    }
}

#endif // RASPBERRY_PI_ZERO_R1_3_EXAMPLE_HPP
