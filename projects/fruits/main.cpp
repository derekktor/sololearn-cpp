#include <iostream>
#include "product.h"
#include "fruit.h"
#include "date.h"

int main(void) {
    Date d1(12, 31, 2100);
    Product a1("chair", 200, d1);
    Product a2;
    Fruit f1;

    f1.setName("Banana");
    f1.setPrice(4);

    f1.printInfo();
    

    return 0;
}