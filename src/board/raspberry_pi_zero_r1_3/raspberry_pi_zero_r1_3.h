/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef RASPBERRY_PI_ZERO_R1_3_H
#define RASPBERRY_PI_ZERO_R1_3_H

#include "../../cpu/broadcom_bcm2835/broadcom_bcm2835.h"

#define BOARD_NAME Raspberry_Pi_Zero_r1_3
#define BOARD_NAME_LOWER raspberry_pi_zero_r1_3
#define BOARD_NAME_UPPER RASPBERRY_PI_ZERO_R1_3


/*
 * Datasheet http://8iter.ru/datasheets/board/Raspberry_Pi_Zero_r1_3_Datasheet.pdf
 * Datasheet page number
 *
 * Description:
 * Pin num (bit offset in data register)
 * Data register offset
 */

// J8_P03
#define J8_P03_GPFSEL_REG       P02_GPFSEL_REG
#define J8_P03_GPFSEL_BIT       P02_GPFSEL_BIT
#define J8_P03_GPSET_REG        P02_GPSET_REG
#define J8_P03_GPSET_BIT        P02_GPSET_BIT
#define J8_P03_GPCLR_REG        P02_GPCLR_REG
#define J8_P03_GPCLR_BIT        P02_GPCLR_BIT
#define J8_P03_GPLEV_REG        P02_GPLEV_REG
#define J8_P03_GPLEV_BIT        P02_GPLEV_BIT

// J8_P05
#define J8_P05_GPFSEL_REG       P03_GPFSEL_REG
#define J8_P05_GPFSEL_BIT       P03_GPFSEL_BIT
#define J8_P05_GPSET_REG        P03_GPSET_REG
#define J8_P05_GPSET_BIT        P03_GPSET_BIT
#define J8_P05_GPCLR_REG        P03_GPCLR_REG
#define J8_P05_GPCLR_BIT        P03_GPCLR_BIT
#define J8_P05_GPLEV_REG        P03_GPLEV_REG
#define J8_P05_GPLEV_BIT        P03_GPLEV_BIT

// J8_P07
#define J8_P07_GPFSEL_REG       P04_GPFSEL_REG
#define J8_P07_GPFSEL_BIT       P04_GPFSEL_BIT
#define J8_P07_GPSET_REG        P04_GPSET_REG
#define J8_P07_GPSET_BIT        P04_GPSET_BIT
#define J8_P07_GPCLR_REG        P04_GPCLR_REG
#define J8_P07_GPCLR_BIT        P04_GPCLR_BIT
#define J8_P07_GPLEV_REG        P04_GPLEV_REG
#define J8_P07_GPLEV_BIT        P04_GPLEV_BIT

// J8_P08
#define J8_P08_GPFSEL_REG       P14_GPFSEL_REG
#define J8_P08_GPFSEL_BIT       P14_GPFSEL_BIT
#define J8_P08_GPSET_REG        P14_GPSET_REG
#define J8_P08_GPSET_BIT        P14_GPSET_BIT
#define J8_P08_GPCLR_REG        P14_GPCLR_REG
#define J8_P08_GPCLR_BIT        P14_GPCLR_BIT
#define J8_P08_GPLEV_REG        P14_GPLEV_REG
#define J8_P08_GPLEV_BIT        P14_GPLEV_BIT

// J8_P10
#define J8_P10_GPFSEL_REG       P15_GPFSEL_REG
#define J8_P10_GPFSEL_BIT       P15_GPFSEL_BIT
#define J8_P10_GPSET_REG        P15_GPSET_REG
#define J8_P10_GPSET_BIT        P15_GPSET_BIT
#define J8_P10_GPCLR_REG        P15_GPCLR_REG
#define J8_P10_GPCLR_BIT        P15_GPCLR_BIT
#define J8_P10_GPLEV_REG        P15_GPLEV_REG
#define J8_P10_GPLEV_BIT        P15_GPLEV_BIT

// J8_P11
#define J8_P11_GPFSEL_REG       P17_GPFSEL_REG
#define J8_P11_GPFSEL_BIT       P17_GPFSEL_BIT
#define J8_P11_GPSET_REG        P17_GPSET_REG
#define J8_P11_GPSET_BIT        P17_GPSET_BIT
#define J8_P11_GPCLR_REG        P17_GPCLR_REG
#define J8_P11_GPCLR_BIT        P17_GPCLR_BIT
#define J8_P11_GPLEV_REG        P17_GPLEV_REG
#define J8_P11_GPLEV_BIT        P17_GPLEV_BIT

