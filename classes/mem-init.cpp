#include <iostream>

class Furniture
{
private:
    const std::string color;
    const int legCount;
    const int age;

public:
    Furniture(std::string c, int l, int a) : color(c), legCount(l), age(a){};
    
};

int main() {

    return 0;
}