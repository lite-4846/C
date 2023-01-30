// Take name and salary of 2 employee from user!
// Write them into a text file!

#include<stdio.h>

struct employee
{
    char name[10];
    int salary;
};

int main()
{
    FILE *ptr;
    struct employee e1, e2;
    printf("Enter the name of 1st employee : ");
    scanf("%s", &e1.name);
    printf("Enter the salary of 1st employee : ");
    scanf("%d", &e1.salary);

    printf("Enter the name of 2nd employee : ");
    scanf("%s", &e2.name);
    printf("Enter the salary of 2nd employee : ");
    scanf("%d", &e2.salary);

    ptr = fopen("20_employee.txt", "w");
    fprintf(ptr, "Name : %s, Salary : %d\n", e1.name, e1.salary);
    fprintf(ptr, "Name : %s, Salary : %d\n", e2.name, e2.salary);
    fclose(ptr);
    return 0;
}