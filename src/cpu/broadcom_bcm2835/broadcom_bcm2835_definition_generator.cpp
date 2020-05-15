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

class pin
{
public:
    int number;
    int offset;
    std::string name;
    std::string offset_str;
    pin(int number) : number(number)
    {
        offset = number % 32;
        name = (number < 10 ? "0" : "") + std::to_string(number);
        offset_str = (offset < 10 ? "0" : "") + std::to_string(offset);
    }
};

static std::ofstream fs("broadcom_bcm2835_definitions.h", std::ios::out | std::ios::binary);

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
    w("");
    w("#define CPU_NAME " + cpu_name);
    w("#define CPU_NAME_LOWER " + cpu_name_lower);
    w("#define CPU_NAME_UPPER " + cpu_name_upper);
    w("");
    w("");
    w("/*");
    w(" * http://www.8iter.ru/datasheets/cpu/Broadcom_BCM2835_datasheet.pdf");
    w(" * Datasheet page 90");
    w(" * Base address offset");
    w(" */");
    w("#define BASE_ADDRESS_GPIO (0x7E200000)");
    w("");
    w("");
    w("/*");
    w(" * Register Name            Offset     Description");
    w(" */");
    w("#define GPFSEL0             0x00    // GPIO Function Select 0 32 R/W");
    w("#define GPFSEL1             0x04    // GPIO Function Select 1 32 R/W");
    w("#define GPFSEL2             0x08    // GPIO Function Select 2 32 R/W");
    w("#define GPFSEL3             0x0C    // GPIO Function Select 3 32 R/W");
    w("#define GPFSEL4             0x10    // GPIO Function Select 4 32 R/W");
    w("#define GPFSEL5             0x14    // GPIO Function Select 5 32 R/W");
    w("");
    w("#define GPSET0              0x1C    // GPIO Pin Output Set 0 32 W");
    w("#define GPSET1              0x20    // GPIO Pin Output Set 1 32 W");
    w("#define GPCLR0              0x28    // GPIO Pin Output Clear 0 32 W");
    w("#define GPCLR1              0x2C    // GPIO Pin Output Clear 1 32 W");
    w("");
    w("#define GPLEV0              0x34    // GPIO Pin Level 0 32 R");
    w("#define GPLEV1              0x38    // GPIO Pin Level 1 32 R");
    w("");
    w("#define GPEDS0              0x40    // GPIO Pin Event Detect Status 0 32 R/W");
    w("#define GPEDS1              0x44    // GPIO Pin Event Detect Status 1 32 R/W");
    w("");
    w("#define GPREN0              0x4C    // GPIO Pin Rising Edge Detect Enable 0 32 R/W");
    w("#define GPREN1              0x50    // GPIO Pin Rising Edge Detect Enable 1 32 R/W");
    w("");
    w("#define GPFEN0              0x58    // GPIO Pin Falling Edge Detect Enable 0 32 R/W");
    w("#define GPFEN1              0x5C    // GPIO Pin Falling Edge Detect Enable 1 32 R/W");
    w("");
    w("#define GPHEN0              0x64    // GPIO Pin High Detect Enable 0 32 R/W");
    w("#define GPHEN1              0x68    // GPIO Pin High Detect Enable 1 32 R/W");
    w("");
    w("#define GPLEN0              0x70    // GPIO Pin Low Detect Enable 0 32 R/W");
    w("#define GPLEN1              0x74    // GPIO Pin Low Detect Enable 1 32 R/W");
    w("");
    w("#define GPAREN0             0x7C    // GPIO Pin Async. Rising Edge Detect 0 32 R/W");
    w("#define GPAREN1             0x80    // GPIO Pin Async. Rising Edge Detect 1 32 R/W");
    w("");
    w("#define GPAFEN0             0x88    // GPIO Pin Async. Falling Edge Detect 0 32 R/W");
    w("#define GPAFEN1             0x8C    // GPIO Pin Async. Falling Edge Detect 1 32 R/W");
    w("");
    w("#define GPPUD               0x94    // GPIO Pin Pull-up/down Enable 32 R/W");
    w("#define GPPUDCLK0           0x98    // GPIO Pin Pull-up/down Enable Clock 0 32 R/W");
    w("#define GPPUDCLK1           0x9C    // GPIO Pin Pull-up/down Enable Clock 1 32 R/W");
    w("");
    w("");
    w("/*");
    w(" * Description");
    w(" * Pin GPFSEL register");
    w(" * Pin offset in GPFSEL register by datasheet");
    w(" * Pin offset in GPFSEL register by style");

    w(" * Pin GPSET register");
    w(" * Pin offset in GPSET register by datasheet");
    w(" * Pin offset in GPSET register by style");

    w(" * Pin GPCLR register");
    w(" * Pin offset in GPCLR register by datasheet");
    w(" * Pin offset in GPCLR register by style");

    w(" * Pin GPLEV register");
    w(" * Pin offset in GPLEV register by datasheet");
    w(" * Pin offset in GPLEV register by style");
    w(" *");
    w(" * Pin name, parameter      Offset");
    w(" */");

    std::vector<pin> pins;
    for(int i = 0; i < 54; i++)
        pins.push_back(pin(i));
    std::for_each(pins.begin(), pins.end(), [](pin p)
    {
		w("");
		w("// Pin " + p.name);
        w("#define P" + p.name + "_GPFSEL_REG          GPFSEL" + std::to_string(p.number / 10));
        w("#define FSEL" + p.name + "                  " + std::to_string((p.number % 10) * 3));
        w("#define P" + p.name + "_GPFSEL_BIT          FSEL" + p.name);

        w("#define P" + p.name + "_GPSET_REG           GPSET" + std::to_string(p.number / 32));
        w("#define SET" + p.name + "                   " + std::to_string(p.number % 32));
        w("#define P" + p.name + "_GPSET_BIT           SET" + p.name);

        w("#define P" + p.name + "_GPCLR_REG           GPCLR" + std::to_string(p.number / 32));
        w("#define CLR" + p.name + "                   " + std::to_string(p.number % 32));
        w("#define P" + p.name + "_GPCLR_BIT           CLR" + p.name);

        w("#define P" + p.name + "_GPLEV_REG           GPLEV" + std::to_string(p.number / 32));
        w("#define LEV" + p.name + "                   " + std::to_string(p.number % 32));
        w("#define P" + p.name + "_GPLEV_BIT           LEV" + p.name);
    });
    w("");
    w("");
    w("/*");
    w(" * GPIO Function Select");
    w(" * Name                     Value");
    w(" */");
    w("#define FSEL_INPUT          0b000");
    w("#define FSEL_OUTPUT         0b001");
    w("#define FSEL_FUNCTION0      0b100");
    w("#define FSEL_FUNCTION1      0b101");
    w("#define FSEL_FUNCTION2      0b110");
    w("#define FSEL_FUNCTION3      0b111");
    w("#define FSEL_FUNCTION4      0b011");
    w("#define FSEL_FUNCTION5      0b010");
    w("");
    w("");
    w("typedef unsigned long int uword;");
    w("typedef signed long int sword;");
    w("");
    w("");
    w("#endif // " + cpu_name_upper + "_DEFINITIONS_H");
}
