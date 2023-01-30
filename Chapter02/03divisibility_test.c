#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value you wanna check divisibility by 97\n");
    scanf("%d", &a);
    if (a % 97 == 0)
    {
        printf("The number %d is divisible by 97", a);
    }
    else
    {
        printf("The number %d is not divisible by 97", a);        
    } 
    return 0;
}