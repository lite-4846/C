#include<stdio.h>

void slice(char *st, int m, int n){
    int i=0;
    while((m+i)<n){
        st[i] = st[m+i];
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char st[] = "HighschoolDxD";
    slice(st, 3, 11);
    printf("Now the string is %s", st);
    return 0;
}