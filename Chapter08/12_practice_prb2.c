#include<stdio.h>

int strlen(char *st){
    int len=0;
    char *ptr = st;
    while(*ptr != '\0'){
        ptr++;
        len++;
    }
    return len;
}

int main()
{
    char *st = "Burn This Down";
    int l = strlen(st);
    printf("The lenght of string st is %d", l);
    return 0;
}