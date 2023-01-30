#include<stdio.h>
#include <string.h>

int main()
{
    char *st = "One piece";
    char st2[30];
    strcpy(st2, st);
    printf("Now the st is %s\n", st);
    printf("Now the st2 is %s\n", st2);
    return 0;
}