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

static std::string cpu_name("Allwinner_H2_plus");
static std::string cpu_name_lower("allwinner_h2_plus");
static std::string cpu_name_upper("ALLWINNER_H2_PLUS");

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
    port(2, "D", 18),
    port(3, "E", 16),
    port(4, "F", 7),
    port(5, "G", 14),
    port(6, "L", 12)
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
    w("");
    w("#define CPU_NAME \"" + cpu_name + "\"");
    w("#define CPU_NAME_LOWER \"" + cpu_name_lower + "\"");
    w("#define CPU_NAME_UPPER \"" + cpu_name_upper + "\"");
    w("");
    w("");
    w("/*");
    w(" * Datasheet: http://8iter.ru/datasheets/cpu/Allwinner_H2+_Datasheet_V1.2.pdf");
    w(" * " + cpu_name + "_Datasheet v1.2");
    w(" * 4.22. Port Controller(CPU-PORT)");
    w(" * Page 317");
    w(" *");
    w(" * The chip has 7 ports for multi-functional input/output pins");
    w(" */");
    w("");
    w("");
    w("// Base address offset");
    w("#define BASE_ADDRESS_GPIO (0x01C20800)");
    w("");
    w("");
    w("// Register Name        Offset                     Description");
    w("#define Pn_CFG0(n)      ((n)*0x24+0x00)         // Port n Configure Register 0 (n from 0 to 6)");
    w("#define Pn_CFG1(n)      ((n)*0x24+0x04)         // Port n Configure Register 1 (n from 0 to 6)");
    w("#define Pn_CFG2(n)      ((n)*0x24+0x08)         // Port n Configure Register 2 (n from 0 to 6)");
    w("#define Pn_CFG3(n)      ((n)*0x24+0x0C)         // Port n Configure Register 3 (n from 0 to 6)");
    w("#define Pn_DAT(n)       ((n)*0x24+0x10)         // Port n Data Register (n from 0 to 6)");
    w("#define Pn_DRV0(n)      ((n)*0x24+0x14)         // Port n Multi-Driving Register 0 (n from 0 to 6)");
    w("#define Pn_DRV1(n)      ((n)*0x24+0x18)         // Port n Multi-Driving Register 1 (n from 0 to 6)");
    w("#define Pn_PUL0(n)      ((n)*0x24+0x1C)         // Port n Pull Register 0 (n from 0 to 6)");
    w("#define Pn_PUL1(n)      ((n)*0x24+0x20)         // Port n Pull Register 1 (n from 0 to 6)");
    w("");
    w("#define PA_INT_CFG0     (0x200+0*0x20+0x00)     // PIO Interrupt Configure Register 0");
    w("#define PA_INT_CFG1     (0x200+0*0x20+0x04)     // PIO Interrupt Configure Register 1");
    w("#define PA_INT_CFG2     (0x200+0*0x20+0x08)     // PIO Interrupt Configure Register 2");
    w("#define PA_INT_CFG3     (0x200+0*0x20+0x0C)     // PIO Interrupt Configure Register 3");
    w("");
    w("#define PA_INT_CTL      (0x200+0*0x20+0x10)     // PIO Interrupt Control Register");
    w("#define PA_INT_STA      (0x200+0*0x20+0x14)     // PIO Interrupt Status Register");
    w("#define PA_INT_DEB      (0x200+0*0x20+0x18)     // PIO Interrupt Debounce Register");
    w("");
    w("#define PG_INT_CFG0     (0x200+1*0x20+0x00)     // PIO Interrupt Configure Register 0");
    w("#define PG_INT_CFG1     (0x200+1*0x20+0x04)     // PIO Interrupt Configure Register 1");
    w("#define PG_INT_CFG2     (0x200+1*0x20+0x08)     // PIO Interrupt Configure Register 2");
    w("#define PG_INT_CFG3     (0x200+1*0x20+0x0C)     // PIO Interrupt Configure Register 3");
    w("");
    w("#define PG_INT_CTL      (0x200+1*0x20+0x10)     // PIO Interrupt Control Register");
    w("#define PG_INT_STA      (0x200+1*0x20+0x14)     // PIO Interrupt Status Register");
    w("#define PG_INT_DEB      (0x200+1*0x20+0x18)     // PIO Interrupt Debounce Register");
    w("");
    w("");
    w("// Port number");
    std::for_each(p.begin(), p.end(), [&](port p)
    {
        w("#define " + p.name + "_NUM          " + std::to_string(p.num));
    });
    w("");
    w("");
    w("// Port pin quantity");
    std::for_each(p.begin(), p.end(), [&](port p)
    {
        w("#define " + p.name + "_PIN_QUANTITY " + std::to_string(p.pin_count));
    });
    w("");
    w("");
    w("// Port configure register offset");
    std::for_each(p.begin(), p.end(), [&](port p)
    {
        for(int i = 0; i < 4; i++)
            w("#define " + p.name + "_CFG" + std::to_string(i) + "         Pn_CFG" + std::to_string(i) + "(" + p.name + "_NUM)         // Port " + p.letter + " Configure Register " + std::to_string(i));
        w("");
    });
    w("");
    w("// Port data register offset");
    std::for_each(p.begin(), p.end(), [&](port p)
    {
        w("#define " + p.name + "_DAT          Pn_DAT(" + p.name + "_NUM)          // Port " + p.letter + " Data Register");
    });
    w("");
    w("");
    w("// Port multi-driving register offset");
    std::for_each(p.begin(), p.end(), [&](port p)
    {
        for(int i = 0; i < 2; i++)
            w("#define " + p.name + "_DRV" + std::to_string(i) + "         Pn_DRV" + std::to_string(i) + "(" + p.name + "_NUM)         // Port " + p.letter + " Multi-Driving Register " + std::to_string(i));
        w("");
    });
    w("");
    w("// Port pull register offset");
    std::for_each(p.begin(), p.end(), [&](port p)
    {
        for(int i = 0; i < 2; i++)
            w("#define " + p.name + "_PUL" + std::to_string(i) + "         Pn_PUL" + std::to_string(i) + "(" + p.name + "_NUM)         // Port " + p.letter + " Pull Register " + std::to_string(i));
        w("");
    });

