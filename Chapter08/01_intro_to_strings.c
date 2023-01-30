#include<stdio.h>

int main()
{
    // How to write a string.

    // First Way. In this way you have to add \0 at the end to tell the compiler that we are done here.
    char str[] = {'V','E','D','A','N','T','\0'};

    // Second way. In this way the compiler will automatically take \0 in the end.
    char str[] = "VEDANT";

    return 0;
}