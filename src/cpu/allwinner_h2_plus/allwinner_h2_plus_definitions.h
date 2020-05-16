/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef ALLWINNER_H2_PLUS_DEFINITIONS_H
#define ALLWINNER_H2_PLUS_DEFINITIONS_H


#define CPU_NAME "Allwinner_H2_plus"
#define CPU_NAME_LOWER "allwinner_h2_plus"
#define CPU_NAME_UPPER "ALLWINNER_H2_PLUS"


/*
 * Datasheet: http://8iter.ru/datasheets/cpu/Allwinner_H2+_Datasheet_V1.2.pdf
 * Allwinner_H2_plus_Datasheet v1.2
 * 4.22. Port Controller(CPU-PORT)
 * Page 317
 *
 * The chip has 7 ports for multi-functional input/output pins
 */


// Base address offset
#define BASE_ADDRESS_GPIO (0x01C20800)


// Register Name        Offset                     Description
#define Pn_CFG0(n)      ((n)*0x24+0x00)         // Port n Configure Register 0 (n from 0 to 6)
#define Pn_CFG1(n)      ((n)*0x24+0x04)         // Port n Configure Register 1 (n from 0 to 6)
#define Pn_CFG2(n)      ((n)*0x24+0x08)         // Port n Configure Register 2 (n from 0 to 6)
#define Pn_CFG3(n)      ((n)*0x24+0x0C)         // Port n Configure Register 3 (n from 0 to 6)
#define Pn_DAT(n)       ((n)*0x24+0x10)         // Port n Data Register (n from 0 to 6)
#define Pn_DRV0(n)      ((n)*0x24+0x14)         // Port n Multi-Driving Register 0 (n from 0 to 6)
#define Pn_DRV1(n)      ((n)*0x24+0x18)         // Port n Multi-Driving Register 1 (n from 0 to 6)
#define Pn_PUL0(n)      ((n)*0x24+0x1C)         // Port n Pull Register 0 (n from 0 to 6)
#define Pn_PUL1(n)      ((n)*0x24+0x20)         // Port n Pull Register 1 (n from 0 to 6)

#define PA_INT_CFG0     (0x200+0*0x20+0x00)     // PIO Interrrupt Configure Register 0
#define PA_INT_CFG1     (0x200+0*0x20+0x04)     // PIO Interrrupt Configure Register 1
#define PA_INT_CFG2     (0x200+0*0x20+0x08)     // PIO Interrrupt Configure Register 2
#define PA_INT_CFG3     (0x200+0*0x20+0x0C)     // PIO Interrrupt Configure Register 3

#define PA_INT_CTL      (0x200+0*0x20+0x10)     // PIO Interrupt Control Register
#define PA_INT_STA      (0x200+0*0x20+0x14)     // PIO Interrupt Status Register
#define PA_INT_DEB      (0x200+0*0x20+0x18)     // PIO Interrupt Debounce Register

#define PG_INT_CFG0     (0x200+1*0x20+0x00)     // PIO Interrrupt Configure Register 0
#define PG_INT_CFG1     (0x200+1*0x20+0x04)     // PIO Interrrupt Configure Register 1
#define PG_INT_CFG2     (0x200+1*0x20+0x08)     // PIO Interrrupt Configure Register 2
#define PG_INT_CFG3     (0x200+1*0x20+0x0C)     // PIO Interrrupt Configure Register 3

#define PG_INT_CTL      (0x200+1*0x20+0x10)     // PIO Interrupt Control Register
#define PG_INT_STA      (0x200+1*0x20+0x14)     // PIO Interrupt Status Register
#define PG_INT_DEB      (0x200+1*0x20+0x18)     // PIO Interrupt Debounce Register


// Port number
#define PA_NUM          0
#define PC_NUM          1
#define PD_NUM          2
#define PE_NUM          3
#define PF_NUM          4
#define PG_NUM          5
#define PL_NUM          6


// Port pin quantity
#define PA_PIN_QUANTITY 22
#define PC_PIN_QUANTITY 19
#define PD_PIN_QUANTITY 18
#define PE_PIN_QUANTITY 16
#define PF_PIN_QUANTITY 7
#define PG_PIN_QUANTITY 14
#define PL_PIN_QUANTITY 12


// Port configure register offset
#define PA_CFG0         Pn_CFG0(PA_NUM)         // Port A Configure Register 0
#define PA_CFG1         Pn_CFG1(PA_NUM)         // Port A Configure Register 1
#define PA_CFG2         Pn_CFG2(PA_NUM)         // Port A Configure Register 2
#define PA_CFG3         Pn_CFG3(PA_NUM)         // Port A Configure Register 3

#define PC_CFG0         Pn_CFG0(PC_NUM)         // Port C Configure Register 0
#define PC_CFG1         Pn_CFG1(PC_NUM)         // Port C Configure Register 1
#define PC_CFG2         Pn_CFG2(PC_NUM)         // Port C Configure Register 2
#define PC_CFG3         Pn_CFG3(PC_NUM)         // Port C Configure Register 3

