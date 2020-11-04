#ifndef CPU_CONFIG_H
#define CPU_CONFIG_H

#include <stdint.h>

#define CPU_SAFE_MODE

//typedef uint16_t uword;
//typedef uint32_t uword;
//typedef uint64_t uword;
typedef unsigned long int uword;

//typedef int16_t sword;
//typedef int32_t sword;
//typedef int64_t sword;
typedef signed int sword;

// Logic level
#define LOW     0
#define HIGH    1

// for debug template
//#include "cpu/cpu_template/cpu_template_definitions.h"
//#include "board/board_template/board_template_definitions.h"

#endif // CPU_CONFIG_H
