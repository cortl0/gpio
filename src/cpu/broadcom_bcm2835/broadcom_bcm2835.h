/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef BROADCOM_BCM2835_H
#define BROADCOM_BCM2835_H


#define CPU_NAME "Broadcom_BCM2835"
#define CPU_NAME_LOWER "broadcom_bcm2835"
#define CPU_NAME_UPPER "BROADCOM_BCM2835"


/*
 * Datasheet: http://8iter.ru/datasheets/cpu/Broadcom_BCM2835_Datasheet.pdf
 * Datasheet page 90
 * Base address offset
 */
#define BASE_ADDRESS_GPIO (0x7E200000)


/*
 * Register Name            Offset     Description
 */
#define GPFSEL0             0x00    // GPIO Function Select 0 32 R/W
#define GPFSEL1             0x04    // GPIO Function Select 1 32 R/W
#define GPFSEL2             0x08    // GPIO Function Select 2 32 R/W
#define GPFSEL3             0x0C    // GPIO Function Select 3 32 R/W
#define GPFSEL4             0x10    // GPIO Function Select 4 32 R/W
#define GPFSEL5             0x14    // GPIO Function Select 5 32 R/W

#define GPSET0              0x1C    // GPIO Pin Output Set 0 32 W
#define GPSET1              0x20    // GPIO Pin Output Set 1 32 W
#define GPCLR0              0x28    // GPIO Pin Output Clear 0 32 W
#define GPCLR1              0x2C    // GPIO Pin Output Clear 1 32 W

#define GPLEV0              0x34    // GPIO Pin Level 0 32 R
#define GPLEV1              0x38    // GPIO Pin Level 1 32 R

#define GPEDS0              0x40    // GPIO Pin Event Detect Status 0 32 R/W
#define GPEDS1              0x44    // GPIO Pin Event Detect Status 1 32 R/W

#define GPREN0              0x4C    // GPIO Pin Rising Edge Detect Enable 0 32 R/W
#define GPREN1              0x50    // GPIO Pin Rising Edge Detect Enable 1 32 R/W

#define GPFEN0              0x58    // GPIO Pin Falling Edge Detect Enable 0 32 R/W
#define GPFEN1              0x5C    // GPIO Pin Falling Edge Detect Enable 1 32 R/W

#define GPHEN0              0x64    // GPIO Pin High Detect Enable 0 32 R/W
#define GPHEN1              0x68    // GPIO Pin High Detect Enable 1 32 R/W

#define GPLEN0              0x70    // GPIO Pin Low Detect Enable 0 32 R/W
#define GPLEN1              0x74    // GPIO Pin Low Detect Enable 1 32 R/W

#define GPAREN0             0x7C    // GPIO Pin Async. Rising Edge Detect 0 32 R/W
#define GPAREN1             0x80    // GPIO Pin Async. Rising Edge Detect 1 32 R/W

#define GPAFEN0             0x88    // GPIO Pin Async. Falling Edge Detect 0 32 R/W
#define GPAFEN1             0x8C    // GPIO Pin Async. Falling Edge Detect 1 32 R/W

#define GPPUD               0x94    // GPIO Pin Pull-up/down Enable 32 R/W
#define GPPUDCLK0           0x98    // GPIO Pin Pull-up/down Enable Clock 0 32 R/W
#define GPPUDCLK1           0x9C    // GPIO Pin Pull-up/down Enable Clock 1 32 R/W


/*
 * Description
 * Pin GPFSEL register
 * Pin offset in GPFSEL register by datasheet
 * Pin offset in GPFSEL register by style
 * Pin GPSET register
 * Pin offset in GPSET register by datasheet
 * Pin offset in GPSET register by style
 * Pin GPCLR register
 * Pin offset in GPCLR register by datasheet
 * Pin offset in GPCLR register by style
 * Pin GPLEV register
 * Pin offset in GPLEV register by datasheet
 * Pin offset in GPLEV register by style
 *
 * Pin name, parameter      Offset
 */

