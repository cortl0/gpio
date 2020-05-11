/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef ALLWINNER_H2_PLUS_DEFINITIONS_H
#define ALLWINNER_H2_PLUS_DEFINITIONS_H


//CPU_NAME Allwinner_H2_plus
//CPU_NAME_LOWER allwinner_h2_plus
//CPU_NAME_UPPER ALLWINNER_H2_PLUS


/*
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
 * Pin num (bit offset in data register)
 * Offset in configure register
 * Configure register
 */

// Port A
#define PA00_PIN            0 
#define PA00_CFG_OFFSET     0 
#define PA00_CFG            PA_CFG0

#define PA01_PIN            1 
#define PA01_CFG_OFFSET     4 
#define PA01_CFG            PA_CFG0

#define PA02_PIN            2 
#define PA02_CFG_OFFSET     8 
#define PA02_CFG            PA_CFG0

#define PA03_PIN            3 
#define PA03_CFG_OFFSET     12
#define PA03_CFG            PA_CFG0

#define PA04_PIN            4 
#define PA04_CFG_OFFSET     16
#define PA04_CFG            PA_CFG0

#define PA05_PIN            5 
#define PA05_CFG_OFFSET     20
#define PA05_CFG            PA_CFG0

#define PA06_PIN            6 
#define PA06_CFG_OFFSET     24
#define PA06_CFG            PA_CFG0

#define PA07_PIN            7 
#define PA07_CFG_OFFSET     28
#define PA07_CFG            PA_CFG0

#define PA08_PIN            8 
#define PA08_CFG_OFFSET     0 
#define PA08_CFG            PA_CFG1

#define PA09_PIN            9 
#define PA09_CFG_OFFSET     4 
#define PA09_CFG            PA_CFG1

#define PA10_PIN            10
#define PA10_CFG_OFFSET     8 
#define PA10_CFG            PA_CFG1

#define PA11_PIN            11
#define PA11_CFG_OFFSET     12
#define PA11_CFG            PA_CFG1

#define PA12_PIN            12
#define PA12_CFG_OFFSET     16
#define PA12_CFG            PA_CFG1

#define PA13_PIN            13
#define PA13_CFG_OFFSET     20
#define PA13_CFG            PA_CFG1

#define PA14_PIN            14
#define PA14_CFG_OFFSET     24
#define PA14_CFG            PA_CFG1

#define PA15_PIN            15
#define PA15_CFG_OFFSET     28
#define PA15_CFG            PA_CFG1

#define PA16_PIN            16
#define PA16_CFG_OFFSET     0 
#define PA16_CFG            PA_CFG2

#define PA17_PIN            17
#define PA17_CFG_OFFSET     4 
#define PA17_CFG            PA_CFG2

#define PA18_PIN            18
#define PA18_CFG_OFFSET     8 
#define PA18_CFG            PA_CFG2

#define PA19_PIN            19
#define PA19_CFG_OFFSET     12
#define PA19_CFG            PA_CFG2

#define PA20_PIN            20
#define PA20_CFG_OFFSET     16
#define PA20_CFG            PA_CFG2

#define PA21_PIN            21
#define PA21_CFG_OFFSET     20
#define PA21_CFG            PA_CFG2

// Port C
#define PC00_PIN            0 
#define PC00_CFG_OFFSET     0 
#define PC00_CFG            PC_CFG0

#define PC01_PIN            1 
#define PC01_CFG_OFFSET     4 
#define PC01_CFG            PC_CFG0

#define PC02_PIN            2 
#define PC02_CFG_OFFSET     8 
#define PC02_CFG            PC_CFG0

#define PC03_PIN            3 
#define PC03_CFG_OFFSET     12
#define PC03_CFG            PC_CFG0

#define PC04_PIN            4 
#define PC04_CFG_OFFSET     16
#define PC04_CFG            PC_CFG0

#define PC05_PIN            5 
#define PC05_CFG_OFFSET     20
#define PC05_CFG            PC_CFG0

#define PC06_PIN            6 
#define PC06_CFG_OFFSET     24
#define PC06_CFG            PC_CFG0

#define PC07_PIN            7 
#define PC07_CFG_OFFSET     28
#define PC07_CFG            PC_CFG0

#define PC08_PIN            8 
#define PC08_CFG_OFFSET     0 
#define PC08_CFG            PC_CFG1

#define PC09_PIN            9 
#define PC09_CFG_OFFSET     4 
#define PC09_CFG            PC_CFG1

#define PC10_PIN            10
#define PC10_CFG_OFFSET     8 
#define PC10_CFG            PC_CFG1

#define PC11_PIN            11
#define PC11_CFG_OFFSET     12
#define PC11_CFG            PC_CFG1

