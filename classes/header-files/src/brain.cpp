#include <iostream>
#include <stdlib.h>

int getMood()
{
    return rand() % 10 + 1;
}

void mood(int x) {
    if (x >= 8) {
        std::cout << "Great\n";
    } else if (x > 3) {
        std::cout << "Ok\n";
    } else {
        std::cout << "Fuck off!!\n";
    }
}