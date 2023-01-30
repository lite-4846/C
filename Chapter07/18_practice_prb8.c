#include<stdio.h>

int main()
{
    int arr[2][3][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("The address of a[%d][%d][%d] is %d \n", i, j, k, &arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}