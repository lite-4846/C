// Writer a Program to create a structure of vector!

#include<stdio.h>

typedef struct vector
{
    int x;
    int y;
} vec;

vec SumVector(vec v1, vec v2){
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    vec v1, v2, sum;

    v1.x = 19;
    v1.y = 38;
    printf(" v1 : X dim is %d Y dim is %d\n", v1.x, v1.y);

    v2.x = 12;
    v2.y = 32;
    printf(" v2 : X dim is %d Y dim is %d\n", v2.x, v2.y);

    sum = SumVector(v1, v2);
    printf("Result : X dim is %d Y dim is %d\n", sum.x, sum.y);

    return 0;
}