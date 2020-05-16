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

#include "../../cpu/allwinner_h2_plus/allwinner_h2_plus_definitions.h"

static std::string board_name("BPI_P2_Zero");
static std::string board_name_lower("bpi_p2_zero");
static std::string board_name_upper("BPI_P2_ZERO");

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
    pin( 7, "A",  6),
    pin( 8, "A", 13),
    pin(10, "A", 14),
    pin(11, "A",  1),
    pin(12, "A", 16),
    pin(13, "A",  0),
    pin(15, "A",  3),
    pin(16, "A", 15),
    pin(18, "C",  4),
    pin(19, "C",  0),
    pin(21, "C",  1),
    pin(22, "A",  2),
    pin(23, "C",  2),
    pin(24, "C",  3),
    pin(26, "C",  7),
    pin(27, "A", 19),
    pin(28, "A", 18),
    pin(29, "A",  7),
    pin(31, "A",  8),
    pin(32, "L",  2),
    pin(33, "A",  9),
    pin(35, "A", 10),
    pin(36, "L",  4),
    pin(37, "A", 17),
    pin(38, "A", 21),
    pin(40, "A", 20)
};

static std::ofstream fs("bpi_p2_zero_definitions.h", std::ios::out | std::ios::binary);

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
    w("#define BOARD_NAME " + board_name);
    w("#define BOARD_NAME_LOWER " + board_name_lower);
    w("#define BOARD_NAME_UPPER " + board_name_upper);
    w("");
    w("/*");
    w(" * Datasheet: http://8iter.ru/datasheets/board/BananaPI_P2_Zero_Datasheet_v1_0.pdf");
    w(" * CON2 DIP40-254");
    w(" * Sheet 7");
    w(" *");
    w(" * Description:");
    w(" * Configure register");
    w(" * Bit offset in configure register");
    w(" * Data register");
    w(" * Bit offset in data register");
    w(" * Pull register");
    w(" * Bit offset in pull register");
    w(" */");
    std::for_each(p.begin(), p.end(), [&](pin p)
    {
        w("");
        w("// " + p.name);
        w("#define " + p.name + "_CFG_REG            " + p.port_name + p.port_pin_num_str + "_CFG_REG");
        w("#define " + p.name + "_CFG_BIT            " + p.port_name + p.port_pin_num_str + "_CFG_BIT");
        w("#define " + p.name + "_DAT_REG            " + p.port_name + p.port_pin_num_str + "_DAT_REG");
        w("#define " + p.name + "_DAT_BIT            " + p.port_name + p.port_pin_num_str + "_DAT_BIT");
        w("#define " + p.name + "_PUL_REG            " + p.port_name + p.port_pin_num_str + "_PUL_REG");
        w("#define " + p.name + "_PUL_BIT            " + p.port_name + p.port_pin_num_str + "_PUL_BIT");
    });
    w("");
    w("#endif // " + board_name_upper + "_DEFINITIONS_H");
    fs.close();
    return 0;
}
