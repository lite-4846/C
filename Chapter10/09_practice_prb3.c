// Write a program to read a file!
// And write its contect twice in another files.

#include <stdio.h>

int main()
{
    FILE *ptr;
    FILE *ptr2;
    char a;
    char c[100];
    int i = 0;
    char ch;
    ptr = fopen("19a_content.txt", "r");
    ptr2 = fopen("19b_content.txt", "w");
  
    while (a != EOF)
    {
        a = fgetc(ptr);
        c[i] = a;
        i++;
    }
    i = i - 1;
    printf("%d\n", i);
    printf("%c%c%c%c", c[28], c[33], c[22], c[38]);
    
    for (int j = 0; j < i; j++)
    {
        ch = c[j];
        fputc(ch, ptr2);
    }
    fprintf(ptr2, "\n");
    for (int k = 0; k < i; k++)
    {
        ch = c[k];
        fputc(ch, ptr2);
    }
    fclose(ptr);
    fclose(ptr2);

    return 0;
}