// J8_P12
#define J8_P12_GPFSEL_REG       P18_GPFSEL_REG
#define J8_P12_GPFSEL_BIT       P18_GPFSEL_BIT
#define J8_P12_GPSET_REG        P18_GPSET_REG
#define J8_P12_GPSET_BIT        P18_GPSET_BIT
#define J8_P12_GPCLR_REG        P18_GPCLR_REG
#define J8_P12_GPCLR_BIT        P18_GPCLR_BIT
#define J8_P12_GPLEV_REG        P18_GPLEV_REG
#define J8_P12_GPLEV_BIT        P18_GPLEV_BIT

// J8_P13
#define J8_P13_GPFSEL_REG       P27_GPFSEL_REG
#define J8_P13_GPFSEL_BIT       P27_GPFSEL_BIT
#define J8_P13_GPSET_REG        P27_GPSET_REG
#define J8_P13_GPSET_BIT        P27_GPSET_BIT
#define J8_P13_GPCLR_REG        P27_GPCLR_REG
#define J8_P13_GPCLR_BIT        P27_GPCLR_BIT
#define J8_P13_GPLEV_REG        P27_GPLEV_REG
#define J8_P13_GPLEV_BIT        P27_GPLEV_BIT

// J8_P15
#define J8_P15_GPFSEL_REG       P22_GPFSEL_REG
#define J8_P15_GPFSEL_BIT       P22_GPFSEL_BIT
#define J8_P15_GPSET_REG        P22_GPSET_REG
#define J8_P15_GPSET_BIT        P22_GPSET_BIT
#define J8_P15_GPCLR_REG        P22_GPCLR_REG
#define J8_P15_GPCLR_BIT        P22_GPCLR_BIT
#define J8_P15_GPLEV_REG        P22_GPLEV_REG
#define J8_P15_GPLEV_BIT        P22_GPLEV_BIT

// J8_P16
#define J8_P16_GPFSEL_REG       P23_GPFSEL_REG
#define J8_P16_GPFSEL_BIT       P23_GPFSEL_BIT
#define J8_P16_GPSET_REG        P23_GPSET_REG
#define J8_P16_GPSET_BIT        P23_GPSET_BIT
#define J8_P16_GPCLR_REG        P23_GPCLR_REG
#define J8_P16_GPCLR_BIT        P23_GPCLR_BIT
#define J8_P16_GPLEV_REG        P23_GPLEV_REG
#define J8_P16_GPLEV_BIT        P23_GPLEV_BIT

// J8_P18
#define J8_P18_GPFSEL_REG       P24_GPFSEL_REG
#define J8_P18_GPFSEL_BIT       P24_GPFSEL_BIT
#define J8_P18_GPSET_REG        P24_GPSET_REG
#define J8_P18_GPSET_BIT        P24_GPSET_BIT
#define J8_P18_GPCLR_REG        P24_GPCLR_REG
#define J8_P18_GPCLR_BIT        P24_GPCLR_BIT
#define J8_P18_GPLEV_REG        P24_GPLEV_REG
#define J8_P18_GPLEV_BIT        P24_GPLEV_BIT

// J8_P19
#define J8_P19_GPFSEL_REG       P10_GPFSEL_REG
#define J8_P19_GPFSEL_BIT       P10_GPFSEL_BIT
#define J8_P19_GPSET_REG        P10_GPSET_REG
#define J8_P19_GPSET_BIT        P10_GPSET_BIT
#define J8_P19_GPCLR_REG        P10_GPCLR_REG
#define J8_P19_GPCLR_BIT        P10_GPCLR_BIT
#define J8_P19_GPLEV_REG        P10_GPLEV_REG
#define J8_P19_GPLEV_BIT        P10_GPLEV_BIT

