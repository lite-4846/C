// How to Use fgetc and fputc!

#include<stdio.h>

int main()
{
    FILE *ptr;

    // ptr = fopen("05_fgetc.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));

    ptr = fopen("05_fputc.txt", "w");
    fputc('T', ptr);
    fputc('T', ptr);
    fputc('T', ptr);
    fclose(ptr);
    return 0;
}