//    w("");
//    w("// Port external interrupt configure register offset");
//    std::for_each(p.begin(), p.end(), [&](port p)
//    {
//        if(p.name[1] == 'A' || p.name[1] == 'G')
//        {
//            for(int i = 0; i < 4; i++)
//                w("#define " + p.name + "_EINT_CFG" + std::to_string(i) + "         Pn_PUL" + std::to_string(i) + "(" + p.name + "_NUM)         // Port " + p.letter + " External Interrupt Configure Register " + std::to_string(i));
//            w("");
//        }
//    });
    //PA_EINT_CFG0_REG

    w("");
    w("/*");
    w(" * Description:");
    w(" * Configure register");
    w(" * Bit offset in configure register");
    w(" * Data register");
    w(" * Bit offset in data register");
    w(" * Pull register");
    w(" * Bit offset in pull register");
    w(" */");
    w("");
    std::string s0;
    std::string s1;
    std::string s2;
    std::for_each(p.begin(), p.end(), [&](port p)
    {
        w("// Port " + p.letter);
        for(int i = 0; i < p.pin_count; i++)
        {
            if(i < 10)
                s0 = "0";
            else
                s0 = "";
            if(i < 10)
                s1 = " ";
            else
                s1 = "";
            if(i % 8 * 4 < 10)
                s2 = " ";
            else
                s2 = "";
            w("#define " + p.name + s0 + std::to_string(i) + "_CFG_REG        " + p.name + "_CFG" + std::to_string(i / 8));
            w("#define " + p.name + s0 + std::to_string(i) + "_CFG_BIT        " + std::to_string(i % 8 * 4));
            w("#define " + p.name + s0 + std::to_string(i) + "_DAT_REG        " + p.name + "_DAT");
            w("#define " + p.name + s0 + std::to_string(i) + "_DAT_BIT        " + std::to_string(i));
            w("#define " + p.name + s0 + std::to_string(i) + "_PUL_REG        " + p.name + "_PUL" + std::to_string(i / 16));
            w("#define " + p.name + s0 + std::to_string(i) + "_PUL_BIT        " + std::to_string(i % 16 * 2));

            if(p.name[1] == 'A' || p.name[1] == 'G' || p.name[1] == 'L')
            {
                w("#define " + p.name + s0 + std::to_string(i) + "_EINT_CFG_REG   " + p.name + "_INT_CFG" + std::to_string(i / 8));
                w("#define " + p.name + s0 + std::to_string(i) + "_EINT_CFG_BIT   " + std::to_string(i % 8 * 4));
            }
            w("");
        }
    });
    w("");
    w("/*");
    w(" * Port configure value");
    w(" * P_SELECT_OPTION(2...6) see in Allwinner H2+ Datasheet");
    w(" * 4.22.2. Port Controller Register Description");
    w(" * Page 318");
    w(" * Default value is P_SELECT_DISABLE");
    w(" */");
    w("#define P_SELECT_INPUT      0b000");
    w("#define P_SELECT_OUTPUT     0b001");
    w("#define P_SELECT_OPTION2    0b010");
    w("#define P_SELECT_OPTION3    0b011");
    w("#define P_SELECT_OPTION4    0b100");
    w("#define P_SELECT_OPTION5    0b101");
    w("#define P_SELECT_OPTION6    0b110");
    w("#define P_SELECT_DISABLE    0b111");
    w("#define P_SELECT_LENGTH     3");
    w("");
    w("");
    w("/*");
    w(" * Pull-up/down Select");
    w(" * Default value is P_PULL_DISABLE");
    w(" */");
    w("#define P_PULL_DISABLE      0b00");
    w("#define P_PULL_UP           0b01");
    w("#define P_PULL_DOWN         0b10");
    w("#define P_PULL_LENGTH       3");
    w("");

    w("");
    w("/*");
    w(" * Port external interrupt mode");
    w(" * P_SELECT_OPTION(2...6) see in Allwinner H2+ Datasheet");
    w(" * 4.22.2.55. Port External Configute Register");
    w(" * Page 341");
    w(" * Default value is P_EINT_MODE_POSITIVE_EDGE");
    w(" */");
    w("#define P_EINT_MODE_POSITIVE_EDGE   0b000");
    w("#define P_EINT_MODE_NEGATIVE_EDGE   0b001");
    w("#define P_EINT_MODE_HIGH_LEVEL      0b010");
    w("#define P_EINT_MODE_LOW_LEVEL       0b011");
    w("#define P_EINT_MODE_DOUBLE_EDGE     0b100");
    w("#define P_EINT_MODE_LENGTH          3");
    w("");

    w("");
    w("typedef unsigned long int uword;");
    w("typedef signed long int sword;");
    w("");
    w("");
    w("#endif // " + cpu_name_upper + "_DEFINITIONS_H");
    fs.close();
    return 0;
}
