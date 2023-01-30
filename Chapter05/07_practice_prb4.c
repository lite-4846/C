#include<stdio.h>

int sumNatural(int a);

int main(){
    int n;
    printf("Enter the value for n\n");
    scanf("%d", &n);
    printf("The sum of first %d natural number is %d", n , sumNatural(n));
    return 0;
}

int sumNatural(int a){
    if (a==0)
    {
        return 0;
    }
    else{
        int sum = 1;
        sum = sumNatural(a-1) + a;
        return sum;
    }  
}