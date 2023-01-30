#include<stdio.h>

int main()
{
    int marks[5];

    printf("Enter the marks of 5 students\n");
    printf("1st student :");
    scanf("%d", &marks[0]);
    printf("2nd student :");
    scanf("%d", &marks[1]);
    printf("3rd student :");
    scanf("%d", &marks[2]);
    printf("4th student :");
    scanf("%d", &marks[3]);
    printf("5th student :");
    scanf("%d", &marks[4]);

    printf("The marks of 5 students are %d %d %d %d and %d\n", 
        marks[0], marks[1], marks[2], marks[3], marks[4]);

    return 0;
}