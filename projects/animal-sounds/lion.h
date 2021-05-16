#ifndef LION_H
#define LION_H

class Lion : public Animal
{
public:
    Lion();
    ~Lion();
    void makeSound();
};

Lion::Lion()
{
    std::cout << "\tLion created...\n";
    setType("predator");
    setSpeed(50);
    setWeight(500);
}

Lion::~Lion()
{
    std::cout << "\tLion destroyed...\n";
}

void Lion::makeSound()
{
    std::cout << "Roar!!!\n";
}

#endif