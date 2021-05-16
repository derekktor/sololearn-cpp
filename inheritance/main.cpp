#include <iostream>
#include "father.h"
#include "son.h"

int main(void) {
    Father a;
    Son b;

    std::cout << "Father:\n";
    a.checkStats();
    a.playSport();
    a.checkStats();

    std::cout << "Son:\n";
    b.checkStats();
    b.work();
    b.checkStats();

    return 0;
}