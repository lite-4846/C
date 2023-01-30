// Modify the Previous Program
// To check whether the file exist or not!

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;

    ptr = fopen("02_sample.txt", "r");

    if (ptr == NULL)
    {
        printf("This file does not exist!");
        fclose(ptr);
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of num is : %d\n", num);
        printf("The value of num2 is : %d\n", num2);
    }

    return 0;
}