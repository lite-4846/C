#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of Element %d is %d\n", i + 1, *(ptr + i));
//         // *ptr++; You can use this or simply *(ptr + 1)
//     }
// }

// This is second way

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of Element %d is %d\n", i + 1, ptr[i]);
    }
    // If you change the value of any array here, since its taking the address it will change the real values.
    ptr[2] = 88;
}

int main()
{
    int arr[] = {27, 38, 48, 48, 11};
    printArray(arr, 5);
    printf("The value of arr[2] is %d", arr[2]);
    return 0;
}