#define PC12_PIN            12
#define PC12_CFG_OFFSET     16
#define PC12_CFG            PC_CFG1

#define PC13_PIN            13
#define PC13_CFG_OFFSET     20
#define PC13_CFG            PC_CFG1

#define PC14_PIN            14
#define PC14_CFG_OFFSET     24
#define PC14_CFG            PC_CFG1

#define PC15_PIN            15
#define PC15_CFG_OFFSET     28
#define PC15_CFG            PC_CFG1

#define PC16_PIN            16
#define PC16_CFG_OFFSET     0 
#define PC16_CFG            PC_CFG2

#define PC17_PIN            17
#define PC17_CFG_OFFSET     4 
#define PC17_CFG            PC_CFG2

#define PC18_PIN            18
#define PC18_CFG_OFFSET     8 
#define PC18_CFG            PC_CFG2

// Port D
#define PD00_PIN            0 
#define PD00_CFG_OFFSET     0 
#define PD00_CFG            PD_CFG0

#define PD01_PIN            1 
#define PD01_CFG_OFFSET     4 
#define PD01_CFG            PD_CFG0

#define PD02_PIN            2 
#define PD02_CFG_OFFSET     8 
#define PD02_CFG            PD_CFG0

#define PD03_PIN            3 
#define PD03_CFG_OFFSET     12
#define PD03_CFG            PD_CFG0

#define PD04_PIN            4 
#define PD04_CFG_OFFSET     16
#define PD04_CFG            PD_CFG0

#define PD05_PIN            5 
#define PD05_CFG_OFFSET     20
#define PD05_CFG            PD_CFG0

#define PD06_PIN            6 
#define PD06_CFG_OFFSET     24
#define PD06_CFG            PD_CFG0

#define PD07_PIN            7 
#define PD07_CFG_OFFSET     28
#define PD07_CFG            PD_CFG0

#define PD08_PIN            8 
#define PD08_CFG_OFFSET     0 
#define PD08_CFG            PD_CFG1

#define PD09_PIN            9 
#define PD09_CFG_OFFSET     4 
#define PD09_CFG            PD_CFG1

#define PD10_PIN            10
#define PD10_CFG_OFFSET     8 
#define PD10_CFG            PD_CFG1

#define PD11_PIN            11
#define PD11_CFG_OFFSET     12
#define PD11_CFG            PD_CFG1

#define PD12_PIN            12
#define PD12_CFG_OFFSET     16
#define PD12_CFG            PD_CFG1

#define PD13_PIN            13
#define PD13_CFG_OFFSET     20
#define PD13_CFG            PD_CFG1

#define PD14_PIN            14
#define PD14_CFG_OFFSET     24
#define PD14_CFG            PD_CFG1

#define PD15_PIN            15
#define PD15_CFG_OFFSET     28
#define PD15_CFG            PD_CFG1

#define PD16_PIN            16
#define PD16_CFG_OFFSET     0 
#define PD16_CFG            PD_CFG2

#define PD17_PIN            17
#define PD17_CFG_OFFSET     4 
#define PD17_CFG            PD_CFG2

// Port E
#define PE00_PIN            0 
#define PE00_CFG_OFFSET     0 
#define PE00_CFG            PE_CFG0

#define PE01_PIN            1 
#define PE01_CFG_OFFSET     4 
#define PE01_CFG            PE_CFG0

#define PE02_PIN            2 
#define PE02_CFG_OFFSET     8 
#define PE02_CFG            PE_CFG0

#define PE03_PIN            3 
#define PE03_CFG_OFFSET     12
#define PE03_CFG            PE_CFG0

#define PE04_PIN            4 
#define PE04_CFG_OFFSET     16
#define PE04_CFG            PE_CFG0

#define PE05_PIN            5 
#define PE05_CFG_OFFSET     20
#define PE05_CFG            PE_CFG0

#define PE06_PIN            6 
#define PE06_CFG_OFFSET     24
#define PE06_CFG            PE_CFG0

#define PE07_PIN            7 
#define PE07_CFG_OFFSET     28
#define PE07_CFG            PE_CFG0

#define PE08_PIN            8 
#define PE08_CFG_OFFSET     0 
#define PE08_CFG            PE_CFG1

#define PE09_PIN            9 
#define PE09_CFG_OFFSET     4 
#define PE09_CFG            PE_CFG1

#define PE10_PIN            10
#define PE10_CFG_OFFSET     8 
#define PE10_CFG            PE_CFG1

#define PE11_PIN            11
#define PE11_CFG_OFFSET     12
#define PE11_CFG            PE_CFG1

#define PE12_PIN            12
#define PE12_CFG_OFFSET     16
#define PE12_CFG            PE_CFG1

