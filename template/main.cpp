#include <iostream>
#include "point.h"

template <class T>
T getSum(T x, T y)
{
    return x + y;
}

int main()
{
    Point<int> a1(19, 25);

    std::cout << a1.getMax() << std::endl;
    a1.increment();
    std::cout << a1.getMax() << std::endl;

    return 0;
}