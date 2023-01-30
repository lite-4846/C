#include <stdio.h>

int main()
{
    int i = 0, n = 10, sum = 0;
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // printf("The sum of first 10 natural numbers is %d\n", sum);

    // // Above is the one way to do it but it is half-assed copied from harry .
    // // And below is the one harry wrote.

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    // printf("The sum of first 10 natural numbers is %d", sum);

    do
    {
        sum += i;
        i++;
    } while (i<=n);
    printf("The sum of first 10 natural numbers is %d", sum);
    
   return 0;
}