#include "Shape.h"
#include <cstdio>

Shape::Shape(): n(0), data(nullptr){}
Shape::Shape(int _n): n(_n), data(n > 0 ? new double[n]: nullptr){}
Shape::~Shape() { 
    printf("delete %d\n", n);
    delete[] data; 
}

Rectangle::Rectangle(double w, double h): Shape(2){
    data[0] = w;
    data[1] = h;
}
double Rectangle::getArea() const{
    return data[0] * data[1];
}
double Rectangle::getPerim() const{
    return 2 * (data[0] + data[1]);
}

Circle::Circle(double r): Shape(1) {
    data[0] = r;
}
double Circle::getArea() const {
    return pi * data[0] * data[0];
}
double Circle::getPerim() const {
    return pi * 2 * data[0];
}

Triangle::Triangle(double x, double y, double z): Shape(3) {
    data[0] = x;
    data[1] = y;
    data[2] = z;
}
double Triangle::getArea() const {
    double s = (data[0] + data[1] + data[2]) / 2;
    double area = sqrt(s * (s - data[0]) * (s - data[1]) * (s - data[2])); //Helon's formula
    return area;
}
double Triangle::getPerim() const {
    double s = (data[0] + data[1] + data[2]);
    return s;
}

void getArea(Shape* ptr)
{
    printf("Area: %06.3lf Perim: %06.3lf\n", ptr->getArea(), ptr->getPerim());
}