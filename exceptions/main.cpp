#include <iostream>
#include <exception>
#include "person.h"
#include "mother.h"
#include "son.h"

int main()
{
    Person *ptr;
    Mother m1("Sarah", 43);
    Son s1("Johnny", 22);

    try {
        if (m1.getAge() < s1.getAge())
            if (m1.getAge() < 0)
                throw 101;
            else throw 204;
        else throw 305;
    }
    catch (int x)
    {
        if (x > 0 && x < 150)
            std::cerr << x << " - Age exception : Mother's age can't be negative!\n";
        else if (x < 250)
            std::cerr << x << " - Age exception : Son can't be older than Mother!\n";
        else
            std::cerr << x << " - No error : Just messing with you\n";
    }

    catch (...)
    {
        std::cerr << "Default exception caught!\n";
    }

    return 0;
}