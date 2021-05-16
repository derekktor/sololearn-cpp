#ifndef MONSTER_H
#define MONSTER_H

class Monster : public Player
{
public:
    Monster(std::string, std::string);
    ~Monster();
    void attack(Player&);
};

Monster::Monster(std::string t, std::string n)
{
    std::cout << "\tMonster created...\n\t" << n << std::endl;
    setType(t);
    setName(n);
}

Monster::~Monster()
{
    std::cout << "\tMonster destroyed...\n";
}

void Monster::attack(Player& obj)
{
    std::cout << "Monster attacked " << obj.getName() << "..." << std::endl;
    std::cout << "\t-" << attackDamage << std::endl;
    obj.setHealth(attackDamage);
}

#endif