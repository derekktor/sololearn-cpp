#include <iostream>

class Book {
private:
    int pages;
    std::string author;
public:
    void setPages(int x) {
        pages = x;
    }

    int getPages() {
        return pages;
    }

    void setAuthor(std::string y) {
        author = y;
    }

    std::string getAuthor() {
        return author;
    }
};

int main() {
    Book a01;
    a01.setAuthor("Robert Greene");
    a01.setPages(443);

    std::cout << a01.getAuthor() << " - " << a01.getPages() << "\n";
    return 0;
}