#define PD_CFG0         Pn_CFG0(PD_NUM)         // Port D Configure Register 0
#define PD_CFG1         Pn_CFG1(PD_NUM)         // Port D Configure Register 1
#define PD_CFG2         Pn_CFG2(PD_NUM)         // Port D Configure Register 2
#define PD_CFG3         Pn_CFG3(PD_NUM)         // Port D Configure Register 3

#define PE_CFG0         Pn_CFG0(PE_NUM)         // Port E Configure Register 0
#define PE_CFG1         Pn_CFG1(PE_NUM)         // Port E Configure Register 1
#define PE_CFG2         Pn_CFG2(PE_NUM)         // Port E Configure Register 2
#define PE_CFG3         Pn_CFG3(PE_NUM)         // Port E Configure Register 3

#define PF_CFG0         Pn_CFG0(PF_NUM)         // Port F Configure Register 0
#define PF_CFG1         Pn_CFG1(PF_NUM)         // Port F Configure Register 1
#define PF_CFG2         Pn_CFG2(PF_NUM)         // Port F Configure Register 2
#define PF_CFG3         Pn_CFG3(PF_NUM)         // Port F Configure Register 3

#define PG_CFG0         Pn_CFG0(PG_NUM)         // Port G Configure Register 0
#define PG_CFG1         Pn_CFG1(PG_NUM)         // Port G Configure Register 1
#define PG_CFG2         Pn_CFG2(PG_NUM)         // Port G Configure Register 2
#define PG_CFG3         Pn_CFG3(PG_NUM)         // Port G Configure Register 3

#define PL_CFG0         Pn_CFG0(PL_NUM)         // Port L Configure Register 0
#define PL_CFG1         Pn_CFG1(PL_NUM)         // Port L Configure Register 1
#define PL_CFG2         Pn_CFG2(PL_NUM)         // Port L Configure Register 2
#define PL_CFG3         Pn_CFG3(PL_NUM)         // Port L Configure Register 3


// Port data register offset
#define PA_DAT          Pn_DAT(PA_NUM)          // Port A Data Register
#define PC_DAT          Pn_DAT(PC_NUM)          // Port C Data Register
#define PD_DAT          Pn_DAT(PD_NUM)          // Port D Data Register
#define PE_DAT          Pn_DAT(PE_NUM)          // Port E Data Register
#define PF_DAT          Pn_DAT(PF_NUM)          // Port F Data Register
#define PG_DAT          Pn_DAT(PG_NUM)          // Port G Data Register
#define PL_DAT          Pn_DAT(PL_NUM)          // Port L Data Register


// Port multi-driving register offset
#define PA_DRV0         Pn_DRV0(PA_NUM)         // Port A Multi-Driving Register 0
#define PA_DRV1         Pn_DRV1(PA_NUM)         // Port A Multi-Driving Register 1

#define PC_DRV0         Pn_DRV0(PC_NUM)         // Port C Multi-Driving Register 0
#define PC_DRV1         Pn_DRV1(PC_NUM)         // Port C Multi-Driving Register 1

#define PD_DRV0         Pn_DRV0(PD_NUM)         // Port D Multi-Driving Register 0
#define PD_DRV1         Pn_DRV1(PD_NUM)         // Port D Multi-Driving Register 1

#define PE_DRV0         Pn_DRV0(PE_NUM)         // Port E Multi-Driving Register 0
#define PE_DRV1         Pn_DRV1(PE_NUM)         // Port E Multi-Driving Register 1

#define PF_DRV0         Pn_DRV0(PF_NUM)         // Port F Multi-Driving Register 0
#define PF_DRV1         Pn_DRV1(PF_NUM)         // Port F Multi-Driving Register 1

#define PG_DRV0         Pn_DRV0(PG_NUM)         // Port G Multi-Driving Register 0
#define PG_DRV1         Pn_DRV1(PG_NUM)         // Port G Multi-Driving Register 1

#define PL_DRV0         Pn_DRV0(PL_NUM)         // Port L Multi-Driving Register 0
#define PL_DRV1         Pn_DRV1(PL_NUM)         // Port L Multi-Driving Register 1


// Port pull register offset
#define PA_PUL0         Pn_PUL0(PA_NUM)         // Port A Pull Register 0
#define PA_PUL1         Pn_PUL1(PA_NUM)         // Port A Pull Register 1

#define PC_PUL0         Pn_PUL0(PC_NUM)         // Port C Pull Register 0
#define PC_PUL1         Pn_PUL1(PC_NUM)         // Port C Pull Register 1

#define PD_PUL0         Pn_PUL0(PD_NUM)         // Port D Pull Register 0
#define PD_PUL1         Pn_PUL1(PD_NUM)         // Port D Pull Register 1

#define PE_PUL0         Pn_PUL0(PE_NUM)         // Port E Pull Register 0
#define PE_PUL1         Pn_PUL1(PE_NUM)         // Port E Pull Register 1

#define PF_PUL0         Pn_PUL0(PF_NUM)         // Port F Pull Register 0
#define PF_PUL1         Pn_PUL1(PF_NUM)         // Port F Pull Register 1

#define PG_PUL0         Pn_PUL0(PG_NUM)         // Port G Pull Register 0
#define PG_PUL1         Pn_PUL1(PG_NUM)         // Port G Pull Register 1

