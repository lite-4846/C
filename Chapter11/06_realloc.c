// How to Use Realloc!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The number %d is : %d\n", i + 1, ptr[i]);
    }
    
    ptr = realloc(ptr, 5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The number %d is : %d\n", i + 1, ptr[i]);
    }
    free(ptr);
    return 0;
}