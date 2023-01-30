#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a = 2, b = 7;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The sum of a and b is %d\n", sum(a, b));
    printf("The value of a and b after the function is %d and %d\n", a, b);
    return 0;
}
    // The sum function doesn't interfere with the value of a and b. cause its call by value //
    
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 3385;
    b = 335;
    return c;
}