// Pin 00
#define P00_GPFSEL_REG          GPFSEL0
#define FSEL00                  0
#define P00_GPFSEL_BIT          FSEL00
#define P00_GPSET_REG           GPSET0
#define SET00                   0
#define P00_GPSET_BIT           SET00
#define P00_GPCLR_REG           GPCLR0
#define CLR00                   0
#define P00_GPCLR_BIT           CLR00
#define P00_GPLEV_REG           GPLEV0
#define LEV00                   0
#define P00_GPLEV_BIT           LEV00

// Pin 01
#define P01_GPFSEL_REG          GPFSEL0
#define FSEL01                  3
#define P01_GPFSEL_BIT          FSEL01
#define P01_GPSET_REG           GPSET0
#define SET01                   1
#define P01_GPSET_BIT           SET01
#define P01_GPCLR_REG           GPCLR0
#define CLR01                   1
#define P01_GPCLR_BIT           CLR01
#define P01_GPLEV_REG           GPLEV0
#define LEV01                   1
#define P01_GPLEV_BIT           LEV01

// Pin 02
#define P02_GPFSEL_REG          GPFSEL0
#define FSEL02                  6
#define P02_GPFSEL_BIT          FSEL02
#define P02_GPSET_REG           GPSET0
#define SET02                   2
#define P02_GPSET_BIT           SET02
#define P02_GPCLR_REG           GPCLR0
#define CLR02                   2
#define P02_GPCLR_BIT           CLR02
#define P02_GPLEV_REG           GPLEV0
#define LEV02                   2
#define P02_GPLEV_BIT           LEV02

// Pin 03
#define P03_GPFSEL_REG          GPFSEL0
#define FSEL03                  9
#define P03_GPFSEL_BIT          FSEL03
#define P03_GPSET_REG           GPSET0
#define SET03                   3
#define P03_GPSET_BIT           SET03
#define P03_GPCLR_REG           GPCLR0
#define CLR03                   3
#define P03_GPCLR_BIT           CLR03
#define P03_GPLEV_REG           GPLEV0
#define LEV03                   3
#define P03_GPLEV_BIT           LEV03

// Pin 04
#define P04_GPFSEL_REG          GPFSEL0
#define FSEL04                  12
#define P04_GPFSEL_BIT          FSEL04
#define P04_GPSET_REG           GPSET0
#define SET04                   4
#define P04_GPSET_BIT           SET04
#define P04_GPCLR_REG           GPCLR0
#define CLR04                   4
#define P04_GPCLR_BIT           CLR04
#define P04_GPLEV_REG           GPLEV0
#define LEV04                   4
#define P04_GPLEV_BIT           LEV04

// Pin 05
#define P05_GPFSEL_REG          GPFSEL0
#define FSEL05                  15
#define P05_GPFSEL_BIT          FSEL05
#define P05_GPSET_REG           GPSET0
#define SET05                   5
#define P05_GPSET_BIT           SET05
#define P05_GPCLR_REG           GPCLR0
#define CLR05                   5
#define P05_GPCLR_BIT           CLR05
#define P05_GPLEV_REG           GPLEV0
#define LEV05                   5
#define P05_GPLEV_BIT           LEV05

// Pin 06
#define P06_GPFSEL_REG          GPFSEL0
#define FSEL06                  18
#define P06_GPFSEL_BIT          FSEL06
#define P06_GPSET_REG           GPSET0
#define SET06                   6
#define P06_GPSET_BIT           SET06
#define P06_GPCLR_REG           GPCLR0
#define CLR06                   6
#define P06_GPCLR_BIT           CLR06
#define P06_GPLEV_REG           GPLEV0
#define LEV06                   6
#define P06_GPLEV_BIT           LEV06

// Pin 07
#define P07_GPFSEL_REG          GPFSEL0
#define FSEL07                  21
#define P07_GPFSEL_BIT          FSEL07
#define P07_GPSET_REG           GPSET0
#define SET07                   7
#define P07_GPSET_BIT           SET07
#define P07_GPCLR_REG           GPCLR0
#define CLR07                   7
#define P07_GPCLR_BIT           CLR07
#define P07_GPLEV_REG           GPLEV0
#define LEV07                   7
#define P07_GPLEV_BIT           LEV07

