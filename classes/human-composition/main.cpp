#include <iostream>
#include <string>

class Birthday
{
    public:
        Birthday(int y, int m, int d) : year(y), month(m), day(d) {}
        void printDate()
        {
            std::cout << year << "/" << month << "/" << day <<std::endl;
        }
    private:
        int year;
        int month;
        int day;
};

class BodyMeasure
{
    private:
        int height;
        int weight;
        int vertical;
        int wingspan;
    public:
        BodyMeasure(int h, int w, int v, int wing) :
        height(h), weight(w), vertical(v), wingspan(wing) {};
        void printBMeasure()
        {
            std::cout << "Height: " << height << std::endl;
            std::cout << "Weight: " << weight << std::endl;
            std::cout << "Vertical: " << vertical << std::endl;
            std::cout << "Wingspan: " << wingspan << std::endl;
        }
};

class Person
{
    public:
        Person(std::string n, Birthday b, BodyMeasure bm) :
        name(n), bd(b), bodyM(bm) {}
        void printInfo()
        {
            std::cout << name << std::endl;
            bd.printDate();
            bodyM.printBMeasure();
        }
    private:
        std::string name;
        Birthday bd;
        BodyMeasure bodyM;
};

int main(void) {
    BodyMeasure bo01(182, 80, 20, 175);
    Birthday b01(2001, 11, 9);
    Person a01("John", b01, bo01);

    a01.printInfo();

    return 0;
}