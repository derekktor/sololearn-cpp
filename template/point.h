#ifndef POINT_H
#define POINT_H

template <class T>
class Point
{
    T x, y;
public:
    Point(T _x_, T _y_) : x(_x_), y(_y_) {};
    T getMax();
    void increment();
};

template <class T>
T Point<T>::getMax()
{
    return (x > y ? x : y);
}

template <class T>
void Point<T>::increment()
{
    x++; y++;
}

#endif