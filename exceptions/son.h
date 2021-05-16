#ifndef SON_H
#define SON_H

class Son : public Person
{
public:
    Son();
    Son(std::string, int);
    ~Son();
};

Son::Son()
{
    std::cout << "\tSon created...\n"
}

Son::Son(std::string n, int a)
{
    setStatus("son");
    setName(n);
    setAge(a);
    std::cout << "\tSon created...\n";
}

Son::~Son()
{
    std::cout << "\tSon destroyed...\n";
}

#endif