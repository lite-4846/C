#include<stdio.h>

int main()
{
    // Normal way of declaring lots of similar integer variable and then giving them certain value.

    int mark1, mark2, mark3, mark4;
    mark1 = 10;
    mark2 = 87;
    mark3 = 83;
    mark4 = 64;

    // Modern way to declare lots of similar integer variable and then giving them certain value.
    // By using array of course. Btw using 'marks' instead of 'mark' here.

    int marks[4];
    marks[0] = 10;
    marks[1] = 87;
    marks[2] = 83;
    marks[3] = 64;

    return 0;
}