// Pin 08
#define P08_GPFSEL_REG          GPFSEL0
#define FSEL08                  24
#define P08_GPFSEL_BIT          FSEL08
#define P08_GPSET_REG           GPSET0
#define SET08                   8
#define P08_GPSET_BIT           SET08
#define P08_GPCLR_REG           GPCLR0
#define CLR08                   8
#define P08_GPCLR_BIT           CLR08
#define P08_GPLEV_REG           GPLEV0
#define LEV08                   8
#define P08_GPLEV_BIT           LEV08

// Pin 09
#define P09_GPFSEL_REG          GPFSEL0
#define FSEL09                  27
#define P09_GPFSEL_BIT          FSEL09
#define P09_GPSET_REG           GPSET0
#define SET09                   9
#define P09_GPSET_BIT           SET09
#define P09_GPCLR_REG           GPCLR0
#define CLR09                   9
#define P09_GPCLR_BIT           CLR09
#define P09_GPLEV_REG           GPLEV0
#define LEV09                   9
#define P09_GPLEV_BIT           LEV09

// Pin 10
#define P10_GPFSEL_REG          GPFSEL1
#define FSEL10                  0
#define P10_GPFSEL_BIT          FSEL10
#define P10_GPSET_REG           GPSET0
#define SET10                   10
#define P10_GPSET_BIT           SET10
#define P10_GPCLR_REG           GPCLR0
#define CLR10                   10
#define P10_GPCLR_BIT           CLR10
#define P10_GPLEV_REG           GPLEV0
#define LEV10                   10
#define P10_GPLEV_BIT           LEV10

// Pin 11
#define P11_GPFSEL_REG          GPFSEL1
#define FSEL11                  3
#define P11_GPFSEL_BIT          FSEL11
#define P11_GPSET_REG           GPSET0
#define SET11                   11
#define P11_GPSET_BIT           SET11
#define P11_GPCLR_REG           GPCLR0
#define CLR11                   11
#define P11_GPCLR_BIT           CLR11
#define P11_GPLEV_REG           GPLEV0
#define LEV11                   11
#define P11_GPLEV_BIT           LEV11

// Pin 12
#define P12_GPFSEL_REG          GPFSEL1
#define FSEL12                  6
#define P12_GPFSEL_BIT          FSEL12
#define P12_GPSET_REG           GPSET0
#define SET12                   12
#define P12_GPSET_BIT           SET12
#define P12_GPCLR_REG           GPCLR0
#define CLR12                   12
#define P12_GPCLR_BIT           CLR12
#define P12_GPLEV_REG           GPLEV0
#define LEV12                   12
#define P12_GPLEV_BIT           LEV12

// Pin 13
#define P13_GPFSEL_REG          GPFSEL1
#define FSEL13                  9
#define P13_GPFSEL_BIT          FSEL13
#define P13_GPSET_REG           GPSET0
#define SET13                   13
#define P13_GPSET_BIT           SET13
#define P13_GPCLR_REG           GPCLR0
#define CLR13                   13
#define P13_GPCLR_BIT           CLR13
#define P13_GPLEV_REG           GPLEV0
#define LEV13                   13
#define P13_GPLEV_BIT           LEV13

// Pin 14
#define P14_GPFSEL_REG          GPFSEL1
#define FSEL14                  12
#define P14_GPFSEL_BIT          FSEL14
#define P14_GPSET_REG           GPSET0
#define SET14                   14
#define P14_GPSET_BIT           SET14
#define P14_GPCLR_REG           GPCLR0
#define CLR14                   14
#define P14_GPCLR_BIT           CLR14
#define P14_GPLEV_REG           GPLEV0
#define LEV14                   14
#define P14_GPLEV_BIT           LEV14

// Pin 15
#define P15_GPFSEL_REG          GPFSEL1
#define FSEL15                  15
#define P15_GPFSEL_BIT          FSEL15
#define P15_GPSET_REG           GPSET0
#define SET15                   15
#define P15_GPSET_BIT           SET15
#define P15_GPCLR_REG           GPCLR0
#define CLR15                   15
#define P15_GPCLR_BIT           CLR15
#define P15_GPLEV_REG           GPLEV0
#define LEV15                   15
#define P15_GPLEV_BIT           LEV15

