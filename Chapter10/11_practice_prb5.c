// Write a program to modify the value of file!
// Double the value and overwrite it in same file!

#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("21_double.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    ptr = fopen("21_double.txt", "w");
    fprintf(ptr, "%d", 2*num);
    fclose(ptr);
    return 0;
}