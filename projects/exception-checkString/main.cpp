#include <iostream>
#include <string>

int main() {
    std::string name = "ek";

    try {
        if (name.length() <= 2)
            throw "Too short";
    }

    catch (char const *e)
    {
        std::cerr << "Error - " << e << std::endl;
    }

    return 0;
}