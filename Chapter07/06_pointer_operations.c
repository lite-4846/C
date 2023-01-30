#include<stdio.h>

int main()
{
    int a = 33;
    int *ptr = &a;
    int b = 93;
    int *ptr1 = &b;
    printf("The value of ptr is %u\n", ptr);

    printf("The value of ptr1 is %u\n", ptr1);

    // You can perform the following operationns of pointers

    ptr++;
    ptr--;

    ptr = ptr + 2;
    ptr = ptr - 2;

    ptr = ptr1 - 1;

    ptr1 = ptr; 

    printf("The value of ptr is %u\n", ptr);
    printf("The value of ptr1 is %u\n", ptr1);

    return 0;
}