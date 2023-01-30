#include<stdio.h>

void forever(); // Function Prototype

int main(){

    int a;
    printf("The song I am listening now is\n");
    forever();  // Function Call

    return 0;
}
// Function defination
void forever(){
    printf("Forever!\n");
}
