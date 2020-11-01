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
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

static std::ofstream ofs;

static std::string cpu_name;
static std::string cpu_name_lower;
static std::string cpu_name_upper;

static std::string board_cpu_name;
static std::string board_name;
static std::string board_name_lower;
static std::string board_name_upper;

static std::vector<std::string> head_cpp
{
    "/*",
    " *   gpio",
    " *   created by Ilya Shishkin",
    " *   cortl@8iter.ru",
    " *   https://github.com/cortl0/gpio",
    " *   licensed by GPL v3.0",
    " */"
};

static std::vector<std::string> head_make
{
    "#",
    "#   gpio",
    "#   created by Ilya Shishkin",
    "#   cortl@8iter.ru",
    "#   https://github.com/cortl0/gpio",
    "#   licensed by GPL v3.0",
    "#"
};

void w(std::string s)
{
    s.push_back('\n');
    ofs.write(s.c_str(), static_cast<long>(s.size()));
}

void create_cpu_definition_generator_cpp()
{
    ofs = std::ofstream("../cpu/" + cpu_name_lower + "/" + cpu_name_lower + "_definition_generator.cpp", std::ios::out | std::ios::binary);
    std::for_each(head_cpp.begin(), head_cpp.end(), [](std::string h){
        w(h);
    });
    w("");
    w("#include <algorithm>");
    w("#include <fstream>");
    w("#include <iostream>");
    w("#include <vector>");
    w("");
    w("static std::string cpu_name(\"" + cpu_name + "\");");
    w("static std::string cpu_name_lower(\"" + cpu_name_lower + "\");");
    w("static std::string cpu_name_upper(\"" + cpu_name_upper + "\");");
    w("");
    w("class port");
    w("{");
    w("public:");
    w("    class pin");
    w("    {");
    w("    public:");
    w("        std::string name;");
    w("        std::string offset;");
    w("        pin(std::string name, std::string offset)");
    w("            : name(name), offset(offset) {}");
    w("    };");
    w("    std::string name;");
    w("    std::string offset;");
    w("    std::vector<pin> pins;");
    w("    port(std::string port_name, std::string offset, std::vector<pin> pins)");
    w("        : name(port_name), offset(offset), pins(pins) {}");
    w("};");
    w("");
    w("static std::vector<port> ports");
    w("{");
    w("    port(\"GPIO0\", \"0x0\", std::vector<port::pin>");
    w("        {");
    w("             port::pin(\"0\", \"0x0\")");
    w("         })");
    w("};");
    w("");
    w("static std::ofstream fs(\"" + cpu_name_lower + "_definitions.h\", std::ios::out | std::ios::binary);");
    w("");
    w("static void w(std::string s)");
    w("{");
    w("    s.push_back(\'\\n\');");
    w("    fs.write(s.c_str(), static_cast<long>(s.size()));");
    w("}");
    w("");
    w("int main()");
    w("{");
    std::for_each(head_cpp.begin(), head_cpp.end(), [](std::string h){
        w("    w(\"" + h + "\");");
    });
    w("    w(\"\");");
    w("    w(\"#ifndef \" + cpu_name_upper + \"_DEFINITIONS_H\");");
    w("    w(\"#define \" + cpu_name_upper + \"_DEFINITIONS_H\");");
    w("    w(\"\");");
    w("    w(\"\");");
    w("    w(\"#define CPU_NAME         \" + cpu_name);");
    w("    w(\"#define CPU_NAME_LOWER   \" + cpu_name_lower);");
    w("    w(\"#define CPU_NAME_UPPER   \" + cpu_name_upper);");
    w("    w(\"\");");
    w("    w(\"\");");
    w("    w(\"/*\");");
    w("    w(\" * Datasheet: http://8iter.ru/datasheets/cpu/\" + cpu_name + \"_Datasheet.pdf\");");
    w("    w(\" * Datasheet page number\");");
    w("    w(\" * Base address offset\");");
    w("    w(\" */\");");
    w("    w(\"#define BASE_ADDRESS_GPIO (0x0)\");");
    w("    w(\"\");");
    w("    w(\"\");");
    w("    w(\"/*\");");
    w("    w(\" * Datasheet page number\");");
    w("    w(\" * Register Name            Offset\");");
    w("    w(\" */\");");


//    w("std::for_each(ports.begin(), ports.end(), [](port& p){");
//    w("    #define \" + p.name + \"               \" + p.offset);");
//    w("});");
//    w("");
//    w("");
//    w("/*");
//    w(" * Datasheet page number");
//    w(" * Pin Name                 Offset");
//    w(" */");
//    w("std::for_each(ports[0].pins.begin(), ports[0].pins.end(), [](port::pin& p){");
//    w("    #define GPIO0_\" + p.name + \"               \" + p.offset);");
//    w("});");
    w("    w(\"\");");
    w("    w(\"\");");
    w("    w(\"// Register name            Offset\");");
    w("    w(\"#define GPIO0               0x0\");");
    w("    w(\"\");");
    w("    w(\"\");");
    w("    w(\"// Pin name, parameter      Offset\");");
    w("    w(\"\");");
    w("    w(\"// Pin data registor\");");
    w("    w(\"#define PORT0_PIN00_DATA_REG    0x0\");");
    w("    w(\"// Pin offset in registor\");");
    w("    w(\"#define PORT0_PIN00_DATA_BIT    0x0\");");
    w("    w(\"\");");
    w("    w(\"// Pin data registor\");");
    w("    w(\"#define PORT0_PIN01_DATA_REG    0x0\");");
    w("    w(\"// Pin offset in registor\");");
    w("    w(\"#define PORT0_PIN01_DATA_BIT    0x3\");");
    w("    w(\"\");");
    w("    w(\"\");");
    w("    w(\"/*\");");
    w("    w(\" * GPIO Option Select\");");
    w("    w(\" * Datasheet page number\");");
    w("    w(\" * Name                     Value\");");
    w("    w(\" */\");");

    w("    w(\"#define P_SELECT_INPUT      0b000\");");
    w("    w(\"#define P_SELECT_OUTPUT     0b001\");");
    w("    w(\"#define P_SELECT_OPTION2    0b010\");");
    w("    w(\"#define P_SELECT_OPTION3    0b011\");");
    w("    w(\"#define P_SELECT_OPTION4    0b100\");");
    w("    w(\"#define P_SELECT_OPTION5    0b101\");");
    w("    w(\"#define P_SELECT_OPTION6    0b110\");");
    w("    w(\"#define P_SELECT_DISABLE    0b111\");");
    w("    w(\"#define P_SELECT_LENGTH     3\");");

    w("    w(\"\");");
    w("    w(\"\");");
    w("    w(\"#endif // \" + cpu_name_upper + \"_DEFINITIONS_H\");");
    w("}");
    ofs.close();
}

