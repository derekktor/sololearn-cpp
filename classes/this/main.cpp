#include <iostream>

class Company
{
    std::string name;
    int numEmployees;
    double netWorth;

public:
    Company(std::string, int, double);
    void printName();
    void setName(std::string);
};

Company::Company(std::string n, int e, double w)
: name(n), numEmployees(e), netWorth(w) {}

void Company::printName()
{
    std::cout << this->name << std::endl;
}

void Company::setName(std::string newName)
{
    this->name = newName;
}

int main(void)
{
    Company a1("Morning Star", 8000, 5500);
    a1.printName();
    a1.setName("San");
    a1.printName();

    return 0;
}