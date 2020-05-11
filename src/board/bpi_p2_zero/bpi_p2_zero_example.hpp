/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef BPI_P2_ZERO_EXAMPLE_HPP
#define BPI_P2_ZERO_EXAMPLE_HPP

#include <iostream>

// BananaPi P2 Zero (BPI-P2 Zero)
// Write to CON2-P08
// Read from CON2-P10

#include "../../cpu.h"

void example()
{
    std::cout << "BananaPi P2 Zero (BPI-P2 Zero)" << std::endl;

    cpu _cpu;

    _cpu.pin_mode(CON2_P08_CFG, CON2_P08_CFG_OFFSET, P_SELECT_OUTPUT);
    _cpu.pin_mode(CON2_P10_CFG, CON2_P10_CFG_OFFSET, P_SELECT_INPUT);

    for (int i = 0; i < 5; i++)
    {
        _cpu.write_bit(CON2_P08_DAT, CON2_P08_PORT_PIN, HIGH);

        std::cout << std::to_string(_cpu.read_bit(CON2_P10_DAT, CON2_P10_PORT_PIN)) << std::endl;

        sleep(1);

        _cpu.write_bit(CON2_P08_DAT, CON2_P08_PORT_PIN, LOW);

        std::cout << std::to_string(_cpu.read_bit(CON2_P10_DAT, CON2_P10_PORT_PIN)) << std::endl;

        sleep(1);
    }
}

#endif // BPI_P2_ZERO_EXAMPLE_HPP
