#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number\n");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("The number is 1");
    }
    else if (a == 2)
    {
        printf("The number is 2");
    }
    else if (a == 3)
    {
        printf("The number is 3");
    }
    else
    {
        printf("The number is not 1,2 and 3");
    }
    return 0;
}