// Pin 16
#define P16_GPFSEL_REG          GPFSEL1
#define FSEL16                  18
#define P16_GPFSEL_BIT          FSEL16
#define P16_GPSET_REG           GPSET0
#define SET16                   16
#define P16_GPSET_BIT           SET16
#define P16_GPCLR_REG           GPCLR0
#define CLR16                   16
#define P16_GPCLR_BIT           CLR16
#define P16_GPLEV_REG           GPLEV0
#define LEV16                   16
#define P16_GPLEV_BIT           LEV16

// Pin 17
#define P17_GPFSEL_REG          GPFSEL1
#define FSEL17                  21
#define P17_GPFSEL_BIT          FSEL17
#define P17_GPSET_REG           GPSET0
#define SET17                   17
#define P17_GPSET_BIT           SET17
#define P17_GPCLR_REG           GPCLR0
#define CLR17                   17
#define P17_GPCLR_BIT           CLR17
#define P17_GPLEV_REG           GPLEV0
#define LEV17                   17
#define P17_GPLEV_BIT           LEV17

// Pin 18
#define P18_GPFSEL_REG          GPFSEL1
#define FSEL18                  24
#define P18_GPFSEL_BIT          FSEL18
#define P18_GPSET_REG           GPSET0
#define SET18                   18
#define P18_GPSET_BIT           SET18
#define P18_GPCLR_REG           GPCLR0
#define CLR18                   18
#define P18_GPCLR_BIT           CLR18
#define P18_GPLEV_REG           GPLEV0
#define LEV18                   18
#define P18_GPLEV_BIT           LEV18

// Pin 19
#define P19_GPFSEL_REG          GPFSEL1
#define FSEL19                  27
#define P19_GPFSEL_BIT          FSEL19
#define P19_GPSET_REG           GPSET0
#define SET19                   19
#define P19_GPSET_BIT           SET19
#define P19_GPCLR_REG           GPCLR0
#define CLR19                   19
#define P19_GPCLR_BIT           CLR19
#define P19_GPLEV_REG           GPLEV0
#define LEV19                   19
#define P19_GPLEV_BIT           LEV19

// Pin 20
#define P20_GPFSEL_REG          GPFSEL2
#define FSEL20                  0
#define P20_GPFSEL_BIT          FSEL20
#define P20_GPSET_REG           GPSET0
#define SET20                   20
#define P20_GPSET_BIT           SET20
#define P20_GPCLR_REG           GPCLR0
#define CLR20                   20
#define P20_GPCLR_BIT           CLR20
#define P20_GPLEV_REG           GPLEV0
#define LEV20                   20
#define P20_GPLEV_BIT           LEV20

// Pin 21
#define P21_GPFSEL_REG          GPFSEL2
#define FSEL21                  3
#define P21_GPFSEL_BIT          FSEL21
#define P21_GPSET_REG           GPSET0
#define SET21                   21
#define P21_GPSET_BIT           SET21
#define P21_GPCLR_REG           GPCLR0
#define CLR21                   21
#define P21_GPCLR_BIT           CLR21
#define P21_GPLEV_REG           GPLEV0
#define LEV21                   21
#define P21_GPLEV_BIT           LEV21

// Pin 22
#define P22_GPFSEL_REG          GPFSEL2
#define FSEL22                  6
#define P22_GPFSEL_BIT          FSEL22
#define P22_GPSET_REG           GPSET0
#define SET22                   22
#define P22_GPSET_BIT           SET22
#define P22_GPCLR_REG           GPCLR0
#define CLR22                   22
#define P22_GPCLR_BIT           CLR22
#define P22_GPLEV_REG           GPLEV0
#define LEV22                   22
#define P22_GPLEV_BIT           LEV22

// Pin 23
#define P23_GPFSEL_REG          GPFSEL2
#define FSEL23                  9
#define P23_GPFSEL_BIT          FSEL23
#define P23_GPSET_REG           GPSET0
#define SET23                   23
#define P23_GPSET_BIT           SET23
#define P23_GPCLR_REG           GPCLR0
#define CLR23                   23
#define P23_GPCLR_BIT           CLR23
#define P23_GPLEV_REG           GPLEV0
#define LEV23                   23
#define P23_GPLEV_BIT           LEV23

