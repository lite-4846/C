#include<stdio.h>

void CountArr(int *arr, int n){
    int ntimes=0;
    for(int i=0; i<n; i++){
        if(arr[i] > 0)
        {
            ntimes++;
        }        
    }
    printf("The number of positive integers are %d", ntimes);
}

int main()
{
    int arr[6] = {10, 11, 3, -34, -45, -56};
    CountArr(arr, 6);

    return 0;
}