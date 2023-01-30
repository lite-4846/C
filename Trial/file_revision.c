// fscanf(ptr, "%d", &x);
// fprintf(ptr, "The thing is this %d", x);
// fgetc(ptr)
// fputc('c', ptr);


#include<stdio.h>

int main()
{
    FILE *ptr;
    int num = 23;
    int num2 = 29;
    ptr = fopen("sample2.txt", "w");

    fprintf(ptr, "The value of num is %d\n", num);
    fprintf(ptr, "The value of num2 is %d\n", num2);
    fclose(ptr);

    FILE *ptr2;
    ptr2 = fopen("sample3.txt", "w");

    char c = fgetc(ptr2);
    printf("The value of c is %c", c);
    fclose(ptr2);
    
    return 0;
}