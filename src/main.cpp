/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#include <iostream>
#include <stdexcept>

#include "define_example.h"

int main()
{
    std::cout << std::endl << "Fast GPIO library example" << std::endl << std::endl;

    try
    {
        example();
    }
    catch (std::runtime_error e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "unknown error" << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
