/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#include "cpu.h"

cpu::cpu()
{
    if(init())
        throw std::runtime_error("cpu::cpu() - init failed\nmaybe the target system does not match the current");
}

cpu::~cpu()
{
    release_resourses();
}

int cpu::init()
{
    uword page_size = static_cast<uword>(sysconf(_SC_PAGESIZE));
    uword page_mask = ~(page_size - 1);
    uword addr_start = BASE_ADDRESS_GPIO & page_mask;
    uword addr_start_offset = BASE_ADDRESS_GPIO & (~page_mask);

    block_size = page_size;

    std::cout << "page_size = \t\t" << reinterpret_cast<uword*>(page_size) << std::endl;
    std::cout << "page_mask = \t\t" << reinterpret_cast<uword*>(page_mask) << std::endl;
    std::cout << "block_size = \t\t" << reinterpret_cast<uword*>(block_size) << std::endl;
    std::cout << "addr_start = \t\t" << reinterpret_cast<uword*>(addr_start) << std::endl;
    std::cout << "addr_start_offset = \t" << reinterpret_cast<uword*>(addr_start_offset) << std::endl;

    int fd = open ("/dev/mem", O_RDWR | O_SYNC);
    
    if (-1 == fd)
    {
        std::cout << "cpu::init() - unable to open /dev/mem: " << std::strerror (errno) << std::endl;
        return -1 ;
    }
    
    gpio_mem = reinterpret_cast<uint8_t*>(std::malloc (block_size + (page_size - 1)));
    
    if(nullptr == gpio_mem)
    {
        std::cout << "cpu::init() - malloc failed: " << std::strerror (errno) << std::endl;
        close(fd);
        return -1 ;
    }
    
    gpio_mmap = gpio_mem;

    if (0 != reinterpret_cast<uword>(gpio_mmap) % page_size)
        gpio_mmap += page_size - (reinterpret_cast<uword>(gpio_mmap) % page_size);

    gpio = reinterpret_cast<uword>(mmap(gpio_mmap, block_size, PROT_READ|PROT_WRITE, MAP_SHARED|MAP_FIXED, fd, static_cast<__off_t>(addr_start)));

    if (MAP_FAILED == reinterpret_cast<void*>(gpio))
    {
        std::cout << "cpu::init() - mmap failed: " << std::strerror (errno) << std::endl;
        std::free(gpio_mem);
        close(fd);
        return -1 ;
    }

    gpio = gpio + addr_start_offset;

    std::cout << "gpio = \t\t\t" << reinterpret_cast<uword*>(gpio) << std::endl;

    close(fd);

    return 0;
}

int cpu::release_resourses()
{
    int return_value = 0;

    if (MAP_FAILED == reinterpret_cast<void*>(munmap(gpio_mmap, block_size)))
    {
        std::cout << "cpu::release_resourses() - munmap failed: " << std::strerror (errno) << std::endl;
        return_value = -1;
    }

    std::free(gpio_mem);

    return return_value;
}

bool cpu::read_bit(uword memory_offset, uword bit_offset)
{
    return *reinterpret_cast<uword*>(gpio + memory_offset) & 1 << bit_offset;
}

void cpu::write_bit(uword memory_offset, uword bit_offset, bool value)
{
    (*reinterpret_cast<uword*>(gpio + memory_offset) &= ~(static_cast<uword>(1) << bit_offset)) |= static_cast<uword>(value) << bit_offset;
}

uword cpu::read_bits(uword memory_offset, uword bit_offset, uword length)
{
    return *reinterpret_cast<uword*>(gpio + memory_offset) >> bit_offset & ~uword(0) >> (sizeof(uword) * 8 - length);
}

void cpu::write_bits(uword memory_offset, uword bit_offset, uword value, uword value_length)
{
    // Attention! The length of the value is not controlled. Specify the value_length explicitly
    (*reinterpret_cast<uword*>(gpio + memory_offset) &= ~((~uword(0) >> (sizeof(uword) * 8 - value_length)) << bit_offset)) |= value << bit_offset;
}

u_int8_t cpu::read_byte(u_int8_t memory_offset)
{
    return *reinterpret_cast<u_int8_t*>(static_cast<u_int8_t>(gpio) + memory_offset);
}

void cpu::write_byte(u_int8_t memory_offset, u_int8_t value)
{
    *reinterpret_cast<u_int8_t*>(static_cast<u_int8_t>(gpio) + memory_offset) = value;
}

uword cpu::read_full_reg(uword memory_offset)
{
    return *reinterpret_cast<uword*>(gpio + memory_offset);
}

void cpu::write_full_reg(uword memory_offset, uword value)
{
    *reinterpret_cast<uword*>(gpio + memory_offset) = value;
}
