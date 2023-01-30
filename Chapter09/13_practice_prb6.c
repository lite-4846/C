// Write a Program to collect the "Date" in Structure.

#include<stdio.h>
#include<string.h>

typedef struct TimeStamp
{
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int sec;
} Tstamp;

void display(Tstamp d1){
    printf("The Date is : %d/%d/%d\n", d1.day, d1.month, d1.year);
    printf("The Time is : %d: %d: %d\n", d1.hour, d1.minute, d1.sec);
}

int main()
{

    Tstamp d1 = {30, 5, 21, 8, 45, 45};
    Tstamp d2 = {7, 6, 21, 5, 38, 34};
    display(d1);
    display(d2);
    
    return 0;
}