#ifndef PERSON_H
#define PERSON_H

class Person
{
protected:
    std::string status;
    std::string name;
    int age;
public:
    Person();
    Person(std::string, std::string, int);
    ~Person();
    std::string getName();
    int getAge();
    void setStatus(std::string);
    void setName(std::string);
    void setAge(int);
};

Person::Person()
{
    std::cout << "Person created...\n";
}

Person::Person(std::string t, std::string n, int a)
: status(t), name(n), age(a)
{
    std::cout << "Person created...\n";
}

Person::~Person()
{
    std::cout << "Person destroyed...\n";
}

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

void Person::setStatus(std::string x)
{
    status = x;
}

void Person::setName(std::string x)
{
    name = x;
}

void Person::setAge(int x)
{
    age = x;
}


#endif