// How to use free function!
// free : It clears the dynamic memory used for functions.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, *ptr2;
    int n;
    ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        ptr2 = (int *)malloc(600 * sizeof(int)); // If I dont use free then the fuction will take a lot of memory!
        printf("Enter number %d : ", i+1);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The number %d is : %d\n",i+1, ptr[i]);
    }
    free(ptr);
    return 0;
}