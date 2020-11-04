/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <iostream>

// all boards
#define BEAGLEBONE_BLACK                0
#define BPI_P2_ZERO                     1
#define RASPBERRY_PI_ZERO_R1_3          2

// all processors
#define ALLWINNER_H2_PLUS               0
#define BROADCOM_BCM2835                1
#define TI_AM335X                       2

#define BOARD                           BPI_P2_ZERO
#ifdef BOARD

#if (BOARD == BEAGLEBONE_BLACK)
#include "board/beaglebone_black/beaglebone_black_example.hpp"
#elif (BOARD == BPI_P2_ZERO)
#include "board/bpi_p2_zero/bpi_p2_zero_example.hpp"
#elif (BOARD == RASPBERRY_PI_ZERO_R1_3)
#include "board/raspberry_pi_zero_r1_3/raspberry_pi_zero_r1_3_example.hpp"
#endif

#else // !BOARD

#define CPU                             ALLWINNER_H2_PLUS
#ifdef CPU

#if (CPU == ALLWINNER_H2_PLUS)
#include "cpu/allwinner_h2_plus/allwinner_h2_plus_example.hpp"
#elif (CPU == BROADCOM_BCM2835)
#include "cpu/broadcom_bcm2835/broadcom_bcm2835_example.hpp"
#elif (CPU == TI_AM335X)
#include "cpu/ti_am335x/ti_am335x_example.hpp"
#endif

#else  // !CPU
void example()
{
    std::cout << "Please define an example" << std::endl;
};
#endif

#endif // !BOARD !CPU

#endif // EXAMPLE_H
