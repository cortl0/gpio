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

#include "../../cpu/broadcom_bcm2835/broadcom_bcm2835_definitions.h"

static std::string board_name("Raspberry_Pi_Zero_r1_3");
static std::string board_name_lower("raspberry_pi_zero_r1_3");
static std::string board_name_upper("RASPBERRY_PI_ZERO_R1_3");

class connector
{
public:
    class pin
    {
    public:
        int number;
        int offset;
        std::string name;
        std::string offset_str;
        std::string cpu_pin;
        pin(int number, std::string cpu_pin) : number(number), cpu_pin(cpu_pin)
        {
            offset = number % 32;
            name = "P" + ((number < 10 ? "0" : "") + std::to_string(number));
            offset_str = (offset < 10 ? "0" : "") + std::to_string(offset);
        }
    };
    std::string name;
    std::vector<pin> pins;
    connector(std::string name, std::vector<pin> pins)
        : name(name), pins(pins) {}
};

static std::vector<connector> con
{
    connector("J8", std::vector<connector::pin>{
                  connector::pin(3, "P02"),
                  connector::pin(5, "P03"),
                  connector::pin(7, "P04"),
                  connector::pin(8, "P14"),
                  connector::pin(10, "P15"),
                  connector::pin(11, "P17"),
                  connector::pin(12, "P18"),
                  connector::pin(13, "P27"),
                  connector::pin(15, "P22"),
                  connector::pin(16, "P23"),
                  connector::pin(18, "P24"),
                  connector::pin(19, "P10"),
                  connector::pin(21, "P09"),
                  connector::pin(22, "P25"),
                  connector::pin(23, "P11"),
                  connector::pin(24, "P08"),
                  connector::pin(26, "P07"),
                  //connector::pin(27, "ID_SD"),
                  //connector::pin(28, "ID_SC"),
                  connector::pin(29, "P05"),
                  connector::pin(31, "P06"),
                  connector::pin(32, "P12"),
                  connector::pin(33, "P13"),
                  connector::pin(35, "P19"),
                  connector::pin(36, "P16"),
                  connector::pin(37, "P38"),
                  connector::pin(38, "P20"),
                  connector::pin(40, "P21")
              })
};

static std::ofstream fs("raspberry_pi_zero_r1_3_definitions.h", std::ios::out | std::ios::binary);

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
    std::string path_header;
    path_header.push_back(34);
    path_header += "../../cpu/broadcom_bcm2835/broadcom_bcm2835_definitions.h";
    path_header.push_back(34);
    w("#include " + path_header);
    w("");
    w("#define BOARD_NAME " + board_name);
    w("#define BOARD_NAME_LOWER " + board_name_lower);
    w("#define BOARD_NAME_UPPER " + board_name_upper);
    w("");
    w("");
    w("/*");
    w(" * Datasheet http://8iter.ru/datasheets/board/Raspberry_Pi_Zero_r1_3_Datasheet.pdf");
    w(" * Datasheet page number");
    w(" *");
    w(" * Description:");
    w(" * Pin num (bit offset in data register)");
    w(" * Data register offset");
    w(" */");

    std::for_each(con.begin(), con.end(), [](connector& c){
        std::for_each(c.pins.begin(), c.pins.end(), [&](connector::pin& p){
            w("");
            w("// " + c.name + "_" + p.name);
            w("#define " + c.name + "_" + p.name + "_GPFSEL_REG       " + p.cpu_pin + "_GPFSEL_REG");
            w("#define " + c.name + "_" + p.name + "_GPFSEL_BIT       " + p.cpu_pin + "_GPFSEL_BIT");

            w("#define " + c.name + "_" + p.name + "_GPSET_REG        " + p.cpu_pin + "_GPSET_REG");
            w("#define " + c.name + "_" + p.name + "_GPSET_BIT        " + p.cpu_pin + "_GPSET_BIT");

            w("#define " + c.name + "_" + p.name + "_GPCLR_REG        " + p.cpu_pin + "_GPCLR_REG");
            w("#define " + c.name + "_" + p.name + "_GPCLR_BIT        " + p.cpu_pin + "_GPCLR_BIT");

            w("#define " + c.name + "_" + p.name + "_GPLEV_REG        " + p.cpu_pin + "_GPLEV_REG");
            w("#define " + c.name + "_" + p.name + "_GPLEV_BIT        " + p.cpu_pin + "_GPLEV_BIT");
        });
    });

    w("");
    w("#endif // " + board_name_upper + "_DEFINITIONS_H");
}
