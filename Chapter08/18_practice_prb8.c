#include <stdio.h>

void PorA(char *str, char c)
{
    char *ptr = str;
    while (*ptr != '\0')
    {       
        if (*ptr==c)
        {
            printf("The character %c is Present in the String", c);
            break;
        }       
        ptr++;
    }
    if (*ptr=='\0'){
        printf("The character %c is Absent in the String", c);        
    }  
}

int main()
{
    char str[] = "Ore wa Monkey D. Luffy! Kaizokuo ni ore wa naru";
    PorA(str, 'b');
    return 0;
}