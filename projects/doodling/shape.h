#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    int width;
    int height;
public:
    Shape();
    Shape(int, int);
    int getWidth();
    int getHeight();
    int getArea();
    int getPerim();
    void setWidth(int);
    void setHeight(int);
    void printInfo();
};

Shape::Shape() { width = 0; height = 0; }
Shape::Shape(int x, int y) : width(x), height(y) {}
int Shape::getWidth() { return width; }
int Shape::getHeight() { return height; }
int Shape::getArea() { return width * height; }
int Shape::getPerim() { return 2 * (width + height); }
void Shape::setWidth(int x) { width = x; }
void Shape::setHeight(int x) { height = x; }

void Shape::printInfo()
{
    std::cout << "w : " << width << std::endl << "h : " << height << std::endl;
}

#endif