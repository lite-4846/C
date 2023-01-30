// Write a Program to create a structure for complex number!

#include<stdio.h>

typedef struct ComplexNo
{
    int real;
    int img;
} complex;

int main()
{
    complex c1, c2;
    c1.real = 3;
    c1.img = 4;
    printf("Real part of c1 : %d", c1.real);
    printf("Real part of c1 : %d", c1.img);
    return 0;
}