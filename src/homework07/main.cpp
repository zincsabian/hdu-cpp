#include "Shape.h"

int main()
{
    Rectangle rec(3, 4);
    getArea(&rec);
    Circle cir(3);
    getArea(&cir);
    Triangle tri(3, 4, 5);
    getArea(&tri);
}