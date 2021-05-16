#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

class Date
{
    int day;
    int month;
    int year;
public:
    Date();
    Date(int, int, int);
    std::string getDate();
    void printDate();
    int getDay();
    int getMonth();
    int getYear();
};

Date::Date() {day = 1; month = 1; year = 1990;}
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}
std::string Date::getDate()
{
    return std::to_string(day) + '/' + std::to_string(month) + '/' + std::to_string(year);
}

void Date::printDate()
{
    std::cout << this->getDate() << std::endl;
}

int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }

#endif