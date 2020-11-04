/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef BPI_P2_ZERO_H
#define BPI_P2_ZERO_H

#include "../../cpu/allwinner_h2_plus/allwinner_h2_plus.h"

#define BOARD_NAME BPI_P2_Zero
#define BOARD_NAME_LOWER bpi_p2_zero
#define BOARD_NAME_UPPER BPI_P2_ZERO

/*
 * Datasheet: http://8iter.ru/datasheets/board/BananaPI_P2_Zero_Datasheet_v1_0.pdf
 * CON2 DIP40-254
 * Sheet 7
 *
 * Description:
 * Configure register
 * Bit offset in configure register
 * Data register
 * Bit offset in data register
 * Pull register
 * Bit offset in pull register
 */

// CON2_P03
#define CON2_P03_CFG_REG            PA12_CFG_REG
#define CON2_P03_CFG_BIT            PA12_CFG_BIT
#define CON2_P03_DAT_REG            PA12_DAT_REG
#define CON2_P03_DAT_BIT            PA12_DAT_BIT
#define CON2_P03_PUL_REG            PA12_PUL_REG
#define CON2_P03_PUL_BIT            PA12_PUL_BIT

// CON2_P05
#define CON2_P05_CFG_REG            PA11_CFG_REG
#define CON2_P05_CFG_BIT            PA11_CFG_BIT
#define CON2_P05_DAT_REG            PA11_DAT_REG
#define CON2_P05_DAT_BIT            PA11_DAT_BIT
#define CON2_P05_PUL_REG            PA11_PUL_REG
#define CON2_P05_PUL_BIT            PA11_PUL_BIT

// CON2_P07
#define CON2_P07_CFG_REG            PA06_CFG_REG
#define CON2_P07_CFG_BIT            PA06_CFG_BIT
#define CON2_P07_DAT_REG            PA06_DAT_REG
#define CON2_P07_DAT_BIT            PA06_DAT_BIT
#define CON2_P07_PUL_REG            PA06_PUL_REG
#define CON2_P07_PUL_BIT            PA06_PUL_BIT

// CON2_P08
#define CON2_P08_CFG_REG            PA13_CFG_REG
#define CON2_P08_CFG_BIT            PA13_CFG_BIT
#define CON2_P08_DAT_REG            PA13_DAT_REG
#define CON2_P08_DAT_BIT            PA13_DAT_BIT
#define CON2_P08_PUL_REG            PA13_PUL_REG
#define CON2_P08_PUL_BIT            PA13_PUL_BIT

// CON2_P10
#define CON2_P10_CFG_REG            PA14_CFG_REG
#define CON2_P10_CFG_BIT            PA14_CFG_BIT
#define CON2_P10_DAT_REG            PA14_DAT_REG
#define CON2_P10_DAT_BIT            PA14_DAT_BIT
#define CON2_P10_PUL_REG            PA14_PUL_REG
#define CON2_P10_PUL_BIT            PA14_PUL_BIT

// CON2_P11
#define CON2_P11_CFG_REG            PA01_CFG_REG
#define CON2_P11_CFG_BIT            PA01_CFG_BIT
#define CON2_P11_DAT_REG            PA01_DAT_REG
#define CON2_P11_DAT_BIT            PA01_DAT_BIT
#define CON2_P11_PUL_REG            PA01_PUL_REG
#define CON2_P11_PUL_BIT            PA01_PUL_BIT

// CON2_P12
#define CON2_P12_CFG_REG            PA16_CFG_REG
#define CON2_P12_CFG_BIT            PA16_CFG_BIT
#define CON2_P12_DAT_REG            PA16_DAT_REG
#define CON2_P12_DAT_BIT            PA16_DAT_BIT
#define CON2_P12_PUL_REG            PA16_PUL_REG
#define CON2_P12_PUL_BIT            PA16_PUL_BIT

// CON2_P13
#define CON2_P13_CFG_REG            PA00_CFG_REG
#define CON2_P13_CFG_BIT            PA00_CFG_BIT
#define CON2_P13_DAT_REG            PA00_DAT_REG
#define CON2_P13_DAT_BIT            PA00_DAT_BIT
#define CON2_P13_PUL_REG            PA00_PUL_REG
#define CON2_P13_PUL_BIT            PA00_PUL_BIT

