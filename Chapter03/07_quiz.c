#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your marks\n");
    scanf("%d", &grade);

    if (grade <= 100 && grade > 90)
    {
        printf("Your grade is A\n");
    }
    else if (80< grade <= 90) // Now that I checked it myself this format is also applicable. But it's not good to do that. 
    {
        printf("Your grade is B\n");
    }
    else if (grade <= 80 && grade > 70)
    {
        printf("Your grade is C\n");
    }
    else if (grade <= 70 && grade > 60)
    {
        printf("Your grade is D\n");
    }
    else if (grade <= 60 && grade >= 0)
    {
        printf("Your grade is E\n");
    }
    else
    {
        printf("Invalid Marks!");
    }

    return 0;
}