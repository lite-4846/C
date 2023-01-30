#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The given number is even\n");
    }

    int b;
    
    printf("Enter your age\n");
    scanf("%d", &b);

    if (b >= 18)
    {
        printf("You can join the party\n");
    }

    return 0;
}