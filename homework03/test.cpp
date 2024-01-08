#include <iostream>
#include <cstring>
#include "String.h"

int main(int argc, char **argv)
{
    String s1("Hello");
    s1.print();
    String s2;
    s2.print();
    s2 = s1;
    s2.print();
    String s3(s1);
    s3.print();
}