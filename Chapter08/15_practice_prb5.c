// Program to encrypt something.

#include <stdio.h>

void encrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char str[] = "Gol D. Roger";
    encrypt(str);
    printf("The encrypted string is %s", str);
    return 0;
}