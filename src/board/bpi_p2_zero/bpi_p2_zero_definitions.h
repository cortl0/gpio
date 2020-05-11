/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef BPI_P2_ZERO_DEFINITIONS_H
#define BPI_P2_ZERO_DEFINITIONS_H

#include "../../cpu/allwinner_h2_plus/allwinner_h2_plus_definitions.h"

//BOARD_NAME BPI_P2_Zero
//BOARD_NAME_LOWER bpi_p2_zero
//BOARD_NAME_UPPER BPI_P2_ZERO

/*
 * BPI_P2_Zero_Datasheet_v1_0
 * CON2 DIP40-254
 * Sheet 7
 *
 * Description:
 * Pin num (bit offset in data register)
 * Configure register
 * Offset in configure register
 * Data register
 * Pull register 0
 * Pull register 1
 */

#define CON2_P03_PORT_PIN           PA12_PIN
#define CON2_P03_CFG                PA12_CFG
#define CON2_P03_CFG_OFFSET         PA12_CFG_OFFSET
#define CON2_P03_DAT                PA_DAT
#define CON2_P03_PUL0               PA_PUL0
#define CON2_P03_PUL1               PA_PUL1

#define CON2_P05_PORT_PIN           PA11_PIN
#define CON2_P05_CFG                PA11_CFG
#define CON2_P05_CFG_OFFSET         PA11_CFG_OFFSET
#define CON2_P05_DAT                PA_DAT
#define CON2_P05_PUL0               PA_PUL0
#define CON2_P05_PUL1               PA_PUL1

#define CON2_P07_PORT_PIN           PA06_PIN
#define CON2_P07_CFG                PA06_CFG
#define CON2_P07_CFG_OFFSET         PA06_CFG_OFFSET
#define CON2_P07_DAT                PA_DAT
#define CON2_P07_PUL0               PA_PUL0
#define CON2_P07_PUL1               PA_PUL1

#define CON2_P08_PORT_PIN           PA13_PIN
#define CON2_P08_CFG                PA13_CFG
#define CON2_P08_CFG_OFFSET         PA13_CFG_OFFSET
#define CON2_P08_DAT                PA_DAT
#define CON2_P08_PUL0               PA_PUL0
#define CON2_P08_PUL1               PA_PUL1

#define CON2_P10_PORT_PIN           PA14_PIN
#define CON2_P10_CFG                PA14_CFG
#define CON2_P10_CFG_OFFSET         PA14_CFG_OFFSET
#define CON2_P10_DAT                PA_DAT
#define CON2_P10_PUL0               PA_PUL0
#define CON2_P10_PUL1               PA_PUL1

#define CON2_P11_PORT_PIN           PA01_PIN
#define CON2_P11_CFG                PA01_CFG
#define CON2_P11_CFG_OFFSET         PA01_CFG_OFFSET
#define CON2_P11_DAT                PA_DAT
#define CON2_P11_PUL0               PA_PUL0
#define CON2_P11_PUL1               PA_PUL1

#define CON2_P12_PORT_PIN           PA16_PIN
#define CON2_P12_CFG                PA16_CFG
#define CON2_P12_CFG_OFFSET         PA16_CFG_OFFSET
#define CON2_P12_DAT                PA_DAT
#define CON2_P12_PUL0               PA_PUL0
#define CON2_P12_PUL1               PA_PUL1

#define CON2_P13_PORT_PIN           PA00_PIN
#define CON2_P13_CFG                PA00_CFG
#define CON2_P13_CFG_OFFSET         PA00_CFG_OFFSET
#define CON2_P13_DAT                PA_DAT
#define CON2_P13_PUL0               PA_PUL0
#define CON2_P13_PUL1               PA_PUL1

#define CON2_P15_PORT_PIN           PA03_PIN
#define CON2_P15_CFG                PA03_CFG
#define CON2_P15_CFG_OFFSET         PA03_CFG_OFFSET
#define CON2_P15_DAT                PA_DAT
#define CON2_P15_PUL0               PA_PUL0
#define CON2_P15_PUL1               PA_PUL1

#define CON2_P16_PORT_PIN           PA15_PIN
#define CON2_P16_CFG                PA15_CFG
#define CON2_P16_CFG_OFFSET         PA15_CFG_OFFSET
#define CON2_P16_DAT                PA_DAT
#define CON2_P16_PUL0               PA_PUL0
#define CON2_P16_PUL1               PA_PUL1

#define CON2_P18_PORT_PIN           PC04_PIN
#define CON2_P18_CFG                PC04_CFG
#define CON2_P18_CFG_OFFSET         PC04_CFG_OFFSET
#define CON2_P18_DAT                PC_DAT
#define CON2_P18_PUL0               PC_PUL0
#define CON2_P18_PUL1               PC_PUL1

#define CON2_P19_PORT_PIN           PC00_PIN
#define CON2_P19_CFG                PC00_CFG
#define CON2_P19_CFG_OFFSET         PC00_CFG_OFFSET
#define CON2_P19_DAT                PC_DAT
#define CON2_P19_PUL0               PC_PUL0
#define CON2_P19_PUL1               PC_PUL1

#define CON2_P21_PORT_PIN           PC01_PIN
#define CON2_P21_CFG                PC01_CFG
#define CON2_P21_CFG_OFFSET         PC01_CFG_OFFSET
#define CON2_P21_DAT                PC_DAT
#define CON2_P21_PUL0               PC_PUL0
#define CON2_P21_PUL1               PC_PUL1

