#include <stdio.h>

int pyramid(int a);

int main()
{
    int a = 5;
    pyramid(a);
    return 0;
}

int pyramid(int a)
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < (2 * (5 - i) - 1) / 2; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < (2 * (i + 1) - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}