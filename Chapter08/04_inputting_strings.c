#include <stdio.h>

int main()
{
    char s[20];
    printf("Enter your name : ");
    scanf("%s", s);
    printf("Your name is %s", s);

    // This method has drawback as You can store only one word cause it does not allow space.
    
    return 0;
}