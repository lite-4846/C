// Create an array to save the table of 7! 
// reallocate it with 15 number.....you know what I mean 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    printf("\n********The Multiplication table of 7********\n\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i+1);
        printf("    7 X %d = %d\n", i+1, ptr[i]);
    }
    printf("\n      After Reallocating......\n\n");
    ptr = realloc(ptr, 15*sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        ptr[i] = 7 * (i+1);
        printf("    7 X %d = %d\n", i+1, ptr[i]);
    }    
    free(ptr);
    return 0;
}