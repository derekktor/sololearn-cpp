#include <string>

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    int real, imag;

public:
    Complex();
    Complex(int, int);
    std::string getData();

    Complex operator+(Complex& obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

Complex::Complex() { real = 0; imag = 0; }
Complex::Complex(int r, int i) : real(r), imag(i) {}
std::string Complex::getData()
{
    return std::to_string(real) + " + " + std::to_string(imag) + "i";
}

#endif