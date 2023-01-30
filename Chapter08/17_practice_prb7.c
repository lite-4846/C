// Program to Count the Occurence of something in the String.

#include<stdio.h>

int Occurence(char *str, char a){
    char *ptr = str;
    int len = 0;
    while (*ptr!='\0')
    {
        if(*ptr==a){
            len++;
        }
        ptr++;
    }
    return len;
}

int main()
{
    char str[] = "Ore wa Monkey D. Luffy! Kaizokuo ni ore wa naru";
    int l = Occurence(str, 'D');
    printf("No. of times 'D' occured is %d", l);
    return 0;
}