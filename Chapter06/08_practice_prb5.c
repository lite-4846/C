#include<stdio.h>



int main()
{
    int i = 8;
    int *p = &i;
    int **pp = &p;
    printf("The value of i is %d", **pp);
    return 0;
}