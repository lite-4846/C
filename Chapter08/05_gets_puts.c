#include<stdio.h>

int main()
{
    char s[20];
    printf("Enter your name : ");
    gets(s);
    printf("Your name is %s", s);
    // you can use puts(s); but it will only print the written name!
    return 0;
}