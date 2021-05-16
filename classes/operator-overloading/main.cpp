#include <iostream>
#include "complex.h"
#include "fraction.h"

int main(void) {
    // Complex a(3, 4), b(8, 1);
    
    // std::cout << a.getData() << std::endl;
    // std::cout << b.getData() << std::endl;

    // Complex c = a + b;

    // std::cout << c.getData() << std::endl;

    Fraction a(3,4), b(2,7), c;
    c = a / b;
    c.printData();

    c.simplifyFrac();
    c.printData();

    return 0;
}