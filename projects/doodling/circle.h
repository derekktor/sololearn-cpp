#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
public:
    Circle();
};

Circle::Circle() { std::cout << "Circle created...\n"; }

#endif