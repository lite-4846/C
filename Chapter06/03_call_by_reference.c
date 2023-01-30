#include<stdio.h>

void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main(){
    int x=4, y=7;
    printf("The value of x and y before swap is %d and %d\n", x, y);

    // wrong_swap(x,y); As you see it wont work cause it's call by value.

    swap(&x, &y);

    printf("The value of x and y after swap is %d and %d\n", x, y);
    return 0;
}

void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}