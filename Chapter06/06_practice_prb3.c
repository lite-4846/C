#include<stdio.h>

int tentimes(int *x);

int main()
{
    int a = 8;
    int *b = &a;
    tentimes(b);
    printf("The ten times of a is %d", *b);
    return 0;
}

int tentimes(int *x){
    *x = (*x) * 10;
    return *x;
}