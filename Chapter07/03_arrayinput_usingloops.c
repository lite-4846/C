#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d : ", i+1);
        scanf("%d", &marks[i]);
    }

    printf("The marks of 5 students are %d %d %d %d and %d\n",
           marks[0], marks[1], marks[2], marks[3], marks[4]);

        // So this is how it works. REMEMBER IT.        

    return 0;
}