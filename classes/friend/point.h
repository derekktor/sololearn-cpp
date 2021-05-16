#include <iostream>

#ifndef POINT_H
#define POINT_H

class Point
{
    int x;
    int y;

public:
    Point(int, int);
    void getInfo();
    friend int getMultiplication(Point&);
    friend void increaseBy(int, Point&);
    friend void swap(Point&);
};

Point::Point(int _x_, int _y_) : x(_x_), y(_y_)
{
    std::cout << "Point created: " << x << ", " << y << std::endl;
}

void Point::getInfo()
{
    std::cout << "[" << x << ", " << y << "]\n";
}

#endif