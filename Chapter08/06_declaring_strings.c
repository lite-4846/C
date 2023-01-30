#include<stdio.h>

int main()
{
    // First way. In this way you can't reinitialize the string again. 
    char ptr[] = "One Piece";

    // Second way. In this way you can reinitialize the string as many times as you want.
    char *ptr1 = "One Piece";
    ptr1 = "Attack on Titan";

    printf("%s", ptr);
    return 0;
}