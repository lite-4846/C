#include <stdio.h>

int main()
{

    int i, n, t;

    printf("Enter the number to check it is prime or not\n");
    scanf("%d", &n);

    // if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11== 0 )
    // {
    //     printf("The number %d is not prime", n);
    // }
    // else
    // {
    //     printf("The number %d is prime", n);
    // }
    // This is the one way to solve it like half-assed
    // cause if you put 2, 3, 5 or 7 or 11 it will just say it is not a prime number.

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("The number %d is not prime \n", n);
            break;
        }
        else
        {
            printf("The number %d is prime\n", n);
            break;
        }
    }

    return 0;
}