// Write a Program to collect the "Date" in Structure.

#include<stdio.h>
#include<string.h>

typedef struct StoreDate
{
    int day;
    int month;
    int year;
} Date;

void display(Date d1){
    printf("The Date is : %d/%d/%d\n", d1.day, d1.month, d1.year);
}

int dateCmp(Date d1, Date d2){
    // Comparing dates on the basis of Year
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }
    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }
    if (d1.day>d2.day)
    {
        return 1;
    }
    if (d1.day<d2.day)
    {
        return -1;
    }
    else
    {
        return 0;
    }    
}
int main()
{

    Date d1 = {30, 5, 21};
    Date d2 = {7, 6, 21};
    display(d1);
    display(d2);
    int a = dateCmp(d1, d2);
    printf("Date compare returns function : %d", a);

    return 0;
}