void create_cpu_definition_generator_makefile()
{
    ofs = std::ofstream("../cpu/" + cpu_name_lower + "/makefile", std::ios::out | std::ios::binary);
    std::for_each(head_make.begin(), head_make.end(), [](std::string h){
        w(h);
    });
    w("");
    w("NAME = " + cpu_name_lower + "_definition_generator");
    w("TARGET = $(NAME).out");
    w("");
    w(".PHONY: all clean");
    w("");
    w("all: $(TARGET)");
    w("");
    w("clean:");
    w("\trm $(TARGET)");
    w("");
    w("$(TARGET): $(NAME).cpp");
    w("\tg++ -std=c++14 -o $(TARGET) $(NAME).cpp");
    w("\t./$(TARGET)");
    ofs.close();
}

void create_cpu_definition_generator_pro()
{
    ofs = std::ofstream("../cpu/" + cpu_name_lower + "/" + cpu_name_lower + "_definition_generator.pro", std::ios::out | std::ios::binary);
    std::for_each(head_make.begin(), head_make.end(), [](std::string h){
        w(h);
    });
    w("");
    w("TEMPLATE = app");
    w("CONFIG += console c++14");
    w("CONFIG -= app_bundle");
    w("CONFIG -= qt");
    w("");
    w("HEADERS += " + cpu_name_lower + "_definitions.h \\");
    w("           " + cpu_name_lower + "_example.hpp");
    w("");
    w("SOURCES += " + cpu_name_lower + "_definition_generator.cpp");
    ofs.close();
}