// J8_P21
#define J8_P21_GPFSEL_REG       P09_GPFSEL_REG
#define J8_P21_GPFSEL_BIT       P09_GPFSEL_BIT
#define J8_P21_GPSET_REG        P09_GPSET_REG
#define J8_P21_GPSET_BIT        P09_GPSET_BIT
#define J8_P21_GPCLR_REG        P09_GPCLR_REG
#define J8_P21_GPCLR_BIT        P09_GPCLR_BIT
#define J8_P21_GPLEV_REG        P09_GPLEV_REG
#define J8_P21_GPLEV_BIT        P09_GPLEV_BIT

// J8_P22
#define J8_P22_GPFSEL_REG       P25_GPFSEL_REG
#define J8_P22_GPFSEL_BIT       P25_GPFSEL_BIT
#define J8_P22_GPSET_REG        P25_GPSET_REG
#define J8_P22_GPSET_BIT        P25_GPSET_BIT
#define J8_P22_GPCLR_REG        P25_GPCLR_REG
#define J8_P22_GPCLR_BIT        P25_GPCLR_BIT
#define J8_P22_GPLEV_REG        P25_GPLEV_REG
#define J8_P22_GPLEV_BIT        P25_GPLEV_BIT

// J8_P23
#define J8_P23_GPFSEL_REG       P11_GPFSEL_REG
#define J8_P23_GPFSEL_BIT       P11_GPFSEL_BIT
#define J8_P23_GPSET_REG        P11_GPSET_REG
#define J8_P23_GPSET_BIT        P11_GPSET_BIT
#define J8_P23_GPCLR_REG        P11_GPCLR_REG
#define J8_P23_GPCLR_BIT        P11_GPCLR_BIT
#define J8_P23_GPLEV_REG        P11_GPLEV_REG
#define J8_P23_GPLEV_BIT        P11_GPLEV_BIT

// J8_P24
#define J8_P24_GPFSEL_REG       P08_GPFSEL_REG
#define J8_P24_GPFSEL_BIT       P08_GPFSEL_BIT
#define J8_P24_GPSET_REG        P08_GPSET_REG
#define J8_P24_GPSET_BIT        P08_GPSET_BIT
#define J8_P24_GPCLR_REG        P08_GPCLR_REG
#define J8_P24_GPCLR_BIT        P08_GPCLR_BIT
#define J8_P24_GPLEV_REG        P08_GPLEV_REG
#define J8_P24_GPLEV_BIT        P08_GPLEV_BIT

// J8_P26
#define J8_P26_GPFSEL_REG       P07_GPFSEL_REG
#define J8_P26_GPFSEL_BIT       P07_GPFSEL_BIT
#define J8_P26_GPSET_REG        P07_GPSET_REG
#define J8_P26_GPSET_BIT        P07_GPSET_BIT
#define J8_P26_GPCLR_REG        P07_GPCLR_REG
#define J8_P26_GPCLR_BIT        P07_GPCLR_BIT
#define J8_P26_GPLEV_REG        P07_GPLEV_REG
#define J8_P26_GPLEV_BIT        P07_GPLEV_BIT

// J8_P29
#define J8_P29_GPFSEL_REG       P05_GPFSEL_REG
#define J8_P29_GPFSEL_BIT       P05_GPFSEL_BIT
#define J8_P29_GPSET_REG        P05_GPSET_REG
#define J8_P29_GPSET_BIT        P05_GPSET_BIT
#define J8_P29_GPCLR_REG        P05_GPCLR_REG
#define J8_P29_GPCLR_BIT        P05_GPCLR_BIT
#define J8_P29_GPLEV_REG        P05_GPLEV_REG
#define J8_P29_GPLEV_BIT        P05_GPLEV_BIT

// J8_P31
#define J8_P31_GPFSEL_REG       P06_GPFSEL_REG
#define J8_P31_GPFSEL_BIT       P06_GPFSEL_BIT
#define J8_P31_GPSET_REG        P06_GPSET_REG
#define J8_P31_GPSET_BIT        P06_GPSET_BIT
#define J8_P31_GPCLR_REG        P06_GPCLR_REG
#define J8_P31_GPCLR_BIT        P06_GPCLR_BIT
#define J8_P31_GPLEV_REG        P06_GPLEV_REG
#define J8_P31_GPLEV_BIT        P06_GPLEV_BIT

