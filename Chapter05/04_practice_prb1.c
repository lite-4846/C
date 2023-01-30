#include<stdio.h>

float average(int a, int b, int c);

int main(){
    int a, b, c;
    float avg;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    avg = average(a,b,c);
    printf("The average of %d, %d and %d is %.2f\n", a, b, c, avg);
    return 0;
}

float average(int a, int b, int c){
    float avg;
    avg = (float)(a + b + c)/3;
    return avg;
}