#include <iostream>
#include "point.h"

int getMultiplication(Point &obj)
{
    return obj.x * obj.y;
}

void increaseBy(int n, Point& obj)
{
    obj.x += n;
    obj.y += n;
}

void swap(Point& obj)
{
    int temp;
    temp = obj.x;
    obj.x = obj.y;
    obj.y = temp;
}

int main()
{
    Point a1(10, 15);

    std::cout << getMultiplication(a1) << std::endl;
    increaseBy(5, a1);
    a1.getInfo();
    swap(a1);
    a1.getInfo();

    return 0;
}