// Pin 24
#define P24_GPFSEL_REG          GPFSEL2
#define FSEL24                  12
#define P24_GPFSEL_BIT          FSEL24
#define P24_GPSET_REG           GPSET0
#define SET24                   24
#define P24_GPSET_BIT           SET24
#define P24_GPCLR_REG           GPCLR0
#define CLR24                   24
#define P24_GPCLR_BIT           CLR24
#define P24_GPLEV_REG           GPLEV0
#define LEV24                   24
#define P24_GPLEV_BIT           LEV24

// Pin 25
#define P25_GPFSEL_REG          GPFSEL2
#define FSEL25                  15
#define P25_GPFSEL_BIT          FSEL25
#define P25_GPSET_REG           GPSET0
#define SET25                   25
#define P25_GPSET_BIT           SET25
#define P25_GPCLR_REG           GPCLR0
#define CLR25                   25
#define P25_GPCLR_BIT           CLR25
#define P25_GPLEV_REG           GPLEV0
#define LEV25                   25
#define P25_GPLEV_BIT           LEV25

// Pin 26
#define P26_GPFSEL_REG          GPFSEL2
#define FSEL26                  18
#define P26_GPFSEL_BIT          FSEL26
#define P26_GPSET_REG           GPSET0
#define SET26                   26
#define P26_GPSET_BIT           SET26
#define P26_GPCLR_REG           GPCLR0
#define CLR26                   26
#define P26_GPCLR_BIT           CLR26
#define P26_GPLEV_REG           GPLEV0
#define LEV26                   26
#define P26_GPLEV_BIT           LEV26

// Pin 27
#define P27_GPFSEL_REG          GPFSEL2
#define FSEL27                  21
#define P27_GPFSEL_BIT          FSEL27
#define P27_GPSET_REG           GPSET0
#define SET27                   27
#define P27_GPSET_BIT           SET27
#define P27_GPCLR_REG           GPCLR0
#define CLR27                   27
#define P27_GPCLR_BIT           CLR27
#define P27_GPLEV_REG           GPLEV0
#define LEV27                   27
#define P27_GPLEV_BIT           LEV27

// Pin 28
#define P28_GPFSEL_REG          GPFSEL2
#define FSEL28                  24
#define P28_GPFSEL_BIT          FSEL28
#define P28_GPSET_REG           GPSET0
#define SET28                   28
#define P28_GPSET_BIT           SET28
#define P28_GPCLR_REG           GPCLR0
#define CLR28                   28
#define P28_GPCLR_BIT           CLR28
#define P28_GPLEV_REG           GPLEV0
#define LEV28                   28
#define P28_GPLEV_BIT           LEV28

// Pin 29
#define P29_GPFSEL_REG          GPFSEL2
#define FSEL29                  27
#define P29_GPFSEL_BIT          FSEL29
#define P29_GPSET_REG           GPSET0
#define SET29                   29
#define P29_GPSET_BIT           SET29
#define P29_GPCLR_REG           GPCLR0
#define CLR29                   29
#define P29_GPCLR_BIT           CLR29
#define P29_GPLEV_REG           GPLEV0
#define LEV29                   29
#define P29_GPLEV_BIT           LEV29

// Pin 30
#define P30_GPFSEL_REG          GPFSEL3
#define FSEL30                  0
#define P30_GPFSEL_BIT          FSEL30
#define P30_GPSET_REG           GPSET0
#define SET30                   30
#define P30_GPSET_BIT           SET30
#define P30_GPCLR_REG           GPCLR0
#define CLR30                   30
#define P30_GPCLR_BIT           CLR30
#define P30_GPLEV_REG           GPLEV0
#define LEV30                   30
#define P30_GPLEV_BIT           LEV30

// Pin 31
#define P31_GPFSEL_REG          GPFSEL3
#define FSEL31                  3
#define P31_GPFSEL_BIT          FSEL31
#define P31_GPSET_REG           GPSET0
#define SET31                   31
#define P31_GPSET_BIT           SET31
#define P31_GPCLR_REG           GPCLR0
#define CLR31                   31
#define P31_GPCLR_BIT           CLR31
#define P31_GPLEV_REG           GPLEV0
#define LEV31                   31
#define P31_GPLEV_BIT           LEV31

