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
        std::string name;
        std::string offset;
        pin(std::string name, std::string offset)
            : name(name), offset(offset) {}
    };
    std::string name;
    std::string offset;
    std::vector<pin> pins;
    connector(std::string port_name, std::string offset, std::vector<pin> pins)
        : name(port_name), offset(offset), pins(pins) {}
};

static std::vector<connector> con
{
    connector("J8", "GPIO0", std::vector<connector::pin>{
                  connector::pin("03", "GPIO0_02"),
                  connector::pin("05", "GPIO0_03"),
                  connector::pin("07", "GPIO0_04"),
                  connector::pin("08", "GPIO0_14"),
                  connector::pin("10", "GPIO0_15"),
                  connector::pin("11", "GPIO0_17"),
                  connector::pin("12", "GPIO0_18"),
                  connector::pin("13", "GPIO0_27"),
                  connector::pin("15", "GPIO0_22"),
                  connector::pin("16", "GPIO0_23"),
                  connector::pin("18", "GPIO0_24"),
                  connector::pin("19", "GPIO0_10"),
                  connector::pin("21", "GPIO0_09"),
                  connector::pin("22", "GPIO0_25"),
                  connector::pin("23", "GPIO0_11"),
                  connector::pin("24", "GPIO0_08"),
                  connector::pin("26", "GPIO0_07"),
                  connector::pin("27", "ID_SD"),
                  connector::pin("28", "ID_SC"),
                  connector::pin("29", "GPIO0_05"),
                  connector::pin("31", "GPIO0_06"),
                  connector::pin("32", "GPIO0_12"),
                  connector::pin("33", "GPIO0_13"),
                  connector::pin("35", "GPIO0_19"),
                  connector::pin("36", "GPIO0_16"),
                  connector::pin("37", "GPIO0_38"),
                  connector::pin("38", "GPIO0_20"),
                  connector::pin("40", "GPIO0_21")
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
    w(" * Datasheet reference");
    w(" * Datasheet page number");
    w(" *");
    w(" * Description:");
    w(" * Pin num (bit offset in data register)");
    w(" * Data register offset");
    w(" */");

    std::for_each(con.begin(), con.end(), [](connector& c){
        std::for_each(c.pins.begin(), c.pins.end(), [&](connector::pin& p){
            w("#define " + c.name + "_" + p.name + "_BIT_OFFSET 0");
        });
    });


    w("");
    w("#endif // " + board_name_upper + "_DEFINITIONS_H");
}
