#include <stdio.h>

int main(){
    int a = 0;
    do{
        printf("The number is %d\n", a);
        if (a == 5){
            break;
        }
        a++;
    } while (a < 10);

    int i;
    for ( i = 0; i < 500; i++)
    {
        printf("The numbers are %d\n",i);
        if ( i == 7)
        {
            break;
        }
        
    }
    
   return 0;
}