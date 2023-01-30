// How to Write file!
// Using fprintf!

#include<stdio.h>

int main()
{
    FILE *ptr;
    int num = 30;
    int num2= 38;

    ptr = fopen("04_generated.txt", "w");

    fprintf(ptr, "The value of num is %d\n", num);
    fprintf(ptr, "The value of num2 is %d\n", num2);
    fprintf(ptr, "TO BE CONTINUED");
    fclose(ptr);

    return 0;
}