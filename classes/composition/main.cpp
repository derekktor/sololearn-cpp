#include <iostream>
#include "birthday.h"
#include "person.h"

int main(void) {
    Birthday b1(9, 11, 2001);
    Person p1("Derek", 20, b1);

    return 0;
}