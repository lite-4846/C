#include<stdio.h>

void strcopy(char *st2, char *st1){
    int i=0;
    char c;
    while(c!='\0'){
        c = st1[i];
        st2[i] = c;
        i++;
    }
    
}

int main()
{
    char st1[] = "False Confidence";
    char st2[20];
    strcopy(st2, st1);
    printf("The string st2 is %s", st2);
    return 0;
}