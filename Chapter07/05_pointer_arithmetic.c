#include<stdio.h>

int main()
{
    // int a = 38;
    // int *ptr = &a; 
    // printf("The value of ptr is %u\n", ptr);
    // // ptr++;
    // ptr = ptr + 1;         // Same as above.

    // printf("The value of ptr is %u\n", ptr);

/* As you saw the output the value of ptr increases by 4 cause the value of integer in our 
    system is 4 bytes. */

    // char b = '4';
    // char *ptr1 = &b; 
    // printf("The value of ptr is %u\n", ptr1);
    // // ptr++;
    // ptr1 = ptr1 + 1;         // Same as above.

    // printf("The value of ptr is %u\n", ptr1);
    
/* As you saw the output the value of ptr increases by 1 cause the value of char in our 
    system is 1 byte. */

    float a = 3.8;
    float *ptr = &a; 
    printf("The value of ptr is %u\n", ptr);
    // ptr++;
    ptr = ptr + 1;         // Same as above.

    printf("The value of ptr is %u\n", ptr);

/* As you saw the output the value of ptr increases by 4 cause the value of float in our 
    system is 4 bytes. */

    return 0;
}