// Pin 32
#define P32_GPFSEL_REG          GPFSEL3
#define FSEL32                  6
#define P32_GPFSEL_BIT          FSEL32
#define P32_GPSET_REG           GPSET1
#define SET32                   0
#define P32_GPSET_BIT           SET32
#define P32_GPCLR_REG           GPCLR1
#define CLR32                   0
#define P32_GPCLR_BIT           CLR32
#define P32_GPLEV_REG           GPLEV1
#define LEV32                   0
#define P32_GPLEV_BIT           LEV32

// Pin 33
#define P33_GPFSEL_REG          GPFSEL3
#define FSEL33                  9
#define P33_GPFSEL_BIT          FSEL33
#define P33_GPSET_REG           GPSET1
#define SET33                   1
#define P33_GPSET_BIT           SET33
#define P33_GPCLR_REG           GPCLR1
#define CLR33                   1
#define P33_GPCLR_BIT           CLR33
#define P33_GPLEV_REG           GPLEV1
#define LEV33                   1
#define P33_GPLEV_BIT           LEV33

// Pin 34
#define P34_GPFSEL_REG          GPFSEL3
#define FSEL34                  12
#define P34_GPFSEL_BIT          FSEL34
#define P34_GPSET_REG           GPSET1
#define SET34                   2
#define P34_GPSET_BIT           SET34
#define P34_GPCLR_REG           GPCLR1
#define CLR34                   2
#define P34_GPCLR_BIT           CLR34
#define P34_GPLEV_REG           GPLEV1
#define LEV34                   2
#define P34_GPLEV_BIT           LEV34

// Pin 35
#define P35_GPFSEL_REG          GPFSEL3
#define FSEL35                  15
#define P35_GPFSEL_BIT          FSEL35
#define P35_GPSET_REG           GPSET1
#define SET35                   3
#define P35_GPSET_BIT           SET35
#define P35_GPCLR_REG           GPCLR1
#define CLR35                   3
#define P35_GPCLR_BIT           CLR35
#define P35_GPLEV_REG           GPLEV1
#define LEV35                   3
#define P35_GPLEV_BIT           LEV35

// Pin 36
#define P36_GPFSEL_REG          GPFSEL3
#define FSEL36                  18
#define P36_GPFSEL_BIT          FSEL36
#define P36_GPSET_REG           GPSET1
#define SET36                   4
#define P36_GPSET_BIT           SET36
#define P36_GPCLR_REG           GPCLR1
#define CLR36                   4
#define P36_GPCLR_BIT           CLR36
#define P36_GPLEV_REG           GPLEV1
#define LEV36                   4
#define P36_GPLEV_BIT           LEV36

// Pin 37
#define P37_GPFSEL_REG          GPFSEL3
#define FSEL37                  21
#define P37_GPFSEL_BIT          FSEL37
#define P37_GPSET_REG           GPSET1
#define SET37                   5
#define P37_GPSET_BIT           SET37
#define P37_GPCLR_REG           GPCLR1
#define CLR37                   5
#define P37_GPCLR_BIT           CLR37
#define P37_GPLEV_REG           GPLEV1
#define LEV37                   5
#define P37_GPLEV_BIT           LEV37

// Pin 38
#define P38_GPFSEL_REG          GPFSEL3
#define FSEL38                  24
#define P38_GPFSEL_BIT          FSEL38
#define P38_GPSET_REG           GPSET1
#define SET38                   6
#define P38_GPSET_BIT           SET38
#define P38_GPCLR_REG           GPCLR1
#define CLR38                   6
#define P38_GPCLR_BIT           CLR38
#define P38_GPLEV_REG           GPLEV1
#define LEV38                   6
#define P38_GPLEV_BIT           LEV38