#define PL_PUL0         Pn_PUL0(PL_NUM)         // Port L Pull Register 0
#define PL_PUL1         Pn_PUL1(PL_NUM)         // Port L Pull Register 1


/*
 * Description:
 * Configure register
 * Bit offset in configure register
 * Data register
 * Bit offset in data register
 * Pull register
 * Bit offset in pull register
 */

// Port A
#define PA00_CFG_REG        PA_CFG0
#define PA00_CFG_BIT        0
#define PA00_DAT_REG        PA_DAT
#define PA00_DAT_BIT        0
#define PA00_PUL_REG        PA_PUL0
#define PA00_PUL_BIT        0

#define PA01_CFG_REG        PA_CFG0
#define PA01_CFG_BIT        4
#define PA01_DAT_REG        PA_DAT
#define PA01_DAT_BIT        1
#define PA01_PUL_REG        PA_PUL0
#define PA01_PUL_BIT        2

#define PA02_CFG_REG        PA_CFG0
#define PA02_CFG_BIT        8
#define PA02_DAT_REG        PA_DAT
#define PA02_DAT_BIT        2
#define PA02_PUL_REG        PA_PUL0
#define PA02_PUL_BIT        4

#define PA03_CFG_REG        PA_CFG0
#define PA03_CFG_BIT        12
#define PA03_DAT_REG        PA_DAT
#define PA03_DAT_BIT        3
#define PA03_PUL_REG        PA_PUL0
#define PA03_PUL_BIT        6

#define PA04_CFG_REG        PA_CFG0
#define PA04_CFG_BIT        16
#define PA04_DAT_REG        PA_DAT
#define PA04_DAT_BIT        4
#define PA04_PUL_REG        PA_PUL0
#define PA04_PUL_BIT        8

#define PA05_CFG_REG        PA_CFG0
#define PA05_CFG_BIT        20
#define PA05_DAT_REG        PA_DAT
#define PA05_DAT_BIT        5
#define PA05_PUL_REG        PA_PUL0
#define PA05_PUL_BIT        10

#define PA06_CFG_REG        PA_CFG0
#define PA06_CFG_BIT        24
#define PA06_DAT_REG        PA_DAT
#define PA06_DAT_BIT        6
#define PA06_PUL_REG        PA_PUL0
#define PA06_PUL_BIT        12

#define PA07_CFG_REG        PA_CFG0
#define PA07_CFG_BIT        28
#define PA07_DAT_REG        PA_DAT
#define PA07_DAT_BIT        7
#define PA07_PUL_REG        PA_PUL0
#define PA07_PUL_BIT        14

#define PA08_CFG_REG        PA_CFG1
#define PA08_CFG_BIT        0
#define PA08_DAT_REG        PA_DAT
#define PA08_DAT_BIT        8
#define PA08_PUL_REG        PA_PUL0
#define PA08_PUL_BIT        16

#define PA09_CFG_REG        PA_CFG1
#define PA09_CFG_BIT        4
#define PA09_DAT_REG        PA_DAT
#define PA09_DAT_BIT        9
#define PA09_PUL_REG        PA_PUL0
#define PA09_PUL_BIT        18

#define PA10_CFG_REG        PA_CFG1
#define PA10_CFG_BIT        8
#define PA10_DAT_REG        PA_DAT
#define PA10_DAT_BIT        10
#define PA10_PUL_REG        PA_PUL0
#define PA10_PUL_BIT        20

#define PA11_CFG_REG        PA_CFG1
#define PA11_CFG_BIT        12
#define PA11_DAT_REG        PA_DAT
#define PA11_DAT_BIT        11
#define PA11_PUL_REG        PA_PUL0
#define PA11_PUL_BIT        22

#define PA12_CFG_REG        PA_CFG1
#define PA12_CFG_BIT        16
#define PA12_DAT_REG        PA_DAT
#define PA12_DAT_BIT        12
#define PA12_PUL_REG        PA_PUL0
#define PA12_PUL_BIT        24

#define PA13_CFG_REG        PA_CFG1
#define PA13_CFG_BIT        20
#define PA13_DAT_REG        PA_DAT
#define PA13_DAT_BIT        13
#define PA13_PUL_REG        PA_PUL0
#define PA13_PUL_BIT        26

#define PA14_CFG_REG        PA_CFG1
#define PA14_CFG_BIT        24
#define PA14_DAT_REG        PA_DAT
#define PA14_DAT_BIT        14
#define PA14_PUL_REG        PA_PUL0
#define PA14_PUL_BIT        28

#define PA15_CFG_REG        PA_CFG1
#define PA15_CFG_BIT        28
#define PA15_DAT_REG        PA_DAT
#define PA15_DAT_BIT        15
#define PA15_PUL_REG        PA_PUL0
#define PA15_PUL_BIT        30

#define PA16_CFG_REG        PA_CFG2
#define PA16_CFG_BIT        0
#define PA16_DAT_REG        PA_DAT
#define PA16_DAT_BIT        16
#define PA16_PUL_REG        PA_PUL1
#define PA16_PUL_BIT        0

#define PA17_CFG_REG        PA_CFG2
#define PA17_CFG_BIT        4
#define PA17_DAT_REG        PA_DAT
#define PA17_DAT_BIT        17
#define PA17_PUL_REG        PA_PUL1
#define PA17_PUL_BIT        2

