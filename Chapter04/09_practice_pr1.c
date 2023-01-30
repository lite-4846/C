#include<stdio.h>

int main(){
    int n;
    int i;
    printf("Enter any one digit number\n");
    scanf("%d", &n);
    printf("**** Multiplication table of %d ****\n", n);
    for(i=1 ; i < 11 ; i++){
        printf(" %d X %d = %d \n", n, i, n*i);
    }
    
    return 0;
}