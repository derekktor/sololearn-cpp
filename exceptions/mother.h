#ifndef MOTHER_H
#define MOTHER_H

class Mother : public Person
{
public:
    Mother();
    Mother(std::string, int);
    ~Mother();
};

Mother::Mother()
{
    std::cout << "\tMother created...\n";
}

Mother::Mother(std::string n, int a)
{
    setStatus("mother");
    setName(n);
    setAge(a);
    std::cout << "\tMother created...\n";
}

Mother::~Mother()
{
    std::cout << "\tMother destroyed...\n";
}


#endif