#define PA18_CFG_REG        PA_CFG2
#define PA18_CFG_BIT        8
#define PA18_DAT_REG        PA_DAT
#define PA18_DAT_BIT        18
#define PA18_PUL_REG        PA_PUL1
#define PA18_PUL_BIT        4

#define PA19_CFG_REG        PA_CFG2
#define PA19_CFG_BIT        12
#define PA19_DAT_REG        PA_DAT
#define PA19_DAT_BIT        19
#define PA19_PUL_REG        PA_PUL1
#define PA19_PUL_BIT        6

#define PA20_CFG_REG        PA_CFG2
#define PA20_CFG_BIT        16
#define PA20_DAT_REG        PA_DAT
#define PA20_DAT_BIT        20
#define PA20_PUL_REG        PA_PUL1
#define PA20_PUL_BIT        8

#define PA21_CFG_REG        PA_CFG2
#define PA21_CFG_BIT        20
#define PA21_DAT_REG        PA_DAT
#define PA21_DAT_BIT        21
#define PA21_PUL_REG        PA_PUL1
#define PA21_PUL_BIT        10

// Port C
#define PC00_CFG_REG        PC_CFG0
#define PC00_CFG_BIT        0
#define PC00_DAT_REG        PC_DAT
#define PC00_DAT_BIT        0
#define PC00_PUL_REG        PC_PUL0
#define PC00_PUL_BIT        0

#define PC01_CFG_REG        PC_CFG0
#define PC01_CFG_BIT        4
#define PC01_DAT_REG        PC_DAT
#define PC01_DAT_BIT        1
#define PC01_PUL_REG        PC_PUL0
#define PC01_PUL_BIT        2

#define PC02_CFG_REG        PC_CFG0
#define PC02_CFG_BIT        8
#define PC02_DAT_REG        PC_DAT
#define PC02_DAT_BIT        2
#define PC02_PUL_REG        PC_PUL0
#define PC02_PUL_BIT        4

#define PC03_CFG_REG        PC_CFG0
#define PC03_CFG_BIT        12
#define PC03_DAT_REG        PC_DAT
#define PC03_DAT_BIT        3
#define PC03_PUL_REG        PC_PUL0
#define PC03_PUL_BIT        6

#define PC04_CFG_REG        PC_CFG0
#define PC04_CFG_BIT        16
#define PC04_DAT_REG        PC_DAT
#define PC04_DAT_BIT        4
#define PC04_PUL_REG        PC_PUL0
#define PC04_PUL_BIT        8

#define PC05_CFG_REG        PC_CFG0
#define PC05_CFG_BIT        20
#define PC05_DAT_REG        PC_DAT
#define PC05_DAT_BIT        5
#define PC05_PUL_REG        PC_PUL0
#define PC05_PUL_BIT        10

#define PC06_CFG_REG        PC_CFG0
#define PC06_CFG_BIT        24
#define PC06_DAT_REG        PC_DAT
#define PC06_DAT_BIT        6
#define PC06_PUL_REG        PC_PUL0
#define PC06_PUL_BIT        12

#define PC07_CFG_REG        PC_CFG0
#define PC07_CFG_BIT        28
#define PC07_DAT_REG        PC_DAT
#define PC07_DAT_BIT        7
#define PC07_PUL_REG        PC_PUL0
#define PC07_PUL_BIT        14

#define PC08_CFG_REG        PC_CFG1
#define PC08_CFG_BIT        0
#define PC08_DAT_REG        PC_DAT
#define PC08_DAT_BIT        8
#define PC08_PUL_REG        PC_PUL0
#define PC08_PUL_BIT        16

#define PC09_CFG_REG        PC_CFG1
#define PC09_CFG_BIT        4
#define PC09_DAT_REG        PC_DAT
#define PC09_DAT_BIT        9
#define PC09_PUL_REG        PC_PUL0
#define PC09_PUL_BIT        18

#define PC10_CFG_REG        PC_CFG1
#define PC10_CFG_BIT        8
#define PC10_DAT_REG        PC_DAT
#define PC10_DAT_BIT        10
#define PC10_PUL_REG        PC_PUL0
#define PC10_PUL_BIT        20

#define PC11_CFG_REG        PC_CFG1
#define PC11_CFG_BIT        12
#define PC11_DAT_REG        PC_DAT
#define PC11_DAT_BIT        11
#define PC11_PUL_REG        PC_PUL0
#define PC11_PUL_BIT        22

#define PC12_CFG_REG        PC_CFG1
#define PC12_CFG_BIT        16
#define PC12_DAT_REG        PC_DAT
#define PC12_DAT_BIT        12
#define PC12_PUL_REG        PC_PUL0
#define PC12_PUL_BIT        24

#define PC13_CFG_REG        PC_CFG1
#define PC13_CFG_BIT        20
#define PC13_DAT_REG        PC_DAT
#define PC13_DAT_BIT        13
#define PC13_PUL_REG        PC_PUL0
#define PC13_PUL_BIT        26

