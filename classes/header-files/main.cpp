#include <iostream>
#include "src/brain.h"

int main() {
    int a = getMood();
    std::cout << a << "\n";

    mood(a);
}