void create_cpu_example_hpp()
{
    ofs = std::ofstream("../cpu/" + cpu_name_lower + "/" + cpu_name_lower + "_example.hpp", std::ios::out | std::ios::binary);
    std::for_each(head_cpp.begin(), head_cpp.end(), [](std::string h){
        w(h);
    });
    w("");
    w("#ifndef " + cpu_name_upper + "_EXAMPLE_HPP");
    w("#define " + cpu_name_upper + "_EXAMPLE_HPP");
    w("");
    w("#include <iostream>");
    w("");
    w("#include \"../../cpu.h\"");
    w("");
    w("void example()");
    w("{");
    w("    std::cout << \"" + cpu_name + "\" << std::endl;");
    w("    std::cout << \"write to PORT0_PIN00\" << std::endl;");
    w("    std::cout << \"read ftom PORT0_PIN01\" << std::endl;");
    w("");
    w("    cpu _cpu;");
    w("");
    w("");
    w("    for (int i = 0; i < 5; i++)");
    w("    {");
    w("        _cpu.write_bit(PORT0_PIN00_DATA_REG, PORT0_PIN00_DATA_BIT, HIGH);");
    w("");
    w("        std::cout << std::to_string(_cpu.read_bit(PORT0_PIN01_DATA_REG, PORT0_PIN01_DATA_BIT)) << std::endl;");
    w("");
    w("        sleep(1);");
    w("");
    w("        _cpu.write_bit(PORT0_PIN00_DATA_REG, PORT0_PIN00_DATA_BIT, LOW);");
    w("");
    w("        std::cout << std::to_string(_cpu.read_bit(PORT0_PIN01_DATA_REG, PORT0_PIN01_DATA_BIT)) << std::endl;");
    w("");
    w("        sleep(1);");
    w("    }");
    w("}");
    w("");
    w("#endif // " + cpu_name_upper + "_EXAMPLE_HPP");
    ofs.close();
}

void create_cpu()
{
    cpu_name = std::string("cpu_template");

    if(cpu_name.size() == 0)
    {
        std::cout << "create_cpu(): cpu_name is not defined" << std::endl;
        return;
    }

    std::for_each(cpu_name.begin(), cpu_name.end(), [&](char c){
        cpu_name_lower.push_back(static_cast<char>(std::tolower(c)));
        cpu_name_upper.push_back(static_cast<char>(std::toupper(c)));
    });

    if(fs::exists("../cpu/" + cpu_name_lower))
    {
        std::cout << "create_cpu(): directory ../cpu/" << cpu_name_lower << " already exists" << std::endl;
        return;
    }

    fs::create_directories("../cpu/" + cpu_name_lower);

    create_cpu_definition_generator_cpp();
    create_cpu_definition_generator_makefile();
    create_cpu_definition_generator_pro();
    create_cpu_example_hpp();


    system(std::string ("make -C ../cpu/" + cpu_name_lower).c_str());
}

