#include<stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    // ptr = &marks[0];
    ptr = marks;        // It can be written like this.

    for(int i=0; i<4; i++){
        printf("Enter the marks for the student %d : \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(int i=0; i<4; i++){
        printf("The marks of student %d is %d \n", i+1, marks[i]);
    }

    // I think this is the smallest way to solve this problem.

    return 0;
}