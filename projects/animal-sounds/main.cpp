#include <iostream>
#include "animal.h"
#include "cow.h"
#include "sheep.h"
#include "lion.h"

int main(void)
{
    Cow c1;
    Lion l1;
    Sheep s1;
    Animal *a1 = &c1;
    Animal *a2 = &l1;

    a1->makeSound();
    a2->canEat(c1);
    

    return 0;
}