void create_board_definition_generator_cpp()
{
    ofs = std::ofstream("../board/" + board_name_lower + "/" + board_name_lower + "_definition_generator.cpp", std::ios::out | std::ios::binary);
    std::for_each(head_cpp.begin(), head_cpp.end(), [](std::string h){
        w(h);
    });
    w("");
    w("#include <algorithm>");
    w("#include <fstream>");
    w("#include <iostream>");
    w("#include <vector>");
    w("");
    w("#include \"../../cpu/" + board_cpu_name + "/" + board_cpu_name + "_definitions.h\"");
    w("");
    w("static std::string board_name(\"" + board_name + "\");");
    w("static std::string board_name_lower(\"" + board_name_lower + "\");");
    w("static std::string board_name_upper(\"" + board_name_upper + "\");");
    w("");
    w("class port");
    w("{");
    w("public:");
    w("    class pin");
    w("    {");
    w("    public:");
    w("        std::string name;");
    w("        std::string offset;");
    w("        pin(std::string name, std::string offset)");
    w("            : name(name), offset(offset) {}");
    w("    };");
    w("    std::string name;");
    w("    std::string offset;");
    w("    std::vector<pin> pins;");
    w("    port(std::string port_name, std::string offset, std::vector<pin> pins)");
    w("        : name(port_name), offset(offset), pins(pins) {}");
    w("};");
    w("");
    w("static std::vector<port> ports");
    w("{");
    w("    port(\"CON0\", \"GPIO0\", std::vector<port::pin>");
    w("        {");
    w("             port::pin(\"0\", \"GPIO0_0\")");
    w("         })");
    w("};");
    w("");
    w("static std::ofstream fs(\"" + board_name_lower + "_definitions.h\", std::ios::out | std::ios::binary);");
    w("");
    w("static void w(std::string s)");
    w("{");
    w("    s.push_back(\'\\n\');");
    w("    fs.write(s.c_str(), static_cast<long>(s.size()));");
    w("}");
    w("");
    w("int main()");
    w("{");
    std::for_each(head_cpp.begin(), head_cpp.end(), [](std::string h){
        w("    w(\"" + h + "\");");
    });
    w("    w(\"\");");
    w("    w(\"#ifndef \" + board_name_upper + \"_DEFINITIONS_H\");");
    w("    w(\"#define \" + board_name_upper + \"_DEFINITIONS_H\");");
    w("    w(\"\");");

    w("    std::string path_header;");
    w("    path_header.push_back(34);");
    w("    path_header += \"../../cpu/" + board_cpu_name + "/" + board_cpu_name + "_definitions.h\";");
    w("    path_header.push_back(34);");
    w("    w(\"#include \" + path_header);");

    w("    w(\"\");");
    w("    w(\"#define BOARD_NAME           \" + board_name);");
    w("    w(\"#define BOARD_NAME_LOWER     \" + board_name_lower);");
    w("    w(\"#define BOARD_NAME_UPPER     \" + board_name_upper);");
    w("    w(\"\");");
    w("    w(\"\");");
    w("    w(\"/*\");");
    w("    w(\" * Datasheet: http://8iter.ru/datasheets/board/\" + board_name + \"_Datasheet.pdf\");");
    w("    w(\" * Datasheet page number\");");
    w("    w(\" *\");");
    w("    w(\" * Description:\");");
    w("    w(\" * Pin num (bit offset in data register)\");");
    w("    w(\" * Data register offset\");");
    w("    w(\" */\");");
    w("    w(\"#define CONNECTOR0_PIN00_BIT_OFFSET 0x0\");");
    w("    w(\"#define CONNECTOR0_PIN00_DAT_OFFSET 0x0\");");
    w("    w(\"\");");
    w("    w(\"#define CONNECTOR0_PIN01_BIT_OFFSET 0x0\");");
    w("    w(\"#define CONNECTOR0_PIN01_DAT_OFFSET 0x3\");");
    w("    w(\"\");");
    w("    w(\"#endif // \" + board_name_upper + \"_DEFINITIONS_H\");");
    w("}");
    ofs.close();
}

void create_board_definition_generator_makefile()
{
    ofs = std::ofstream("../board/" + board_name_lower + "/makefile", std::ios::out | std::ios::binary);
    std::for_each(head_make.begin(), head_make.end(), [](std::string h){
        w(h);
    });
    w("");
    w("NAME = " + board_name_lower + "_definition_generator");
    w("TARGET = $(NAME).out");
    w("");
    w(".PHONY: all clean");
    w("");
    w("all: $(TARGET)");
    w("");
    w("clean:");
    w("\trm $(TARGET)");
    w("");
    w("$(TARGET): $(NAME).cpp");
    w("\tg++ -std=c++14 -o $(TARGET) $(NAME).cpp");
    w("\t./$(TARGET)");
    ofs.close();
}

