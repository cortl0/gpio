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

static std::string cpu_name("Broadcom_BCM2835");
static std::string cpu_name_lower("broadcom_bcm2835");
static std::string cpu_name_upper("BROADCOM_BCM2835");

class port
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
    port(std::string port_name, std::string offset, std::vector<pin> pins)
        : name(port_name), offset(offset), pins(pins) {}
};

static std::vector<port> ports;

static std::ofstream fs("broadcom_bcm2835_definitions.h", std::ios::out | std::ios::binary);

static void w(std::string s)
{
    s.push_back('\n');
    fs.write(s.c_str(), static_cast<long>(s.size()));
}

int main()
{
    ports.push_back(port("GPLEV0", "0x34", std::vector<port::pin>()));
    ports.push_back(port("GPLEV1", "0x38", std::vector<port::pin>()));

    int count = 0;
    std::for_each(ports.begin(), ports.end(), [&](port& p)
    {
        for(int i = 0; i < 32; i++)
        {
            std::string pin_bit_num = std::to_string(i);
            std::string pin_bit_num_str = (i < 10 ? "0" : "") + pin_bit_num;
            if (count < 54)
            {
                p.pins.push_back(port::pin(p.name + "_"
                                           + (count < 10 ? "0" : "") + std::to_string(count),
                                           (i < 10 ? "0" : "") + std::to_string(i)));
            }
            count++;
        }
    });

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
    w("");
    w("#define CPU_NAME " + cpu_name);
    w("#define CPU_NAME_LOWER " + cpu_name_lower);
    w("#define CPU_NAME_UPPER " + cpu_name_upper);
    w("");
    w("");
    w("/*");
    w(" * http://www.8iter.ru/datasheets/cpu/Broadcom_BCM2835_datasheet.pdf");
    w(" * Page 89");
    w(" * Base address offset");
    w(" */");
    w("#define BASE_ADDRESS_GPIO (0x7E200000)");
    w("");
    w("");

    w("/*");
    //w(" * Datasheet page number");
    w(" * Register Name            Offset");
    w(" */");

    std::for_each(ports.begin(), ports.end(), [](port p)
    {
        w("#define " + p.name + "              " + p.offset);
    });

    w("");
    w("");
    w("/*");
    //w(" * Datasheet page number");
    w(" * Pin Name                 Offset");
    w(" */");

    int gplev = 0;
    int gpfsel = 0;
    std::for_each(ports.begin(), ports.end(), [](port prt)
    {
        w("");
        w("// " + prt.name);
        std::for_each(prt.pins.begin(), prt.pins.end(), [](port::pin pn)
        {
            w("#define " + pn.name + "_OFFSET    " + pn.offset);


            //GPFSEL0-5
        });
    });
    w("");
    w("");
    w("// Function Select");
    w("#define FSEL_INPUT      0b000");
    w("#define FSEL_OUTPUT     0b001");
    w("#define FSEL_FUNCTION0  0b100");
    w("#define FSEL_FUNCTION1  0b101");
    w("#define FSEL_FUNCTION2  0b110");
    w("#define FSEL_FUNCTION3  0b111");
    w("#define FSEL_FUNCTION4  0b011");
    w("#define FSEL_FUNCTION5  0b010");

    w("");
    w("");
    w("typedef unsigned long int uword;");
    w("typedef signed long int sword;");
    w("");
    w("");
    w("#endif // " + cpu_name_upper + "_DEFINITIONS_H");
}
