/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef DEFINE_EXAMPLE_H
#define DEFINE_EXAMPLE_H

#include "cpu.h"

#if defined(BEAGLEBUNE_BLACK_DEFINITIONS_H)
#include "board/beaglebone_black/beaglebone_black_example.hpp"
#elif defined(BPI_P2_ZERO_DEFINITIONS_H)
#include "board/bpi_p2_zero/bpi_p2_zero_example.hpp"
#elif defined(BOARD_TEMPLATE_DEFINITIONS_H)
#include "board/board_template/board_template_example.hpp"

#elif defined(ALLWINNER_H2_PLUS_DEFINITIONS_H)
#include "cpu/allwinner_h2_plus/allwinner_h2_plus_example.hpp"
#elif defined(TI_AM335X_DEFINITIONS_H)
#include "cpu/ti_am335x/ti_am335x_example.hpp"
#elif defined(CPU_TEMPLATE_DEFINITIONS_H)
#include "cpu/cpu_template/cpu_template_example.hpp"




#else
void example()
{
    std::cout << "Please define an example" << std::endl;
};
#endif

#endif // DEFINE_EXAMPLE_H
