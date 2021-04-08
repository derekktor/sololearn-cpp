#include <iostream>

class Clothes {
private:
    std::string color;
    int size;
    bool isShirt;
public:
    Clothes(std::string, int, bool);
    ~Clothes();
};