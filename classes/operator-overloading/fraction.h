#include <iostream>
#include <string>

#ifndef FRACTION_H
#define FRACTION_H

int getGCDivisor(int x, int y)
{
    if (x == 0)
        return y;
    return getGCDivisor(y % x, x);
}

int getLCMultiple(int x, int y)
{
    return (x * y) / getGCDivisor(x, y);
}

class Fraction
{
    int num, den, whole;

public:
    Fraction();
    Fraction(int, int);
    std::string getData();
    void printData();
    int getNum();
    int getDen();
    void simplifyFrac();

    Fraction operator+(Fraction& obj)
    {
        Fraction temp;
        int lcm = getLCMultiple(den, obj.den);
        temp.den = lcm;
        temp.num = num * (lcm / den) + obj.num * (lcm / obj.den);
        return temp;
    }

    Fraction operator*(Fraction &obj)
    {
        Fraction temp;
        temp.den = den * obj.den;
        temp.num = num * obj.num;
        return temp;
    }

    Fraction operator/(Fraction &obj)
    {
        Fraction temp;
        temp.den = den * obj.num;
        temp.num = num * obj.den;
        return temp;
    }
};

Fraction::Fraction() { num = 0; den = 0; whole = 0; }
Fraction::Fraction(int x, int y) : num(x), den(y), whole(0) {}
int Fraction::getNum() { return num; }
int Fraction::getDen() { return den; }

std::string Fraction::getData()
{
    return '(' + std::to_string(whole) + ')' + std::to_string(num) + '/' + std::to_string(den);
}

void Fraction::printData()
{
    std::cout << getData() << std::endl;
}

void Fraction::simplifyFrac()
{
    if (num >= den)
    {
        whole = num / den;
        num -= whole * den;
    }
    else return;
}

#endif