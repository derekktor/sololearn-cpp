#include <iostream>
#include "mem-init.h"

Furniture::Furniture (std::string c, int l, int a) : color(c), legCount(l), age(a)
{
    std::cout << "Color: " << color << std::endl;
    std::cout << "Number of legs: " << legCount << std::endl;
    std::cout << "Age: " << age << std::endl;
}