#define CON2_P22_PORT_PIN           PA02_PIN
#define CON2_P22_CFG                PA02_CFG
#define CON2_P22_CFG_OFFSET         PA02_CFG_OFFSET
#define CON2_P22_DAT                PA_DAT
#define CON2_P22_PUL0               PA_PUL0
#define CON2_P22_PUL1               PA_PUL1

#define CON2_P23_PORT_PIN           PC02_PIN
#define CON2_P23_CFG                PC02_CFG
#define CON2_P23_CFG_OFFSET         PC02_CFG_OFFSET
#define CON2_P23_DAT                PC_DAT
#define CON2_P23_PUL0               PC_PUL0
#define CON2_P23_PUL1               PC_PUL1

#define CON2_P24_PORT_PIN           PC03_PIN
#define CON2_P24_CFG                PC03_CFG
#define CON2_P24_CFG_OFFSET         PC03_CFG_OFFSET
#define CON2_P24_DAT                PC_DAT
#define CON2_P24_PUL0               PC_PUL0
#define CON2_P24_PUL1               PC_PUL1

#define CON2_P26_PORT_PIN           PC07_PIN
#define CON2_P26_CFG                PC07_CFG
#define CON2_P26_CFG_OFFSET         PC07_CFG_OFFSET
#define CON2_P26_DAT                PC_DAT
#define CON2_P26_PUL0               PC_PUL0
#define CON2_P26_PUL1               PC_PUL1

#define CON2_P27_PORT_PIN           PA19_PIN
#define CON2_P27_CFG                PA19_CFG
#define CON2_P27_CFG_OFFSET         PA19_CFG_OFFSET
#define CON2_P27_DAT                PA_DAT
#define CON2_P27_PUL0               PA_PUL0
#define CON2_P27_PUL1               PA_PUL1

#define CON2_P28_PORT_PIN           PA18_PIN
#define CON2_P28_CFG                PA18_CFG
#define CON2_P28_CFG_OFFSET         PA18_CFG_OFFSET
#define CON2_P28_DAT                PA_DAT
#define CON2_P28_PUL0               PA_PUL0
#define CON2_P28_PUL1               PA_PUL1

#define CON2_P29_PORT_PIN           PA07_PIN
#define CON2_P29_CFG                PA07_CFG
#define CON2_P29_CFG_OFFSET         PA07_CFG_OFFSET
#define CON2_P29_DAT                PA_DAT
#define CON2_P29_PUL0               PA_PUL0
#define CON2_P29_PUL1               PA_PUL1

#define CON2_P31_PORT_PIN           PA08_PIN
#define CON2_P31_CFG                PA08_CFG
#define CON2_P31_CFG_OFFSET         PA08_CFG_OFFSET
#define CON2_P31_DAT                PA_DAT
#define CON2_P31_PUL0               PA_PUL0
#define CON2_P31_PUL1               PA_PUL1

#define CON2_P32_PORT_PIN           PL02_PIN
#define CON2_P32_CFG                PL02_CFG
#define CON2_P32_CFG_OFFSET         PL02_CFG_OFFSET
#define CON2_P32_DAT                PL_DAT
#define CON2_P32_PUL0               PL_PUL0
#define CON2_P32_PUL1               PL_PUL1

#define CON2_P33_PORT_PIN           PA09_PIN
#define CON2_P33_CFG                PA09_CFG
#define CON2_P33_CFG_OFFSET         PA09_CFG_OFFSET
#define CON2_P33_DAT                PA_DAT
#define CON2_P33_PUL0               PA_PUL0
#define CON2_P33_PUL1               PA_PUL1

#define CON2_P35_PORT_PIN           PA10_PIN
#define CON2_P35_CFG                PA10_CFG
#define CON2_P35_CFG_OFFSET         PA10_CFG_OFFSET
#define CON2_P35_DAT                PA_DAT
#define CON2_P35_PUL0               PA_PUL0
#define CON2_P35_PUL1               PA_PUL1

#define CON2_P36_PORT_PIN           PL04_PIN
#define CON2_P36_CFG                PL04_CFG
#define CON2_P36_CFG_OFFSET         PL04_CFG_OFFSET
#define CON2_P36_DAT                PL_DAT
#define CON2_P36_PUL0               PL_PUL0
#define CON2_P36_PUL1               PL_PUL1

#define CON2_P37_PORT_PIN           PA17_PIN
#define CON2_P37_CFG                PA17_CFG
#define CON2_P37_CFG_OFFSET         PA17_CFG_OFFSET
#define CON2_P37_DAT                PA_DAT
#define CON2_P37_PUL0               PA_PUL0
#define CON2_P37_PUL1               PA_PUL1

#define CON2_P38_PORT_PIN           PA21_PIN
#define CON2_P38_CFG                PA21_CFG
#define CON2_P38_CFG_OFFSET         PA21_CFG_OFFSET
#define CON2_P38_DAT                PA_DAT
#define CON2_P38_PUL0               PA_PUL0
#define CON2_P38_PUL1               PA_PUL1

#define CON2_P40_PORT_PIN           PA20_PIN
#define CON2_P40_CFG                PA20_CFG
#define CON2_P40_CFG_OFFSET         PA20_CFG_OFFSET
#define CON2_P40_DAT                PA_DAT
#define CON2_P40_PUL0               PA_PUL0
#define CON2_P40_PUL1               PA_PUL1

#endif // BPI_P2_ZERO_DEFINITIONS_H