#define PC14_CFG_REG        PC_CFG1
#define PC14_CFG_BIT        24
#define PC14_DAT_REG        PC_DAT
#define PC14_DAT_BIT        14
#define PC14_PUL_REG        PC_PUL0
#define PC14_PUL_BIT        28

#define PC15_CFG_REG        PC_CFG1
#define PC15_CFG_BIT        28
#define PC15_DAT_REG        PC_DAT
#define PC15_DAT_BIT        15
#define PC15_PUL_REG        PC_PUL0
#define PC15_PUL_BIT        30

#define PC16_CFG_REG        PC_CFG2
#define PC16_CFG_BIT        0
#define PC16_DAT_REG        PC_DAT
#define PC16_DAT_BIT        16
#define PC16_PUL_REG        PC_PUL1
#define PC16_PUL_BIT        0

#define PC17_CFG_REG        PC_CFG2
#define PC17_CFG_BIT        4
#define PC17_DAT_REG        PC_DAT
#define PC17_DAT_BIT        17
#define PC17_PUL_REG        PC_PUL1
#define PC17_PUL_BIT        2

#define PC18_CFG_REG        PC_CFG2
#define PC18_CFG_BIT        8
#define PC18_DAT_REG        PC_DAT
#define PC18_DAT_BIT        18
#define PC18_PUL_REG        PC_PUL1
#define PC18_PUL_BIT        4

// Port D
#define PD00_CFG_REG        PD_CFG0
#define PD00_CFG_BIT        0
#define PD00_DAT_REG        PD_DAT
#define PD00_DAT_BIT        0
#define PD00_PUL_REG        PD_PUL0
#define PD00_PUL_BIT        0

#define PD01_CFG_REG        PD_CFG0
#define PD01_CFG_BIT        4
#define PD01_DAT_REG        PD_DAT
#define PD01_DAT_BIT        1
#define PD01_PUL_REG        PD_PUL0
#define PD01_PUL_BIT        2

#define PD02_CFG_REG        PD_CFG0
#define PD02_CFG_BIT        8
#define PD02_DAT_REG        PD_DAT
#define PD02_DAT_BIT        2
#define PD02_PUL_REG        PD_PUL0
#define PD02_PUL_BIT        4

#define PD03_CFG_REG        PD_CFG0
#define PD03_CFG_BIT        12
#define PD03_DAT_REG        PD_DAT
#define PD03_DAT_BIT        3
#define PD03_PUL_REG        PD_PUL0
#define PD03_PUL_BIT        6

#define PD04_CFG_REG        PD_CFG0
#define PD04_CFG_BIT        16
#define PD04_DAT_REG        PD_DAT
#define PD04_DAT_BIT        4
#define PD04_PUL_REG        PD_PUL0
#define PD04_PUL_BIT        8

#define PD05_CFG_REG        PD_CFG0
#define PD05_CFG_BIT        20
#define PD05_DAT_REG        PD_DAT
#define PD05_DAT_BIT        5
#define PD05_PUL_REG        PD_PUL0
#define PD05_PUL_BIT        10

#define PD06_CFG_REG        PD_CFG0
#define PD06_CFG_BIT        24
#define PD06_DAT_REG        PD_DAT
#define PD06_DAT_BIT        6
#define PD06_PUL_REG        PD_PUL0
#define PD06_PUL_BIT        12

#define PD07_CFG_REG        PD_CFG0
#define PD07_CFG_BIT        28
#define PD07_DAT_REG        PD_DAT
#define PD07_DAT_BIT        7
#define PD07_PUL_REG        PD_PUL0
#define PD07_PUL_BIT        14

#define PD08_CFG_REG        PD_CFG1
#define PD08_CFG_BIT        0
#define PD08_DAT_REG        PD_DAT
#define PD08_DAT_BIT        8
#define PD08_PUL_REG        PD_PUL0
#define PD08_PUL_BIT        16

#define PD09_CFG_REG        PD_CFG1
#define PD09_CFG_BIT        4
#define PD09_DAT_REG        PD_DAT
#define PD09_DAT_BIT        9
#define PD09_PUL_REG        PD_PUL0
#define PD09_PUL_BIT        18

#define PD10_CFG_REG        PD_CFG1
#define PD10_CFG_BIT        8
#define PD10_DAT_REG        PD_DAT
#define PD10_DAT_BIT        10
#define PD10_PUL_REG        PD_PUL0
#define PD10_PUL_BIT        20

#define PD11_CFG_REG        PD_CFG1
#define PD11_CFG_BIT        12
#define PD11_DAT_REG        PD_DAT
#define PD11_DAT_BIT        11
#define PD11_PUL_REG        PD_PUL0
#define PD11_PUL_BIT        22

#define PD12_CFG_REG        PD_CFG1
#define PD12_CFG_BIT        16
#define PD12_DAT_REG        PD_DAT
#define PD12_DAT_BIT        12
#define PD12_PUL_REG        PD_PUL0
#define PD12_PUL_BIT        24

#define PD13_CFG_REG        PD_CFG1
#define PD13_CFG_BIT        20
#define PD13_DAT_REG        PD_DAT
#define PD13_DAT_BIT        13
#define PD13_PUL_REG        PD_PUL0
#define PD13_PUL_BIT        26

