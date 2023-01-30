// How to take values from "file"!
// Using fscanf!

#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;

    ptr = fopen("01_sample.txt", "r");

    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    
    printf("The value of num is : %d\n", num);
    printf("The value of num2 is : %d\n", num2);

    return 0;
}