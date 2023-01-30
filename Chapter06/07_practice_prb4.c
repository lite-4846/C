#include<stdio.h>

void sumAndavg(int a, int b, int *sum, float *avg);

int main()
{
    int a=4, b=7, sum;
    float avg;
    sumAndavg(a , b, &sum , &avg);
    printf("The sum and avg of a and b is %d and %.2f", sum , avg);
    return 0;
}

void sumAndavg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

// Well done man !