#define PD14_CFG_REG        PD_CFG1
#define PD14_CFG_BIT        24
#define PD14_DAT_REG        PD_DAT
#define PD14_DAT_BIT        14
#define PD14_PUL_REG        PD_PUL0
#define PD14_PUL_BIT        28

#define PD15_CFG_REG        PD_CFG1
#define PD15_CFG_BIT        28
#define PD15_DAT_REG        PD_DAT
#define PD15_DAT_BIT        15
#define PD15_PUL_REG        PD_PUL0
#define PD15_PUL_BIT        30

#define PD16_CFG_REG        PD_CFG2
#define PD16_CFG_BIT        0
#define PD16_DAT_REG        PD_DAT
#define PD16_DAT_BIT        16
#define PD16_PUL_REG        PD_PUL1
#define PD16_PUL_BIT        0

#define PD17_CFG_REG        PD_CFG2
#define PD17_CFG_BIT        4
#define PD17_DAT_REG        PD_DAT
#define PD17_DAT_BIT        17
#define PD17_PUL_REG        PD_PUL1
#define PD17_PUL_BIT        2

// Port E
#define PE00_CFG_REG        PE_CFG0
#define PE00_CFG_BIT        0
#define PE00_DAT_REG        PE_DAT
#define PE00_DAT_BIT        0
#define PE00_PUL_REG        PE_PUL0
#define PE00_PUL_BIT        0

#define PE01_CFG_REG        PE_CFG0
#define PE01_CFG_BIT        4
#define PE01_DAT_REG        PE_DAT
#define PE01_DAT_BIT        1
#define PE01_PUL_REG        PE_PUL0
#define PE01_PUL_BIT        2

#define PE02_CFG_REG        PE_CFG0
#define PE02_CFG_BIT        8
#define PE02_DAT_REG        PE_DAT
#define PE02_DAT_BIT        2
#define PE02_PUL_REG        PE_PUL0
#define PE02_PUL_BIT        4

#define PE03_CFG_REG        PE_CFG0
#define PE03_CFG_BIT        12
#define PE03_DAT_REG        PE_DAT
#define PE03_DAT_BIT        3
#define PE03_PUL_REG        PE_PUL0
#define PE03_PUL_BIT        6

#define PE04_CFG_REG        PE_CFG0
#define PE04_CFG_BIT        16
#define PE04_DAT_REG        PE_DAT
#define PE04_DAT_BIT        4
#define PE04_PUL_REG        PE_PUL0
#define PE04_PUL_BIT        8

#define PE05_CFG_REG        PE_CFG0
#define PE05_CFG_BIT        20
#define PE05_DAT_REG        PE_DAT
#define PE05_DAT_BIT        5
#define PE05_PUL_REG        PE_PUL0
#define PE05_PUL_BIT        10

#define PE06_CFG_REG        PE_CFG0
#define PE06_CFG_BIT        24
#define PE06_DAT_REG        PE_DAT
#define PE06_DAT_BIT        6
#define PE06_PUL_REG        PE_PUL0
#define PE06_PUL_BIT        12

#define PE07_CFG_REG        PE_CFG0
#define PE07_CFG_BIT        28
#define PE07_DAT_REG        PE_DAT
#define PE07_DAT_BIT        7
#define PE07_PUL_REG        PE_PUL0
#define PE07_PUL_BIT        14

#define PE08_CFG_REG        PE_CFG1
#define PE08_CFG_BIT        0
#define PE08_DAT_REG        PE_DAT
#define PE08_DAT_BIT        8
#define PE08_PUL_REG        PE_PUL0
#define PE08_PUL_BIT        16

#define PE09_CFG_REG        PE_CFG1
#define PE09_CFG_BIT        4
#define PE09_DAT_REG        PE_DAT
#define PE09_DAT_BIT        9
#define PE09_PUL_REG        PE_PUL0
#define PE09_PUL_BIT        18

#define PE10_CFG_REG        PE_CFG1
#define PE10_CFG_BIT        8
#define PE10_DAT_REG        PE_DAT
#define PE10_DAT_BIT        10
#define PE10_PUL_REG        PE_PUL0
#define PE10_PUL_BIT        20

#define PE11_CFG_REG        PE_CFG1
#define PE11_CFG_BIT        12
#define PE11_DAT_REG        PE_DAT
#define PE11_DAT_BIT        11
#define PE11_PUL_REG        PE_PUL0
#define PE11_PUL_BIT        22

#define PE12_CFG_REG        PE_CFG1
#define PE12_CFG_BIT        16
#define PE12_DAT_REG        PE_DAT
#define PE12_DAT_BIT        12
#define PE12_PUL_REG        PE_PUL0
#define PE12_PUL_BIT        24

#define PE13_CFG_REG        PE_CFG1
#define PE13_CFG_BIT        20
#define PE13_DAT_REG        PE_DAT
#define PE13_DAT_BIT        13
#define PE13_PUL_REG        PE_PUL0
#define PE13_PUL_BIT        26

#define PE14_CFG_REG        PE_CFG1
#define PE14_CFG_BIT        24
#define PE14_DAT_REG        PE_DAT
#define PE14_DAT_BIT        14
#define PE14_PUL_REG        PE_PUL0
#define PE14_PUL_BIT        28

