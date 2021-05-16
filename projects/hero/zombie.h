#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie : public Player
{
public:
    Zombie(std::string, std::string);
    ~Zombie();
    void attack(Player&);
};

Zombie::Zombie(std::string t, std::string n)
{
    std::cout << "\tZombie created...\n\t" << n << std::endl;
    setType(t);
    setName(n);
}

Zombie::~Zombie()
{
    std::cout << "\tZombie destroyed...\n";
}

void Zombie::attack(Player& obj)
{
    std::cout << "Monster attacked " << obj.getName() << "..." << std::endl;
    std::cout << "\t-" << attackDamage << std::endl;
    obj.setHealth(attackDamage);
}

#endif