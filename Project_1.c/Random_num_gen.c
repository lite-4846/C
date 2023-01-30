#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number , guess , nguesses;
    srand(time(0));
    number = rand()%100 + 1 ; // Random number generater upto 100.
    printf("The number is %d\n", number);
    return 0;
}