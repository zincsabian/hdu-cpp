#include "Matrix.h"
#include <cstdio>

int main()
{
    int a[9] = {1,2,3,2,3,4,3,4,5};
    Matrix mat1(a,3); mat1.Print();
    Matrix mat2 (mat1); mat2.Print();
    mat1.Add (mat2);
    mat1.Print();
}