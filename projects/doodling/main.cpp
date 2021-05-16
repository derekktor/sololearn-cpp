#include <iostream>
#include "shape.h"
#include "square.h"
#include "circle.h"

int main(void) {
    Shape a(10, 10);
    Square b;
    Circle c;

    a.printInfo();
    b.printInfo();
    c.printInfo();

    b.setHeight(10);
    c.setWidth(20);

    a.printInfo();
    b.printInfo();
    c.printInfo();

    return 0;
}