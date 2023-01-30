#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as output.
int sum(int a, int b); // function prototype declaration

int main()
{
    int c = 10;
    c = sum(5, 6); // function call
    printf("The sum is %d\n", c);
    return 0;
}
// function defination
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}