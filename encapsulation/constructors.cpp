#include <iostream>

class Student {
private:
    std::string name;
    int grade;
public:
    Student(std::string nm, int grd) {
        name = nm;
        grade = grd;
    }
    void statement() {
        std::cout << name << " is " << grade << "th grade" << "\n";
    }
};

int main() {
    Student a01("Derek", 10);

    a01.statement();
    return 0;
}