// Pin 39
#define P39_GPFSEL_REG          GPFSEL3
#define FSEL39                  27
#define P39_GPFSEL_BIT          FSEL39
#define P39_GPSET_REG           GPSET1
#define SET39                   7
#define P39_GPSET_BIT           SET39
#define P39_GPCLR_REG           GPCLR1
#define CLR39                   7
#define P39_GPCLR_BIT           CLR39
#define P39_GPLEV_REG           GPLEV1
#define LEV39                   7
#define P39_GPLEV_BIT           LEV39

// Pin 40
#define P40_GPFSEL_REG          GPFSEL4
#define FSEL40                  0
#define P40_GPFSEL_BIT          FSEL40
#define P40_GPSET_REG           GPSET1
#define SET40                   8
#define P40_GPSET_BIT           SET40
#define P40_GPCLR_REG           GPCLR1
#define CLR40                   8
#define P40_GPCLR_BIT           CLR40
#define P40_GPLEV_REG           GPLEV1
#define LEV40                   8
#define P40_GPLEV_BIT           LEV40

// Pin 41
#define P41_GPFSEL_REG          GPFSEL4
#define FSEL41                  3
#define P41_GPFSEL_BIT          FSEL41
#define P41_GPSET_REG           GPSET1
#define SET41                   9
#define P41_GPSET_BIT           SET41
#define P41_GPCLR_REG           GPCLR1
#define CLR41                   9
#define P41_GPCLR_BIT           CLR41
#define P41_GPLEV_REG           GPLEV1
#define LEV41                   9
#define P41_GPLEV_BIT           LEV41

// Pin 42
#define P42_GPFSEL_REG          GPFSEL4
#define FSEL42                  6
#define P42_GPFSEL_BIT          FSEL42
#define P42_GPSET_REG           GPSET1
#define SET42                   10
#define P42_GPSET_BIT           SET42
#define P42_GPCLR_REG           GPCLR1
#define CLR42                   10
#define P42_GPCLR_BIT           CLR42
#define P42_GPLEV_REG           GPLEV1
#define LEV42                   10
#define P42_GPLEV_BIT           LEV42

// Pin 43
#define P43_GPFSEL_REG          GPFSEL4
#define FSEL43                  9
#define P43_GPFSEL_BIT          FSEL43
#define P43_GPSET_REG           GPSET1
#define SET43                   11
#define P43_GPSET_BIT           SET43
#define P43_GPCLR_REG           GPCLR1
#define CLR43                   11
#define P43_GPCLR_BIT           CLR43
#define P43_GPLEV_REG           GPLEV1
#define LEV43                   11
#define P43_GPLEV_BIT           LEV43

// Pin 44
#define P44_GPFSEL_REG          GPFSEL4
#define FSEL44                  12
#define P44_GPFSEL_BIT          FSEL44
#define P44_GPSET_REG           GPSET1
#define SET44                   12
#define P44_GPSET_BIT           SET44
#define P44_GPCLR_REG           GPCLR1
#define CLR44                   12
#define P44_GPCLR_BIT           CLR44
#define P44_GPLEV_REG           GPLEV1
#define LEV44                   12
#define P44_GPLEV_BIT           LEV44

// Pin 45
#define P45_GPFSEL_REG          GPFSEL4
#define FSEL45                  15
#define P45_GPFSEL_BIT          FSEL45
#define P45_GPSET_REG           GPSET1
#define SET45                   13
#define P45_GPSET_BIT           SET45
#define P45_GPCLR_REG           GPCLR1
#define CLR45                   13
#define P45_GPCLR_BIT           CLR45
#define P45_GPLEV_REG           GPLEV1
#define LEV45                   13
#define P45_GPLEV_BIT           LEV45

// Pin 46
#define P46_GPFSEL_REG          GPFSEL4
#define FSEL46                  18
#define P46_GPFSEL_BIT          FSEL46
#define P46_GPSET_REG           GPSET1
#define SET46                   14
#define P46_GPSET_BIT           SET46
#define P46_GPCLR_REG           GPCLR1
#define CLR46                   14
#define P46_GPCLR_BIT           CLR46
#define P46_GPLEV_REG           GPLEV1
#define LEV46                   14
#define P46_GPLEV_BIT           LEV46

