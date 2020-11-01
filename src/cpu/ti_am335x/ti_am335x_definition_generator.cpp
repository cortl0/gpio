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

static std::string cpu_name("Texas_Instruments_AM335x");
static std::string cpu_name_lower("ti_am335x");
static std::string cpu_name_upper("TI_AM335X");

class port
{
public:
    int num;
    int pin_count;
    std::string name;
    std::string letter;
    port(int num, std::string letter, int pin_count) : num(num), pin_count(pin_count), name("P" + letter), letter(letter) {}
};

static std::vector<port> p
{
    port(0, "A", 22),
    port(1, "C", 19),

};

static std::ofstream fs(cpu_name_lower + "_definitions.h", std::ios::out | std::ios::binary);

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
    w("#ifndef " + cpu_name_upper + "_DEFINITIONS_H");
    w("#define " + cpu_name_upper + "_DEFINITIONS_H");
    w("");
    w("#define CPU_NAME \"" + cpu_name + "\"");
    w("#define CPU_NAME_LOWER \"" + cpu_name_lower + "\"");
    w("#define CPU_NAME_UPPER \"" + cpu_name_upper + "\"");
    w("");
    w("");
    w("/*");
    w(" * Datasheet: http://8iter.ru/datasheets/cpu/Texas_Instruments_AM335x_and_AMIC110_Sitara_Manual.pdf");
    w(" * Page 4990, 4991, 182, 183, 56");
    w(" *");
    w(" * Description");
    w(" * Base address offset");
    w(" */");
    w("//#define BASE_ADDRESS_GPIO (0x4804C000) // GPIO1");
    w("//#define BASE_ADDRESS_GPIO (0x481AC000) // GPIO2");
    w("#define BASE_ADDRESS_GPIO (0x481AE000) // GPIO3");
    w("");
    w("");
    w("/*");
    w(" * Dataseet: Texas_Instruments_AM335x_Manual.pdf");
    w(" * Page 4990, 4991, 182, 183, 56");
    w(" *");
    w(" * Description");
    w(" * Data input Register");
    w(" * Data output Register");
    w(" * Pin bit offset");
    w(" */");
    w("#define GPIO_DATAIN (0x138)");
    w("#define GPIO_DATAOUT (0x13C)");
    w("#define GPIO0_20_BIT_OFFSET 20");
    w("");
    w("");
    w("#endif // " + cpu_name_upper + "_DEFINITIONS_H");
    fs.close();
    return 0;
}
