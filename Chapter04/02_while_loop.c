#include <stdio.h>

int main()
{
    int a;
    printf("Enter any 1 digit number");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}