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

#include "allwinner_h2_plus.h"

void example()
{
    std::cout << "Allwinner H2 Plus" << std::endl;
    std::cout << "write to PA13" << std::endl;
    std::cout << "read ftom PA14" << std::endl;

    gpio::cpu _cpu(BASE_ADDRESS_GPIO);

    _cpu.write_bits(PA13_CFG_REG, PA13_CFG_BIT, P_SELECT_OUTPUT, 3);
    _cpu.write_bits(PA14_CFG_REG, PA14_CFG_BIT, P_SELECT_INPUT, 3);

    _cpu.write_bits(PA13_PUL_REG, PA13_PUL_BIT, P_PULL_DISABLE, 2);
    _cpu.write_bits(PA14_PUL_REG, PA14_PUL_BIT, P_PULL_UP, 2);

    for (int i = 0; i < 5; i++)
    {
        _cpu.write_bit(PA13_DAT_REG, PA13_DAT_BIT, HIGH);

        std::cout << std::to_string(_cpu.read_bit(PA14_DAT_REG, PA14_DAT_BIT)) << std::endl;

        sleep(1);

        _cpu.write_bit(PA13_DAT_REG, PA13_DAT_BIT, LOW);

        std::cout << std::to_string(_cpu.read_bit(PA14_DAT_REG, PA14_DAT_BIT)) << std::endl;

        sleep(1);
    }
}

#endif // ALLWINNER_H2_PLUS_EXAMPLE_HPP
