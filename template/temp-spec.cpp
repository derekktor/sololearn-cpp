#include <iostream>

template <class T>
class MyClass
{
public:
    MyClass(T x)
    {
        std::cout << x << " - not a char\n";
    }
};

template <>
class MyClass<char>
{
public:
    MyClass(char x)
    {
        std::cout << x << " - is a char!\n";
    }
};

int main(void)
{
    MyClass<int> a(2);
    MyClass<float> b(5.4);
    MyClass<char> c('b');
    MyClass<char> d(23);
    MyClass<int> e('q');

    return 0;
}