// How to fgetc to input all the data at once!
// Intro to "EOF" means End of file, a keyword used to stop the loop simply.

#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("16_fgetc_demo.txt", "r");
    char c = fgetc(ptr);
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}