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

    std::cout << "write to CON2_P08\nread ftom CON2_P10" << std::endl;

    cpu _cpu;

    _cpu.write_bits(CON2_P08_CFG_REG, CON2_P08_CFG_BIT, P_SELECT_OUTPUT, 3);
    _cpu.write_bits(CON2_P10_CFG_REG, CON2_P10_CFG_BIT, P_SELECT_INPUT, 3);

    _cpu.write_bits(CON2_P08_PUL_REG, CON2_P08_PUL_BIT, P_PULL_DISABLE, 2);
    _cpu.write_bits(CON2_P10_PUL_REG, CON2_P10_PUL_BIT, P_PULL_DOWN, 2);

    for (int i = 0; i < 5; i++)
    {
        _cpu.write_bit(CON2_P08_DAT_REG, CON2_P08_DAT_BIT, HIGH);

        std::cout << std::to_string(_cpu.read_bit(CON2_P10_DAT_REG, CON2_P10_DAT_BIT)) << std::endl;

        sleep(1);

        _cpu.write_bit(CON2_P08_DAT_REG, CON2_P08_DAT_BIT, LOW);

        std::cout << std::to_string(_cpu.read_bit(CON2_P10_DAT_REG, CON2_P10_DAT_BIT)) << std::endl;

        sleep(1);
    }
}

#endif // BPI_P2_ZERO_EXAMPLE_HPP
