#ifndef FATHER_H
#define FATHER_H

class Father
{
    int energy;
    int money;
    int health;
    int sanity;
public:
    Father();
    ~Father();
    int getHealth();
    void playSport();
    void work();
    void protectFamily();
    void rest();
    void checkStats();
};

Father::Father()
{
    money = health = sanity = energy = 100;
    std::cout << "Father created...\n";
}

Father::~Father()
{
    std::cout << "Father deleted...\n";
}

int Father::getHealth() { return health; }

void Father::playSport()
{
    std::cout << "Playing sport..." << std::endl;
    energy--;
    health++;
    sanity++;
    money--;
}

void Father::work()
{
    std::cout << "Working..." << std::endl;
    energy--;
    health--;
    sanity--;
    money++;
}

void Father::protectFamily()
{
    std::cout << "Protecting family..." << std::endl;
    energy++;
    health--;
    sanity++;
    money--;
}

void Father::rest()
{
    std::cout << "Resting..." << std::endl;
    energy++;
    health++;
    sanity++;
}

void Father::checkStats()
{
    std::cout << "Stats" << std::endl
              << "\tHealth : " << health << std::endl
              << "\tEnergy : " << energy << std::endl
              << "\tMoney : " << money << std::endl
              << "\tSanity : " << sanity << std::endl << std::endl;
}

#endif