#include <stdio.h>

int main()
{
    int a = 0;
    while (10 <= a + 10 && a + 10 <= 20)
    {
        printf("The value of a is %d\n", a + 10);
        a++;
    }

    //There is also a different way to solve it. The above one is my statergy and the given below is harry's stratergy
    
    // for (int i = 11; i < 21; i++)
    // {
    //     printf("The value of i is %d\n", i);
    // }
    
    return 0;
}