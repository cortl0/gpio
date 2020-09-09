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
#include <mutex>
#include <stdexcept>

#include "config.h"

// Logic level
#define LOW     0
#define HIGH    1

namespace gpio
{

class cpu
{
    uword block_size;
    uint8_t *gpio_mem;
    uint8_t *gpio_mmap;
    uword gpio;

#ifdef CPU_SAFE_MODE
    std::mutex mtx;
#endif

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

} // !namespace gpio

#endif // CPU_H