// CON2_P15
#define CON2_P15_CFG_REG            PA03_CFG_REG
#define CON2_P15_CFG_BIT            PA03_CFG_BIT
#define CON2_P15_DAT_REG            PA03_DAT_REG
#define CON2_P15_DAT_BIT            PA03_DAT_BIT
#define CON2_P15_PUL_REG            PA03_PUL_REG
#define CON2_P15_PUL_BIT            PA03_PUL_BIT

// CON2_P16
#define CON2_P16_CFG_REG            PA15_CFG_REG
#define CON2_P16_CFG_BIT            PA15_CFG_BIT
#define CON2_P16_DAT_REG            PA15_DAT_REG
#define CON2_P16_DAT_BIT            PA15_DAT_BIT
#define CON2_P16_PUL_REG            PA15_PUL_REG
#define CON2_P16_PUL_BIT            PA15_PUL_BIT

// CON2_P18
#define CON2_P18_CFG_REG            PC04_CFG_REG
#define CON2_P18_CFG_BIT            PC04_CFG_BIT
#define CON2_P18_DAT_REG            PC04_DAT_REG
#define CON2_P18_DAT_BIT            PC04_DAT_BIT
#define CON2_P18_PUL_REG            PC04_PUL_REG
#define CON2_P18_PUL_BIT            PC04_PUL_BIT

// CON2_P19
#define CON2_P19_CFG_REG            PC00_CFG_REG
#define CON2_P19_CFG_BIT            PC00_CFG_BIT
#define CON2_P19_DAT_REG            PC00_DAT_REG
#define CON2_P19_DAT_BIT            PC00_DAT_BIT
#define CON2_P19_PUL_REG            PC00_PUL_REG
#define CON2_P19_PUL_BIT            PC00_PUL_BIT

// CON2_P21
#define CON2_P21_CFG_REG            PC01_CFG_REG
#define CON2_P21_CFG_BIT            PC01_CFG_BIT
#define CON2_P21_DAT_REG            PC01_DAT_REG
#define CON2_P21_DAT_BIT            PC01_DAT_BIT
#define CON2_P21_PUL_REG            PC01_PUL_REG
#define CON2_P21_PUL_BIT            PC01_PUL_BIT

// CON2_P22
#define CON2_P22_CFG_REG            PA02_CFG_REG
#define CON2_P22_CFG_BIT            PA02_CFG_BIT
#define CON2_P22_DAT_REG            PA02_DAT_REG
#define CON2_P22_DAT_BIT            PA02_DAT_BIT
#define CON2_P22_PUL_REG            PA02_PUL_REG
#define CON2_P22_PUL_BIT            PA02_PUL_BIT

// CON2_P23
#define CON2_P23_CFG_REG            PC02_CFG_REG
#define CON2_P23_CFG_BIT            PC02_CFG_BIT
#define CON2_P23_DAT_REG            PC02_DAT_REG
#define CON2_P23_DAT_BIT            PC02_DAT_BIT
#define CON2_P23_PUL_REG            PC02_PUL_REG
#define CON2_P23_PUL_BIT            PC02_PUL_BIT

// CON2_P24
#define CON2_P24_CFG_REG            PC03_CFG_REG
#define CON2_P24_CFG_BIT            PC03_CFG_BIT
#define CON2_P24_DAT_REG            PC03_DAT_REG
#define CON2_P24_DAT_BIT            PC03_DAT_BIT
#define CON2_P24_PUL_REG            PC03_PUL_REG
#define CON2_P24_PUL_BIT            PC03_PUL_BIT

// CON2_P26
#define CON2_P26_CFG_REG            PC07_CFG_REG
#define CON2_P26_CFG_BIT            PC07_CFG_BIT
#define CON2_P26_DAT_REG            PC07_DAT_REG
#define CON2_P26_DAT_BIT            PC07_DAT_BIT
#define CON2_P26_PUL_REG            PC07_PUL_REG
#define CON2_P26_PUL_BIT            PC07_PUL_BIT

// CON2_P27
#define CON2_P27_CFG_REG            PA19_CFG_REG
#define CON2_P27_CFG_BIT            PA19_CFG_BIT
#define CON2_P27_DAT_REG            PA19_DAT_REG
#define CON2_P27_DAT_BIT            PA19_DAT_BIT
#define CON2_P27_PUL_REG            PA19_PUL_REG
#define CON2_P27_PUL_BIT            PA19_PUL_BIT

