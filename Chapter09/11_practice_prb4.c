// Write a Program to create a structure for complex number!
// Take input for 5 complex no. from user and display it using display function!

#include <stdio.h>

typedef struct ComplexNo
{
    int real;
    int img;
} complex;

void display(complex *c)
{
    complex *ptr = c;
    for (int i = 0; i < 5; i++)
    {
        printf("The complex Numbers are : %d + %di\n", ptr->real, ptr->img);
        ptr++;
    }
}

int main()
{
    complex c[5];
    printf("Enter Real and Img part for 5 complex No.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Real part of %dst number : ", i + 1);
        scanf("%d", &c[i].real);
        printf("Img part of %dst number : ", i + 1);
        scanf("%d", &c[i].img);
    }
    display(c);
    return 0;
}