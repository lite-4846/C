// Write a Program to take three integers from file!

#include<stdio.h>

int main()
{
    FILE *ptr;
    int n1, n2, n3;
    ptr = fopen("12_sample.txt", "r");

    fscanf(ptr, "%d %d %d", &n1, &n2, &n3);  
    fclose(ptr);
    printf("The values of a, b and c is %d %d %d", n1, n2, n3);
    return 0;
}