void create_board_definition_generator_pro()
{
    ofs = std::ofstream("../board/" + board_name_lower + "/" + board_name_lower + "_definition_generator.pro", std::ios::out | std::ios::binary);
    std::for_each(head_make.begin(), head_make.end(), [](std::string h){
        w(h);
    });
    w("");
    w("TEMPLATE = app");
    w("CONFIG += console c++14");
    w("CONFIG -= app_bundle");
    w("CONFIG -= qt");
    w("");

//    if(board_cpu_name.size() > 0)
//    {
    w("HEADERS += ../../cpu/" + board_cpu_name + "/" + board_cpu_name + "_definitions.h \\");
    w("           " + board_name_lower + "_definitions.h \\");
    w("           " + board_name_lower + "_example.hpp");
//    }
//    else
//    {
//        w("HEADERS += " + board_name_lower + "_definitions.h \\");
//        w("           " + board_name_lower + "_example.hpp");
//    }

    w("");
    w("SOURCES += " + board_name_lower + "_definition_generator.cpp");
    ofs.close();
}

void create_board_example_hpp()
{
    ofs = std::ofstream("../board/" + board_name_lower + "/" + board_name_lower + "_example.hpp", std::ios::out | std::ios::binary);
    std::for_each(head_cpp.begin(), head_cpp.end(), [](std::string h){
        w(h);
    });
    w("");
    w("#ifndef " + board_name_upper + "_EXAMPLE_HPP");
    w("#define " + board_name_upper + "_EXAMPLE_HPP");
    w("");
    w("#include <iostream>");
    w("");
    w("#include \"../../cpu.h\"");
    w("");
    w("void example()");
    w("{");
    w("    std::cout << \"" + board_name + "\" << std::endl;");
    w("    std::cout << \"write to CONNECTOR0_PIN00\" << std::endl;");
    w("    std::cout << \"read ftom CONNECTOR0_PIN01\" << std::endl;");
    w("");
    w("    cpu _cpu;");
    w("");
    w("    _cpu.write_bits(CONNECTOR_PIN_00_CFG, CONNECTOR0_PIN00_CFG_OFFSET, P_SELECT_OUTPUT, 3);");
    w("    _cpu.write_bits(CONNECTOR_PIN_01_CFG, CONNECTOR0_PIN01_CFG_OFFSET, P_SELECT_INPUT, 3);");
    w("");
    w("    for (int i = 0; i < 5; i++)");
    w("    {");
    w("        _cpu.write_bit(CONNECTOR0_PIN00_DAT_OFFSET, CONNECTOR0_PIN00_BIT_OFFSET, HIGH);");
    w("");
    w("        std::cout << std::to_string(_cpu.read_bit(CONNECTOR0_PIN01_DAT_OFFSET, CONNECTOR0_PIN01_BIT_OFFSET)) << std::endl;");
    w("");
    w("        sleep(1);");
    w("");
    w("        _cpu.write_bit(CONNECTOR0_PIN00_DAT_OFFSET, CONNECTOR0_PIN00_BIT_OFFSET, LOW);");
    w("");
    w("        std::cout << std::to_string(_cpu.read_bit(CONNECTOR0_PIN01_DAT_OFFSET, CONNECTOR0_PIN01_BIT_OFFSET)) << std::endl;");
    w("");
    w("        sleep(1);");
    w("    }");
    w("}");
    w("");
    w("#endif // " + board_name_upper + "_EXAMPLE_HPP");
    ofs.close();
}

void create_board()
{
    board_cpu_name = std::string("cpu_template");

    board_name = std::string("board_template");

    if(board_cpu_name.size() == 0)
    {
        std::cout << "create_board(): board_cpu_name is not defined" << std::endl;
        return;
    }

    if(board_name.size() == 0)
    {
        std::cout << "create_board(): board_name is not defined" << std::endl;
        return;
    }

    std::for_each(board_name.begin(), board_name.end(), [&](char c){
        board_name_lower.push_back(static_cast<char>(std::tolower(c)));
        board_name_upper.push_back(static_cast<char>(std::toupper(c)));
    });

    if(fs::exists("../board/" + board_name_lower))
    {
        std::cout << "create_board(): directory ../board/" << board_name_lower << " already exists" << std::endl;
        return;
    }

    fs::create_directories("../board/" + board_name_lower);

    create_board_definition_generator_cpp();
    create_board_definition_generator_makefile();
    create_board_definition_generator_pro();
    create_board_example_hpp();

    system(std::string ("make -C ../board/" + board_name_lower).c_str());
}

int main()
{
    create_cpu();

    create_board();

    return 0;
}
