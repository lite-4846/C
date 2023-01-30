#include<stdio.h>
#include <string.h>

int main()
{
    char str1[39] = "One ";
    char str2[] = "Piece";

    strcat(str1, str2);
    printf("Now the str1 will be :: %s", str1);

    // But it wont add space on its own so we have add it ourselves.

    return 0;
}