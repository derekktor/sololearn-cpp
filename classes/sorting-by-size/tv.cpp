#include <iostream>
#include "tv.h"

Television::Television (int x, int y, std::string b) : width(x), height(y), brand(b)
{
    std::cout << "_______________" << std::endl;
    std::cout << "Width = " << width << std::endl;
    std::cout << "Height = " << height << std::endl;
    std::cout << "Brand = " << brand << std::endl;
    std::cout << "_______________" << std::endl;
}