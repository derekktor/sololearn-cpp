#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
protected:
    std::string type;
    int speed;
    double weight;

public:
    Animal();
    Animal(std::string, int, double);
    ~Animal();
    void setType(std::string);
    void setSpeed(int);
    void setWeight(double);
    void canEat(Animal&);
    virtual void makeSound() = 0;
};

Animal::Animal()
{
    std::cout << "Animal created...\n";
    type = "prey";
    speed = 10;
    weight = 200;
}

Animal::Animal(std::string t, int s, double w)
: type(t), speed(s), weight(w)
{
    std::cout << "Animal created...\n";
}

Animal::~Animal()
{
    std::cout << "Animal destroyed...\n";
}

void Animal::setType(std::string x)
{
    type = x;
}

void Animal::setSpeed(int x)
{
    speed = x;
}

void Animal::setWeight(double x)
{
    weight = x;
}

void Animal::canEat(Animal& obj)
{
    if (type == "prey")
        std::cout << "Can't eat!\n";
    else if (type == "predator")
        if (obj.type == "prey")
            std::cout << "Can devour them!\n";
        else
            std::cout << "Not so sure!\n";
    else
        std::cout << "Please re-check given type!\n";
        
}

#endif