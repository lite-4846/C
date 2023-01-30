#include <stdio.h>

// a - z = 97 - 122 are ASCII Values 

int main()
{
    char lc;
    printf("Enter any Character\n");
    scanf("%c", &lc);
    if (lc <= 122 && lc >= 97)
    {
        printf("The character is lowercase");
    }
    else
    {
        printf("The character is not lowercase");
    }
    return 0;
}