#define PE13_PIN            13
#define PE13_CFG_OFFSET     20
#define PE13_CFG            PE_CFG1

#define PE14_PIN            14
#define PE14_CFG_OFFSET     24
#define PE14_CFG            PE_CFG1

#define PE15_PIN            15
#define PE15_CFG_OFFSET     28
#define PE15_CFG            PE_CFG1

// Port F
#define PF00_PIN            0 
#define PF00_CFG_OFFSET     0 
#define PF00_CFG            PF_CFG0

#define PF01_PIN            1 
#define PF01_CFG_OFFSET     4 
#define PF01_CFG            PF_CFG0

#define PF02_PIN            2 
#define PF02_CFG_OFFSET     8 
#define PF02_CFG            PF_CFG0

#define PF03_PIN            3 
#define PF03_CFG_OFFSET     12
#define PF03_CFG            PF_CFG0

#define PF04_PIN            4 
#define PF04_CFG_OFFSET     16
#define PF04_CFG            PF_CFG0

#define PF05_PIN            5 
#define PF05_CFG_OFFSET     20
#define PF05_CFG            PF_CFG0

#define PF06_PIN            6 
#define PF06_CFG_OFFSET     24
#define PF06_CFG            PF_CFG0

// Port G
#define PG00_PIN            0 
#define PG00_CFG_OFFSET     0 
#define PG00_CFG            PG_CFG0

#define PG01_PIN            1 
#define PG01_CFG_OFFSET     4 
#define PG01_CFG            PG_CFG0

#define PG02_PIN            2 
#define PG02_CFG_OFFSET     8 
#define PG02_CFG            PG_CFG0

#define PG03_PIN            3 
#define PG03_CFG_OFFSET     12
#define PG03_CFG            PG_CFG0

#define PG04_PIN            4 
#define PG04_CFG_OFFSET     16
#define PG04_CFG            PG_CFG0

#define PG05_PIN            5 
#define PG05_CFG_OFFSET     20
#define PG05_CFG            PG_CFG0

#define PG06_PIN            6 
#define PG06_CFG_OFFSET     24
#define PG06_CFG            PG_CFG0

#define PG07_PIN            7 
#define PG07_CFG_OFFSET     28
#define PG07_CFG            PG_CFG0

#define PG08_PIN            8 
#define PG08_CFG_OFFSET     0 
#define PG08_CFG            PG_CFG1

#define PG09_PIN            9 
#define PG09_CFG_OFFSET     4 
#define PG09_CFG            PG_CFG1

#define PG10_PIN            10
#define PG10_CFG_OFFSET     8 
#define PG10_CFG            PG_CFG1

#define PG11_PIN            11
#define PG11_CFG_OFFSET     12
#define PG11_CFG            PG_CFG1

#define PG12_PIN            12
#define PG12_CFG_OFFSET     16
#define PG12_CFG            PG_CFG1

#define PG13_PIN            13
#define PG13_CFG_OFFSET     20
#define PG13_CFG            PG_CFG1

// Port L
#define PL00_PIN            0 
#define PL00_CFG_OFFSET     0 
#define PL00_CFG            PL_CFG0

#define PL01_PIN            1 
#define PL01_CFG_OFFSET     4 
#define PL01_CFG            PL_CFG0

#define PL02_PIN            2 
#define PL02_CFG_OFFSET     8 
#define PL02_CFG            PL_CFG0

#define PL03_PIN            3 
#define PL03_CFG_OFFSET     12
#define PL03_CFG            PL_CFG0

#define PL04_PIN            4 
#define PL04_CFG_OFFSET     16
#define PL04_CFG            PL_CFG0

#define PL05_PIN            5 
#define PL05_CFG_OFFSET     20
#define PL05_CFG            PL_CFG0

#define PL06_PIN            6 
#define PL06_CFG_OFFSET     24
#define PL06_CFG            PL_CFG0

#define PL07_PIN            7 
#define PL07_CFG_OFFSET     28
#define PL07_CFG            PL_CFG0

#define PL08_PIN            8 
#define PL08_CFG_OFFSET     0 
#define PL08_CFG            PL_CFG1

#define PL09_PIN            9 
#define PL09_CFG_OFFSET     4 
#define PL09_CFG            PL_CFG1

#define PL10_PIN            10
#define PL10_CFG_OFFSET     8 
#define PL10_CFG            PL_CFG1

#define PL11_PIN            11
#define PL11_CFG_OFFSET     12
#define PL11_CFG            PL_CFG1


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


typedef unsigned long int uword;
typedef signed long int sword;


#endif // ALLWINNER_H2_PLUS_DEFINITIONS_H