#define PE15_CFG_REG        PE_CFG1
#define PE15_CFG_BIT        28
#define PE15_DAT_REG        PE_DAT
#define PE15_DAT_BIT        15
#define PE15_PUL_REG        PE_PUL0
#define PE15_PUL_BIT        30

// Port F
#define PF00_CFG_REG        PF_CFG0
#define PF00_CFG_BIT        0
#define PF00_DAT_REG        PF_DAT
#define PF00_DAT_BIT        0
#define PF00_PUL_REG        PF_PUL0
#define PF00_PUL_BIT        0

#define PF01_CFG_REG        PF_CFG0
#define PF01_CFG_BIT        4
#define PF01_DAT_REG        PF_DAT
#define PF01_DAT_BIT        1
#define PF01_PUL_REG        PF_PUL0
#define PF01_PUL_BIT        2

#define PF02_CFG_REG        PF_CFG0
#define PF02_CFG_BIT        8
#define PF02_DAT_REG        PF_DAT
#define PF02_DAT_BIT        2
#define PF02_PUL_REG        PF_PUL0
#define PF02_PUL_BIT        4

#define PF03_CFG_REG        PF_CFG0
#define PF03_CFG_BIT        12
#define PF03_DAT_REG        PF_DAT
#define PF03_DAT_BIT        3
#define PF03_PUL_REG        PF_PUL0
#define PF03_PUL_BIT        6

#define PF04_CFG_REG        PF_CFG0
#define PF04_CFG_BIT        16
#define PF04_DAT_REG        PF_DAT
#define PF04_DAT_BIT        4
#define PF04_PUL_REG        PF_PUL0
#define PF04_PUL_BIT        8

#define PF05_CFG_REG        PF_CFG0
#define PF05_CFG_BIT        20
#define PF05_DAT_REG        PF_DAT
#define PF05_DAT_BIT        5
#define PF05_PUL_REG        PF_PUL0
#define PF05_PUL_BIT        10

#define PF06_CFG_REG        PF_CFG0
#define PF06_CFG_BIT        24
#define PF06_DAT_REG        PF_DAT
#define PF06_DAT_BIT        6
#define PF06_PUL_REG        PF_PUL0
#define PF06_PUL_BIT        12

// Port G
#define PG00_CFG_REG        PG_CFG0
#define PG00_CFG_BIT        0
#define PG00_DAT_REG        PG_DAT
#define PG00_DAT_BIT        0
#define PG00_PUL_REG        PG_PUL0
#define PG00_PUL_BIT        0

#define PG01_CFG_REG        PG_CFG0
#define PG01_CFG_BIT        4
#define PG01_DAT_REG        PG_DAT
#define PG01_DAT_BIT        1
#define PG01_PUL_REG        PG_PUL0
#define PG01_PUL_BIT        2

#define PG02_CFG_REG        PG_CFG0
#define PG02_CFG_BIT        8
#define PG02_DAT_REG        PG_DAT
#define PG02_DAT_BIT        2
#define PG02_PUL_REG        PG_PUL0
#define PG02_PUL_BIT        4

#define PG03_CFG_REG        PG_CFG0
#define PG03_CFG_BIT        12
#define PG03_DAT_REG        PG_DAT
#define PG03_DAT_BIT        3
#define PG03_PUL_REG        PG_PUL0
#define PG03_PUL_BIT        6

#define PG04_CFG_REG        PG_CFG0
#define PG04_CFG_BIT        16
#define PG04_DAT_REG        PG_DAT
#define PG04_DAT_BIT        4
#define PG04_PUL_REG        PG_PUL0
#define PG04_PUL_BIT        8

#define PG05_CFG_REG        PG_CFG0
#define PG05_CFG_BIT        20
#define PG05_DAT_REG        PG_DAT
#define PG05_DAT_BIT        5
#define PG05_PUL_REG        PG_PUL0
#define PG05_PUL_BIT        10

#define PG06_CFG_REG        PG_CFG0
#define PG06_CFG_BIT        24
#define PG06_DAT_REG        PG_DAT
#define PG06_DAT_BIT        6
#define PG06_PUL_REG        PG_PUL0
#define PG06_PUL_BIT        12

#define PG07_CFG_REG        PG_CFG0
#define PG07_CFG_BIT        28
#define PG07_DAT_REG        PG_DAT
#define PG07_DAT_BIT        7
#define PG07_PUL_REG        PG_PUL0
#define PG07_PUL_BIT        14

#define PG08_CFG_REG        PG_CFG1
#define PG08_CFG_BIT        0
#define PG08_DAT_REG        PG_DAT
#define PG08_DAT_BIT        8
#define PG08_PUL_REG        PG_PUL0
#define PG08_PUL_BIT        16

#define PG09_CFG_REG        PG_CFG1
#define PG09_CFG_BIT        4
#define PG09_DAT_REG        PG_DAT
#define PG09_DAT_BIT        9
#define PG09_PUL_REG        PG_PUL0
#define PG09_PUL_BIT        18

#define PG10_CFG_REG        PG_CFG1
#define PG10_CFG_BIT        8
#define PG10_DAT_REG        PG_DAT
#define PG10_DAT_BIT        10
#define PG10_PUL_REG        PG_PUL0
#define PG10_PUL_BIT        20

