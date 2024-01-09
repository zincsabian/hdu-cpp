#include "Animal.h"
#include <cstdio>

int main(int argc, char** argv)
{

    printf("size of animal: %lu\n", sizeof(animal));            // 24   
    printf("size of ter_animal: %lu\n", sizeof(ter_animal));    // 40
    printf("size of aqu_animal: %lu\n", sizeof(aqu_animal));    // 40
    printf("size of amp_animal: %lu\n", sizeof(amp_animal));    // 56

    amp_animal *Animal = new amp_animal("hello", 2, 2, 2, 2);
    Animal->Print();
    delete Animal;
}

// g++ -std=c++11 -Wall main.cpp Animal.cpp -o main