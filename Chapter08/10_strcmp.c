#include<stdio.h>
#include <string.h>

int main()
{
    char *str1 = "One";
    char *str2 = "Piece";

    int val = strcmp(str1, str2);
    printf("Now the val will be :: %d", val);

    // This function simply does is substract the ASCII value of first string and second string like (str1 - str2) 
    // It only gives -1 , 1 , or 0. It depends on the string. 
    // In case the words are like "hello" and "hell" then the first four will be canceled and it will substract the ASCII value of o and \0 
    // which is 111 and 0 so the answer will be +1.

    return 0;
}