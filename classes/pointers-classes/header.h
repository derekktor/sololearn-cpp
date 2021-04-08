#ifndef TREE_H
#define TREE_H

class Box {
private:
    double length;
    double width;
    double height;
public:
    Box(double, double, double);
    double Volume();
};

#endif