// J8_P32
#define J8_P32_GPFSEL_REG       P12_GPFSEL_REG
#define J8_P32_GPFSEL_BIT       P12_GPFSEL_BIT
#define J8_P32_GPSET_REG        P12_GPSET_REG
#define J8_P32_GPSET_BIT        P12_GPSET_BIT
#define J8_P32_GPCLR_REG        P12_GPCLR_REG
#define J8_P32_GPCLR_BIT        P12_GPCLR_BIT
#define J8_P32_GPLEV_REG        P12_GPLEV_REG
#define J8_P32_GPLEV_BIT        P12_GPLEV_BIT

// J8_P33
#define J8_P33_GPFSEL_REG       P13_GPFSEL_REG
#define J8_P33_GPFSEL_BIT       P13_GPFSEL_BIT
#define J8_P33_GPSET_REG        P13_GPSET_REG
#define J8_P33_GPSET_BIT        P13_GPSET_BIT
#define J8_P33_GPCLR_REG        P13_GPCLR_REG
#define J8_P33_GPCLR_BIT        P13_GPCLR_BIT
#define J8_P33_GPLEV_REG        P13_GPLEV_REG
#define J8_P33_GPLEV_BIT        P13_GPLEV_BIT

// J8_P35
#define J8_P35_GPFSEL_REG       P19_GPFSEL_REG
#define J8_P35_GPFSEL_BIT       P19_GPFSEL_BIT
#define J8_P35_GPSET_REG        P19_GPSET_REG
#define J8_P35_GPSET_BIT        P19_GPSET_BIT
#define J8_P35_GPCLR_REG        P19_GPCLR_REG
#define J8_P35_GPCLR_BIT        P19_GPCLR_BIT
#define J8_P35_GPLEV_REG        P19_GPLEV_REG
#define J8_P35_GPLEV_BIT        P19_GPLEV_BIT

// J8_P36
#define J8_P36_GPFSEL_REG       P16_GPFSEL_REG
#define J8_P36_GPFSEL_BIT       P16_GPFSEL_BIT
#define J8_P36_GPSET_REG        P16_GPSET_REG
#define J8_P36_GPSET_BIT        P16_GPSET_BIT
#define J8_P36_GPCLR_REG        P16_GPCLR_REG
#define J8_P36_GPCLR_BIT        P16_GPCLR_BIT
#define J8_P36_GPLEV_REG        P16_GPLEV_REG
#define J8_P36_GPLEV_BIT        P16_GPLEV_BIT

// J8_P37
#define J8_P37_GPFSEL_REG       P38_GPFSEL_REG
#define J8_P37_GPFSEL_BIT       P38_GPFSEL_BIT
#define J8_P37_GPSET_REG        P38_GPSET_REG
#define J8_P37_GPSET_BIT        P38_GPSET_BIT
#define J8_P37_GPCLR_REG        P38_GPCLR_REG
#define J8_P37_GPCLR_BIT        P38_GPCLR_BIT
#define J8_P37_GPLEV_REG        P38_GPLEV_REG
#define J8_P37_GPLEV_BIT        P38_GPLEV_BIT

// J8_P38
#define J8_P38_GPFSEL_REG       P20_GPFSEL_REG
#define J8_P38_GPFSEL_BIT       P20_GPFSEL_BIT
#define J8_P38_GPSET_REG        P20_GPSET_REG
#define J8_P38_GPSET_BIT        P20_GPSET_BIT
#define J8_P38_GPCLR_REG        P20_GPCLR_REG
#define J8_P38_GPCLR_BIT        P20_GPCLR_BIT
#define J8_P38_GPLEV_REG        P20_GPLEV_REG
#define J8_P38_GPLEV_BIT        P20_GPLEV_BIT

// J8_P40
#define J8_P40_GPFSEL_REG       P21_GPFSEL_REG
#define J8_P40_GPFSEL_BIT       P21_GPFSEL_BIT
#define J8_P40_GPSET_REG        P21_GPSET_REG
#define J8_P40_GPSET_BIT        P21_GPSET_BIT
#define J8_P40_GPCLR_REG        P21_GPCLR_REG
#define J8_P40_GPCLR_BIT        P21_GPCLR_BIT
#define J8_P40_GPLEV_REG        P21_GPLEV_REG
#define J8_P40_GPLEV_BIT        P21_GPLEV_BIT

#endif // RASPBERRY_PI_ZERO_R1_3_H