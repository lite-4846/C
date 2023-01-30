#include <stdio.h>
#include <string.h>

void printLenght(char *st)
{
    int sum = 0;
    while (*st != '\0')
    {
        sum++;
        st++;
    }
    printf("The length of string st is : %d\n", sum);
};

int main()
{
    char *st = "Hunter x Hunter";
    int sum = 0;
    int a = strlen(st);

    printf("The length of string st is : %d\n", a);

    // This is long way of 'strlen', I think!.
    printLenght(st);
    return 0;
}