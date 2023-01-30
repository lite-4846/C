// Actually this is problem 2.
// This is something tough.
// Here we are taking input from %s and %c 

#include<stdio.h>

int main()
{
    char st1[20];
    char st2[20];
    char c;
    int i=0;

    printf("Enter the first string in st1\n");
    scanf("%s", st1);
    printf("Enter the first string in st2\n");

    while(c!='\n'){
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }

    st2[i-1] = '\0';

    printf("The string st1 is :: %s\n", st1);    
    printf("The string st2 is :: %s\n", st2);

    return 0;
}