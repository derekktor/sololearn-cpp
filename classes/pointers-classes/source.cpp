#include "header.h"
#include <iostream>

Box::Box(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
    std::cout << "Constructor created\n";
}

double Box::Volume() {
    return length * width * height;
}