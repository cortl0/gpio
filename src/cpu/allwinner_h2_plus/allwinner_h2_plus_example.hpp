/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef ALLWINNER_H2_PLUS_EXAMPLE_HPP
#define ALLWINNER_H2_PLUS_EXAMPLE_HPP

#include <iostream>

// BananaPi P2 Zero
// Write to PA13_PIN
// Read from PA14_PIN

#include "../../cpu.h"

void example()
{
    std::cout << "Allwinner H2 Plus" << std::endl;

    cpu _cpu;

    _cpu.pin_mode(PA13_CFG, PA13_CFG_OFFSET, P_SELECT_OUTPUT);
    _cpu.pin_mode(PA14_CFG, PA14_CFG_OFFSET, P_SELECT_INPUT);

    for (int i = 0; i < 5; i++)
    {
        _cpu.write_bit(PA_DAT, PA13_PIN, HIGH);

        std::cout << std::to_string(_cpu.read_bit(PA_DAT, PA14_PIN)) << std::endl;

        sleep(1);

        _cpu.write_bit(PA_DAT, PA13_PIN, LOW);

        std::cout << std::to_string(_cpu.read_bit(PA_DAT, PA14_PIN)) << std::endl;

        sleep(1);
    }
}

#endif // ALLWINNER_H2_PLUS_EXAMPLE_HPP
