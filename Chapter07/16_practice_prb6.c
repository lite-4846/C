#include<stdio.h>

void printTable(int *multable, int num){
    printf("The multiplication table of %d is : ", num);
    for(int i=0; i<10; i++){
        multable[i] = num * (i+1);
    }
    for(int i=0; i<10; i++){
        printf("%d x %d = %d\n", num, i+1, multable[i]);
    }
    printf("************************************");
}

int main()
{
    int multable[3][10];
    printTable(multable[0], 2);
    printTable(multable[1], 7);
    printTable(multable[2], 9);
    return 0;
}