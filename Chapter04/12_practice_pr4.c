#include<stdio.h>

int main(){

    int i, n = 10, sum=0;
    for(i=0; i<=n ; i++){
        sum += i* 8;
    }
    printf("The sum is %d", sum);

    return 0;
}