#include<stdio.h>

int tentimes(int a);

int main()
{
    int i = 10;
    tentimes(i);
    // i = tentimes(i);
    printf("The value of i is %d", i );
    return 0;
}

int tentimes(int a){
    a = a *10;
    return a;
}

// As we can see ['call by value'] doesn't affect the value of i unless you assign them to variable.
// It is similar to the [sum function] but the sum function is assings to certain value that's it.