#define PG11_CFG_REG        PG_CFG1
#define PG11_CFG_BIT        12
#define PG11_DAT_REG        PG_DAT
#define PG11_DAT_BIT        11
#define PG11_PUL_REG        PG_PUL0
#define PG11_PUL_BIT        22

#define PG12_CFG_REG        PG_CFG1
#define PG12_CFG_BIT        16
#define PG12_DAT_REG        PG_DAT
#define PG12_DAT_BIT        12
#define PG12_PUL_REG        PG_PUL0
#define PG12_PUL_BIT        24

#define PG13_CFG_REG        PG_CFG1
#define PG13_CFG_BIT        20
#define PG13_DAT_REG        PG_DAT
#define PG13_DAT_BIT        13
#define PG13_PUL_REG        PG_PUL0
#define PG13_PUL_BIT        26

// Port L
#define PL00_CFG_REG        PL_CFG0
#define PL00_CFG_BIT        0
#define PL00_DAT_REG        PL_DAT
#define PL00_DAT_BIT        0
#define PL00_PUL_REG        PL_PUL0
#define PL00_PUL_BIT        0

#define PL01_CFG_REG        PL_CFG0
#define PL01_CFG_BIT        4
#define PL01_DAT_REG        PL_DAT
#define PL01_DAT_BIT        1
#define PL01_PUL_REG        PL_PUL0
#define PL01_PUL_BIT        2

#define PL02_CFG_REG        PL_CFG0
#define PL02_CFG_BIT        8
#define PL02_DAT_REG        PL_DAT
#define PL02_DAT_BIT        2
#define PL02_PUL_REG        PL_PUL0
#define PL02_PUL_BIT        4

#define PL03_CFG_REG        PL_CFG0
#define PL03_CFG_BIT        12
#define PL03_DAT_REG        PL_DAT
#define PL03_DAT_BIT        3
#define PL03_PUL_REG        PL_PUL0
#define PL03_PUL_BIT        6

#define PL04_CFG_REG        PL_CFG0
#define PL04_CFG_BIT        16
#define PL04_DAT_REG        PL_DAT
#define PL04_DAT_BIT        4
#define PL04_PUL_REG        PL_PUL0
#define PL04_PUL_BIT        8

#define PL05_CFG_REG        PL_CFG0
#define PL05_CFG_BIT        20
#define PL05_DAT_REG        PL_DAT
#define PL05_DAT_BIT        5
#define PL05_PUL_REG        PL_PUL0
#define PL05_PUL_BIT        10

#define PL06_CFG_REG        PL_CFG0
#define PL06_CFG_BIT        24
#define PL06_DAT_REG        PL_DAT
#define PL06_DAT_BIT        6
#define PL06_PUL_REG        PL_PUL0
#define PL06_PUL_BIT        12

#define PL07_CFG_REG        PL_CFG0
#define PL07_CFG_BIT        28
#define PL07_DAT_REG        PL_DAT
#define PL07_DAT_BIT        7
#define PL07_PUL_REG        PL_PUL0
#define PL07_PUL_BIT        14

#define PL08_CFG_REG        PL_CFG1
#define PL08_CFG_BIT        0
#define PL08_DAT_REG        PL_DAT
#define PL08_DAT_BIT        8
#define PL08_PUL_REG        PL_PUL0
#define PL08_PUL_BIT        16

#define PL09_CFG_REG        PL_CFG1
#define PL09_CFG_BIT        4
#define PL09_DAT_REG        PL_DAT
#define PL09_DAT_BIT        9
#define PL09_PUL_REG        PL_PUL0
#define PL09_PUL_BIT        18

#define PL10_CFG_REG        PL_CFG1
#define PL10_CFG_BIT        8
#define PL10_DAT_REG        PL_DAT
#define PL10_DAT_BIT        10
#define PL10_PUL_REG        PL_PUL0
#define PL10_PUL_BIT        20

#define PL11_CFG_REG        PL_CFG1
#define PL11_CFG_BIT        12
#define PL11_DAT_REG        PL_DAT
#define PL11_DAT_BIT        11
#define PL11_PUL_REG        PL_PUL0
#define PL11_PUL_BIT        22


/*
 * Port configure value
 * P_SELECT_OPTION(2...6) see in Allwinner H2+ Datasheet
 * 4.22.2. Port Controller Register Description
 * Page 318
 * Default value is P_SELECT_DISABLE
 */
#define P_SELECT_INPUT      0b000
#define P_SELECT_OUTPUT     0b001
#define P_SELECT_OPTION2    0b010
#define P_SELECT_OPTION3    0b011
#define P_SELECT_OPTION4    0b100
#define P_SELECT_OPTION5    0b101
#define P_SELECT_OPTION6    0b110
#define P_SELECT_DISABLE    0b111


/*
 * Pull-up/down Select
 * Default value is P_PULL_DISABLE
 */
#define P_PULL_DISABLE      0b00
#define P_PULL_UP           0b01
#define P_PULL_DOWN         0b10


typedef unsigned long int uword;
typedef signed long int sword;


#endif // ALLWINNER_H2_PLUS_DEFINITIONS_H
