#include<stdio.h>

int fibo(int f);

int main(){
    int n;
    printf("Enter the value of n for fubonacci series\n");
    scanf("%d", &n);  
    printf("The nth term is %d", fibo(n));
    return 0;
}

int fibo(int f){    
    if(f == 1){
        int a = 0;
        return a;
    }
    else if(f == 2){
        int b = 1;
        return b;
    }
    else{
        int nth;
        nth = fibo(f-1) + fibo(f-2);
        return nth;
    }
}