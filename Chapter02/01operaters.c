#include <stdio.h>

int main()
{
    int a = 1;
    int b = 3;

    printf("The value of 3*a + 7*b is %d\n", 3 * a + 7 * b);
    printf("The value of 3*a / 5*b wont be %d", 3 * a / 5 * b);
    
    /* 
    
    Now! listen here carefully In this language the rules of math doesnt apply
    
    In our maths, 6 * 9 / 1 * 6 =  9

    But here it will be  (54/ 1) * 6 then the answer will be 324

    Here you have take things from left to right when the function with same priority collapes

    Also the priority is, 
    
    First priority            % and * and / 
    Second priority             + and - 
    Third priority                 = 
    
    Also revise notes given by Harry on this topic if you forgot.
    
    */

    return 0;
}