#ifndef FRUIT_H
#define FRUIT_H

class Fruit : public Product
{
public:
    Fruit();
};

Fruit::Fruit()
{
    std::cout << "Fruit created...\n";
}

#endif