#ifndef SHEEP_H
#define SHEEP_H

class Sheep : public Animal
{
public:
    Sheep();
    ~Sheep();
    void makeSound();
};

Sheep::Sheep()
{
    std::cout << "\tSheep created...\n";
    setType("prey");
    setSpeed(20);
    setWeight(150);
}

Sheep::~Sheep()
{
    std::cout << "\tSheep destroyed...\n";
}

void Sheep::makeSound()
{
    std::cout << "Baa!!!\n";
}

#endif