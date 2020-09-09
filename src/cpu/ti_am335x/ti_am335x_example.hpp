/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef TI_AM335X_EXAMPLE_HPP
#define TI_AM335X_EXAMPLE_HPP

#include <bitset>
#include <iostream>

#include "../../cpu.h"

//using namespace std;
//int main(){
//    string binary_str("11001111");
//    bitset<8> set(binary_str);

void example()
{
    std::cout << "Texas Instruments AM335x" << std::endl;
    std::cout << "read ftom GPIO0_20" << std::endl;

    gpio::cpu _cpu;

    while (1)
    {
            std::cout << std::to_string(_cpu.read_bit(GPIO_DATAIN, GPIO0_20_BIT_OFFSET)) << std::endl;

            sleep(1);
    }

    //        std::cout << "0x138 = " << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x138));
    //        std::cout << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x139)) << std::endl;
    //        std::cout << "0x13A = " << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x13A));
    //        std::cout << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x13B)) << std::endl;

    //        std::cout << "0x138 = " << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x138)) << std::endl;
    //        std::cout << "0x139 = " << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x139)) << std::endl;
    //        std::cout << "0x13A = " << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x13A)) << std::endl;
    //        std::cout << "0x13B = " << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x13B)) << std::endl;

    //        std::cout << "0x138 = " << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x138));
    //        std::cout << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x139)) << std::endl;
    //        std::cout << "0x13A = " << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x13A));
    //        std::cout << std::bitset<sizeof(uword) * 8>(_cpu.read_full_reg(0x13B)) << std::endl;


    return;

}

#endif // TI_AM335X_EXAMPLE_HPP
