#include <stdio.h>

int main()
{
    int r;
    int h;
    float pi = 3.14;

    printf("Enter the radius of cylinder\n");
    scanf("%d", &r);

    printf("Enter the height of cylinder\n");
    scanf("%d", &h);

    printf("The volume of of cylinder is %f", pi * r * r * h);
    return 0;
}