// CON2_P28
#define CON2_P28_CFG_REG            PA18_CFG_REG
#define CON2_P28_CFG_BIT            PA18_CFG_BIT
#define CON2_P28_DAT_REG            PA18_DAT_REG
#define CON2_P28_DAT_BIT            PA18_DAT_BIT
#define CON2_P28_PUL_REG            PA18_PUL_REG
#define CON2_P28_PUL_BIT            PA18_PUL_BIT

// CON2_P29
#define CON2_P29_CFG_REG            PA07_CFG_REG
#define CON2_P29_CFG_BIT            PA07_CFG_BIT
#define CON2_P29_DAT_REG            PA07_DAT_REG
#define CON2_P29_DAT_BIT            PA07_DAT_BIT
#define CON2_P29_PUL_REG            PA07_PUL_REG
#define CON2_P29_PUL_BIT            PA07_PUL_BIT

// CON2_P31
#define CON2_P31_CFG_REG            PA08_CFG_REG
#define CON2_P31_CFG_BIT            PA08_CFG_BIT
#define CON2_P31_DAT_REG            PA08_DAT_REG
#define CON2_P31_DAT_BIT            PA08_DAT_BIT
#define CON2_P31_PUL_REG            PA08_PUL_REG
#define CON2_P31_PUL_BIT            PA08_PUL_BIT

// CON2_P32
#define CON2_P32_CFG_REG            PL02_CFG_REG
#define CON2_P32_CFG_BIT            PL02_CFG_BIT
#define CON2_P32_DAT_REG            PL02_DAT_REG
#define CON2_P32_DAT_BIT            PL02_DAT_BIT
#define CON2_P32_PUL_REG            PL02_PUL_REG
#define CON2_P32_PUL_BIT            PL02_PUL_BIT

// CON2_P33
#define CON2_P33_CFG_REG            PA09_CFG_REG
#define CON2_P33_CFG_BIT            PA09_CFG_BIT
#define CON2_P33_DAT_REG            PA09_DAT_REG
#define CON2_P33_DAT_BIT            PA09_DAT_BIT
#define CON2_P33_PUL_REG            PA09_PUL_REG
#define CON2_P33_PUL_BIT            PA09_PUL_BIT

// CON2_P35
#define CON2_P35_CFG_REG            PA10_CFG_REG
#define CON2_P35_CFG_BIT            PA10_CFG_BIT
#define CON2_P35_DAT_REG            PA10_DAT_REG
#define CON2_P35_DAT_BIT            PA10_DAT_BIT
#define CON2_P35_PUL_REG            PA10_PUL_REG
#define CON2_P35_PUL_BIT            PA10_PUL_BIT

// CON2_P36
#define CON2_P36_CFG_REG            PL04_CFG_REG
#define CON2_P36_CFG_BIT            PL04_CFG_BIT
#define CON2_P36_DAT_REG            PL04_DAT_REG
#define CON2_P36_DAT_BIT            PL04_DAT_BIT
#define CON2_P36_PUL_REG            PL04_PUL_REG
#define CON2_P36_PUL_BIT            PL04_PUL_BIT

// CON2_P37
#define CON2_P37_CFG_REG            PA17_CFG_REG
#define CON2_P37_CFG_BIT            PA17_CFG_BIT
#define CON2_P37_DAT_REG            PA17_DAT_REG
#define CON2_P37_DAT_BIT            PA17_DAT_BIT
#define CON2_P37_PUL_REG            PA17_PUL_REG
#define CON2_P37_PUL_BIT            PA17_PUL_BIT

// CON2_P38
#define CON2_P38_CFG_REG            PA21_CFG_REG
#define CON2_P38_CFG_BIT            PA21_CFG_BIT
#define CON2_P38_DAT_REG            PA21_DAT_REG
#define CON2_P38_DAT_BIT            PA21_DAT_BIT
#define CON2_P38_PUL_REG            PA21_PUL_REG
#define CON2_P38_PUL_BIT            PA21_PUL_BIT

// CON2_P40
#define CON2_P40_CFG_REG            PA20_CFG_REG
#define CON2_P40_CFG_BIT            PA20_CFG_BIT
#define CON2_P40_DAT_REG            PA20_DAT_REG
#define CON2_P40_DAT_BIT            PA20_DAT_BIT
#define CON2_P40_PUL_REG            PA20_PUL_REG
#define CON2_P40_PUL_BIT            PA20_PUL_BIT

#endif // BPI_P2_ZERO_H
