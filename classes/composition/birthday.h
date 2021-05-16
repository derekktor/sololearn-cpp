#include <iostream>
#include <string>

#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
    int day;
    int month;
    int year;
public:
    Birthday(int d, int m, int y)
    : day(d), month(m), year(y)
    {
        printDate();
    }
    void printDate();
    std::string getDate();
};

void Birthday::printDate()
{
    std::cout << day << "/" << month << "/" << year << std::endl;
}

std::string Birthday::getDate()
{
    std::string str = std::to_string(day) + '/' + std::to_string(month) + '/' + std::to_string(year);
    return str;
}



#endif