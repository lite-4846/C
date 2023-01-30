#include <stdio.h>

int main()
{
    int a;
    int vipPass = 0;
    vipPass = 1;

    printf("Enter your age\n");
    scanf("%d", &a);

    if ((a >= 18 && a <= 70) || !(vipPass == 1))
    {
        printf("You can drive! Just be careful.");
    }
    else
    {
        printf("Sorry! You can't drive");
    }
    return 0;
}