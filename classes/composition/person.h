#include <iostream>
#include "birthday.h"

#ifndef PERSON_H
#define PERSON_H

class Person
{
    std::string name;
    int age;
    Birthday bday;

public:
    Person(std::string n, int a, Birthday bd)
        : name(n), age(a), bday(bd)
    {
        printInfo();
    }

    void printInfo();
};

void Person::printInfo()
{
    std::cout << name << " was born on " << bday.getDate() << " and is " << age << " years old\n";
}

#endif