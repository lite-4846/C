// Program to create structure in arrays. You will see!

#include<stdio.h>
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee facebook[100];

    facebook[0].code = 10;
    facebook[0].salary = 33.35;
    strcpy(facebook[0].name, "Luffy");

    printf("Well Done!");
   
    return 0;
}