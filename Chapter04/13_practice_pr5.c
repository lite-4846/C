#include<stdio.h>

int main(){

    int i=1 , n , sum = 1;
    printf("Enter any number to calculate its factorial\n");
    scanf("%d", &n);
    // for(i=1 ; i <= n ; i++){
    //     sum *= i;
    // }
    // printf("The value of factorial is %d\n", sum);

    while(i <= n){
        sum *= i;
        i++;
    }
    printf("The value of factorial is %d\n", sum);

    return 0;
}