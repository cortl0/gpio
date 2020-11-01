#ifndef CPU_CONFIG_H
#define CPU_CONFIG_H

#include<stdint.h>

#define CPU_SAFE_MODE

// Logic level
#define LOW     0
#define HIGH    1


// Choose one

//#include "board/beaglebone_black/beaglebone_black_definitions.h"
#include "board/bpi_p2_zero/bpi_p2_zero_definitions.h"
//#include "board/raspberry_pi_zero_r1_3/raspberry_pi_zero_r1_3_definitions.h"

//#include "cpu/allwinner_h2_plus/allwinner_h2_plus_definitions.h"
//#include "cpu/broadcom_bcm2835/broadcom_bcm2835_definitions.h"
//#include "cpu/ti_am335x/ti_am335x_definitions.h"

// for debug template
//#include "cpu/cpu_template/cpu_template_definitions.h"
//#include "board/board_template/board_template_definitions.h"


//typedef uint16_t uword;
//typedef uint32_t uword;
//typedef uint64_t uword;
typedef unsigned long int uword;

//typedef int16_t sword;
//typedef int32_t sword;
//typedef int64_t sword;
typedef signed int sword;

#endif // CPU_CONFIG_H
