// Write a program to dynamically create an array of size 6!

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter any 6 numbers : \n");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of number %d is : %d\n", i+1, ptr[i]);
    }
    
    return 0;
}