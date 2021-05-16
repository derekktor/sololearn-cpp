#ifndef SON_H
#define SON_H

class Son : public Father
{
public:
    Son();
    ~Son();
};

Son::Son() { std::cout << "Son created...\n"; }
Son::~Son() { std::cout << "Son deleted...\n"; }

#endif