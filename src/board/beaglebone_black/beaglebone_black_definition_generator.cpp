/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

#include "../../cpu/ti_am335x/ti_am335x_definitions.h"

static std::string board_name("Beaglebone_Black");
static std::string board_name_lower("beaglebone_black");
static std::string board_name_upper("BEAGLEBONE_BLACK");

class pin
{
public:
    int num;
    int port_pin_num;
    std::string name;
    std::string port_pin_num_str;
    std::string port_letter;
    std::string port_name;
    pin(int num, std::string port_letter, int port_pin_num)
        : num(num), port_pin_num(port_pin_num), port_letter(port_letter), port_name("P" + port_letter)
    {
        if (num < 10)
            name = "CON2_P0" + std::to_string(num);
        else
            name = "CON2_P" + std::to_string(num);
        if (port_pin_num < 10)
            port_pin_num_str = "0" + std::to_string(port_pin_num);
        else
            port_pin_num_str = "" + std::to_string(port_pin_num);
    }
};

static std::vector<pin> p
{
    pin( 3, "A", 12),
            pin( 5, "A", 11),
};

static std::ofstream fs(board_name_lower + "_definitions.h", std::ios::out | std::ios::binary);

static void w(std::string s)
{
    s.push_back('\n');
    fs.write(s.c_str(), static_cast<long>(s.size()));
}

int main()
{
    w("/*");
    w(" *   gpio");
    w(" *   created by Ilya Shishkin");
    w(" *   cortl@8iter.ru");
    w(" *   https://github.com/cortl0/gpio");
    w(" *   licensed by GPL v3.0");
    w(" */");
    w("");
    w("#ifndef " + board_name_upper + "_DEFINITIONS_H");
    w("#define " + board_name_upper + "_DEFINITIONS_H");
    w("");
    std::string s("#include \"../../cpu/");
    s += CPU_NAME_LOWER;
    s += "/";
    s += CPU_NAME_LOWER;
    s += "_definitions.h\"";
    w(s);
    w("");
    w("/*");
    w(" * Datasheet: http://8iter.ru/datasheets/board/BeagleBone_Black_Datasheet.pdf");
//    w(" * Dataseet: Texas_Instruments_AM335x_Manual.pdf");
//    w(" * Page 4990, 183");
//    w(" *");
//    w(" * Description");
//    w(" * Data input Register");
//    w(" * Data output Register");
//    w(" * Pin bit offset");
    w(" */");
    w("#define P9_41_GPIO_DATAIN           GPIO_DATAIN");
    w("#define P9_41_GPIO_DATAOUT          GPIO_DATAOUT");
    w("#define P9_41_BIT_OFFSET            GPIO0_20_BIT_OFFSET");

    w("");
    w("#endif // " + board_name_upper + "_DEFINITIONS_H");
    fs.close();
    return 0;
}
