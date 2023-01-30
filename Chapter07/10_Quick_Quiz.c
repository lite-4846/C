#include <stdio.h>

void print2num(int ptr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("The number of row %d and coloumn %d is : %d and %d \n", i + 1, j + 1, ptr[i][j], ptr[i][j+1]);
        }
    }
}

int main()
{
    int num_2[2][2];
    // int *ptr = num_2;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter number for row %d and coloumn %d\n", i + 1, j + 1);
            scanf("%d", &num_2[i][j]);
        }
    }
    print2num(num_2);
    return 0;
}

