// Write a program to take n number from user!
// Using calloc and print them.....

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    ptr = (int *)calloc(n, sizeof(int));
    printf("How many intergers you wanna write\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d : ", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The number %d is : %d\n",i+1, ptr[i]);
    }
    
    return 0;
}
