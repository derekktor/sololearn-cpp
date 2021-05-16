#ifndef PRODUCT_H
#define PRODUCT_H

#include "date.h"

class Product
{
    std::string name;
    double price;
    Date expDate;
public:
    Product();
    Product(std::string, double, Date);
    void printInfo();
    void checkExp();
    void setName(std::string);
    void setPrice(double);
};

Product::Product()
{
    name = "Null";
    price = 0;
    expDate;
}

Product::Product(std::string n, double p, Date d) :
    name(n), price(p), expDate(d) {}

void Product::printInfo()
{
    std::cout << name << " - " << price << "zł - " << expDate.getDate() << std::endl;
}

void Product::checkExp()
{
    int currentYear = 2021;
    int currentMonth = 5;
    int currentDay = 13;
    int currentTotal = currentYear * 365 + currentMonth * 30 + currentDay;

    int expTotal = expDate.getYear() * 365 + expDate.getMonth() * 30 + expDate.getDay();

    if (currentTotal > expTotal)
        std::cout << name << " is expired!\n";
    else
        std::cout << name << " is good to use!\n";
}

void Product::setName(std::string n) {name = n;}
void Product::setPrice(double p) {price = p;}

#endif