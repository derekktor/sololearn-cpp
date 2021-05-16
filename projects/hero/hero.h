#ifndef HERO_H
#define HERO_H

class Hero : public Player
{
public:
    Hero(std::string, std::string);
    ~Hero();
    void attack(Player&);
};

Hero::Hero(std::string t, std::string n)
{
    std::cout << "\tHero created...\n\t" << n << std::endl;
    setType(t);
    setName(n);
}

Hero::~Hero()
{
    std::cout << "\tHero destroyed...\n";
}

void Hero::attack(Player& obj)
{
    std::cout << "Hero attacked " << obj.getName() << "..." << std::endl;
    std::cout << "\t-" << attackDamage << std::endl;
    obj.setHealth(attackDamage);
}


#endif