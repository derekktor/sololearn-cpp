#ifndef COW_H
#define COW_H

class Cow : public Animal
{
public:
    Cow();
    ~Cow();
    void makeSound();
};

Cow::Cow()
{
    std::cout << "\tCow created...\n";\
    setType("prey");
    setSpeed(10);
    setWeight(300);
}

Cow::~Cow()
{
    std::cout << "\tCow destroyed...\n";
}

void Cow::makeSound()
{
    std::cout << "Moo!!!\n";
}


#endif