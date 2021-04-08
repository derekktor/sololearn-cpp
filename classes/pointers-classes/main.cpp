#include <iostream>
#include "header.h"

int main() {
    Box a(1.5, 2, 1);
    Box b(2, 3, 5);
    Box *ptr;

    ptr = &b;

    std::cout << "Volume: " << ptr->Volume() << "\n";
    return 0;
}