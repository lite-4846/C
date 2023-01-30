// Calloc is pretty much same as malloc! 
// Calloc set the value of every block of address to 0! And....

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    
    ptr = (int *)calloc(3, sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter number %d : ", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The number %d is : %d\n",i+1, ptr[i]);
    }
    
    return 0;
}