#include <stdio.h>

void printAdd(int a);

int main()
{
    int i;
    printf("The address of i is %u\n", &i);
    printAdd(i);
    return 0;
}

void printAdd(int a){
    printf("The address of i is %u\n", &a);
}
