#include <iostream>
#include "header.h"

#ifndef CLOTHES_H
#define CLOTHES_H

Clothes::Clothes(std::string c, int s, bool i) {
    color = c;
    size = s;
    isShirt = i;

    if (isShirt == true)
    {
        std::cout << "It is " << color << ", " << size << " shirt.\n";
    } else {
        std::cout << "It is " << color << ", " << size << " pants.\n";
    }
};

Clothes::~Clothes() {
    std::cout << "Destructor is run here\n";
};

#endif