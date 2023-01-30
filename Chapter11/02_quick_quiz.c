// Create a dynamic memory for array of 5 float variables!

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter 5 float numbers\n");
        scanf("%f", &ptr[i]);
    }
    printf("The 5 float numbers are : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    
    return 0;
}