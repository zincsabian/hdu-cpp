#pragma once
#include <cmath>

class Shape {
public:
    int n;
    double *data;
    virtual double getArea() const = 0;
    virtual double getPerim() const = 0;
    Shape();
    Shape(int);
    virtual ~Shape();
};

class Rectangle: public Shape {
public:
    Rectangle(double,double);
    virtual double getArea() const override;
    virtual double getPerim() const override;
};

class Circle: public Shape {
public:
    const double pi = acos(-1);
    Circle(double);
    virtual double getArea() const override;
    virtual double getPerim() const override;
};

class Triangle: public Shape {
public:
    Triangle(double,double,double);
    virtual double getArea() const override;
    virtual double getPerim() const override;
};

void getArea(Shape*);