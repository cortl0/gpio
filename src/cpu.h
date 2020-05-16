/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef CPU_H
#define CPU_H

#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stdexcept>

// Logic level
#define LOW     0
#define HIGH    1


// Pick one

#include "board/beaglebone_black/beaglebone_black_definitions.h"
//#include "board/bpi_p2_zero/bpi_p2_zero_definitions.h"
//#include "board/raspberry_pi_zero_r1_3/raspberry_pi_zero_r1_3_definitions.h"

//#include "cpu/allwinner_h2_plus/allwinner_h2_plus_definitions.h"
//#include "cpu/broadcom_bcm2835/broadcom_bcm2835_definitions.h"
//#include "cpu/ti_am335x/ti_am335x_definitions.h"

// for debug template
//#include "cpu/cpu_template/cpu_template_definitions.h"
//#include "board/board_template/board_template_definitions.h"


class cpu
{
    uword block_size;
    uint8_t *gpio_mem;
    uint8_t *gpio_mmap;
    uword gpio;
    int init();
    int release_resourses();
public:
    cpu();
    ~cpu();
    bool       read_bit(uword    memory_offset, uword bit_offset);
    void      write_bit(uword    memory_offset, uword bit_offset, bool  value);
    uword     read_bits(uword    memory_offset, uword bit_offset, uword length);
    void     write_bits(uword    memory_offset, uword bit_offset, uword value, uword value_length);
    u_int8_t  read_byte(u_int8_t memory_offset);
    void     write_byte(u_int8_t memory_offset, u_int8_t  value);
    uword read_full_reg(uword    memory_offset);
    void write_full_reg(uword    memory_offset, uword value);
};

#endif // CPU_H
