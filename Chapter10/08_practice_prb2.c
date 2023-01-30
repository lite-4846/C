// Generate a file with a multiplication table of given number!

#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter the number you want a table of!\n");
    scanf("%d", &num);
    ptr = fopen("18_table.txt", "w");
    for(int i=0; i<10; i++){
        fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated the table of %d in 18_table.txt\n", num);
    return 0;
}