// Pin 47
#define P47_GPFSEL_REG          GPFSEL4
#define FSEL47                  21
#define P47_GPFSEL_BIT          FSEL47
#define P47_GPSET_REG           GPSET1
#define SET47                   15
#define P47_GPSET_BIT           SET47
#define P47_GPCLR_REG           GPCLR1
#define CLR47                   15
#define P47_GPCLR_BIT           CLR47
#define P47_GPLEV_REG           GPLEV1
#define LEV47                   15
#define P47_GPLEV_BIT           LEV47

// Pin 48
#define P48_GPFSEL_REG          GPFSEL4
#define FSEL48                  24
#define P48_GPFSEL_BIT          FSEL48
#define P48_GPSET_REG           GPSET1
#define SET48                   16
#define P48_GPSET_BIT           SET48
#define P48_GPCLR_REG           GPCLR1
#define CLR48                   16
#define P48_GPCLR_BIT           CLR48
#define P48_GPLEV_REG           GPLEV1
#define LEV48                   16
#define P48_GPLEV_BIT           LEV48

// Pin 49
#define P49_GPFSEL_REG          GPFSEL4
#define FSEL49                  27
#define P49_GPFSEL_BIT          FSEL49
#define P49_GPSET_REG           GPSET1
#define SET49                   17
#define P49_GPSET_BIT           SET49
#define P49_GPCLR_REG           GPCLR1
#define CLR49                   17
#define P49_GPCLR_BIT           CLR49
#define P49_GPLEV_REG           GPLEV1
#define LEV49                   17
#define P49_GPLEV_BIT           LEV49

// Pin 50
#define P50_GPFSEL_REG          GPFSEL5
#define FSEL50                  0
#define P50_GPFSEL_BIT          FSEL50
#define P50_GPSET_REG           GPSET1
#define SET50                   18
#define P50_GPSET_BIT           SET50
#define P50_GPCLR_REG           GPCLR1
#define CLR50                   18
#define P50_GPCLR_BIT           CLR50
#define P50_GPLEV_REG           GPLEV1
#define LEV50                   18
#define P50_GPLEV_BIT           LEV50

// Pin 51
#define P51_GPFSEL_REG          GPFSEL5
#define FSEL51                  3
#define P51_GPFSEL_BIT          FSEL51
#define P51_GPSET_REG           GPSET1
#define SET51                   19
#define P51_GPSET_BIT           SET51
#define P51_GPCLR_REG           GPCLR1
#define CLR51                   19
#define P51_GPCLR_BIT           CLR51
#define P51_GPLEV_REG           GPLEV1
#define LEV51                   19
#define P51_GPLEV_BIT           LEV51

// Pin 52
#define P52_GPFSEL_REG          GPFSEL5
#define FSEL52                  6
#define P52_GPFSEL_BIT          FSEL52
#define P52_GPSET_REG           GPSET1
#define SET52                   20
#define P52_GPSET_BIT           SET52
#define P52_GPCLR_REG           GPCLR1
#define CLR52                   20
#define P52_GPCLR_BIT           CLR52
#define P52_GPLEV_REG           GPLEV1
#define LEV52                   20
#define P52_GPLEV_BIT           LEV52

// Pin 53
#define P53_GPFSEL_REG          GPFSEL5
#define FSEL53                  9
#define P53_GPFSEL_BIT          FSEL53
#define P53_GPSET_REG           GPSET1
#define SET53                   21
#define P53_GPSET_BIT           SET53
#define P53_GPCLR_REG           GPCLR1
#define CLR53                   21
#define P53_GPCLR_BIT           CLR53
#define P53_GPLEV_REG           GPLEV1
#define LEV53                   21
#define P53_GPLEV_BIT           LEV53


/*
 * GPIO Function Select
 * Name                     Value
 */
#define FSEL_INPUT          0b000
#define FSEL_OUTPUT         0b001
#define FSEL_FUNCTION0      0b100
#define FSEL_FUNCTION1      0b101
#define FSEL_FUNCTION2      0b110
#define FSEL_FUNCTION3      0b111
#define FSEL_FUNCTION4      0b011
#define FSEL_FUNCTION5      0b010


#include "../../cpu.h"


#endif // BROADCOM_BCM2835_H
