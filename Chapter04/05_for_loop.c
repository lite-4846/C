#include<stdio.h>

int main()
{
    int i=0;
    int n;
    printf("Enter the value for n\n");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("The value is %d\n", i +1);
    }
    
    return 0;
}