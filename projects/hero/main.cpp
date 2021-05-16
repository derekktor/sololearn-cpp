#include <iostream>
#include "player.h"
#include "monster.h"
#include "zombie.h"
#include "hero.h"

int main(void)
{
    Zombie z1("zombie", "Zoe");
    Monster m1("monster", "Blex");
    Hero h1("hero", "Cal");

    Player *e1 = &z1;
    Player *e2 = &m1;
    Player *p1 = &h1;

    std::cout << "Zombie:\n";
    e1->printStats();
    std::cout << "Monster\n";
    e2->printStats();

    e1->attack(h1);
    e2->attack(h1);
    p1->attack(z1);

    std::cout << "Zombie:\n";
    e1->printStats();
    std::cout << "Monster:\n";
    e2->printStats();
    std::cout << "Hero:\n";
    p1->printStats();

    return 0;
}