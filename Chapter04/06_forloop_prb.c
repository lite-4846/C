// Write a program for natural numbers in reverse order?
#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("Enter the value for n \n");
    scanf("%d", &n);
    for (n; n; n--)
    {
        printf("The value is %d\n", n);
    }

    // You can also write is like that :
    // for(i=n; i ; i--){
    //       printf("The value is %d\n", n);
    //    }

    return 0;
}