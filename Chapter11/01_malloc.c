//  Dynamic Memory Location!
//  Using malloc function and sizeof operator!

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    // Size of Operator in C!    
    // printf("The size of int in my PC is %d\n", sizeof(int));
    // printf("The size of float in my PC is %d\n", sizeof(float));
    // printf("The size of char in my PC is %d\n", sizeof(char));

    printf("How many intergers you wanna write\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

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