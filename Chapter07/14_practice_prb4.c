#include<stdio.h>

// This method is by Harry...

void reverseArr(int ptr[], int n){
    int temp;
    for(int i=0; i<(n/2); i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1]; 
        ptr[n-i-1] = temp;    
    }
} 
                                                          

int main()
{
    int arr[5];
    for(int i=0; i<5; i++){
        printf("Enter the number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    reverseArr(arr, 5);

    // This is also included in Harry's method....
    
    for(int i=0; i<5; i++){
        printf("The reverse value of %d is %d\n", i+1, arr[i]);
    }
    
    return 0;
}