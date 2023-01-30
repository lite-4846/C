#include<stdio.h>

int main()
{
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;
    if(ptr == &arr[2]){
        printf("These point to the value of 3rd element of array");
    }
    else{
        printf("These do not point to the value of 3rd element of array");
    }
    return 0;
}