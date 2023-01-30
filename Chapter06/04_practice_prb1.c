#include<stdio.h>

int main(){
    int a=8;
    int *b;
    b = &a;
    printf("The value of a is %d\n", a);
    printf("The address of a is %u\n", b);
    printf("The value of a is %d\n", *b);
    return 0;
}