// Structures. 
// How to write structures! And Example.

#include<stdio.h>
#include<string.h>

struct student
{
    int Rollno;
    int marks;
    char name[10];
};

int main()
{
    struct student s1;
    s1.Rollno = 38;
    s1.marks = 466;
    strcpy(s1.name, "Arjit Singh");

    printf("%d\n", s1.Rollno);
    printf("%d\n", s1.marks);
    printf("%s\n", s1.name);

    return 0;
}