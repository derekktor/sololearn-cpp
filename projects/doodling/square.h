#ifndef SQUARE_H
#define SQUARE_H

class Square : public Shape
{
public:
    Square();
};

Square::Square() { std::cout << "Square created...\n"; }

#endif