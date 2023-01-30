#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
    int num , guess , ngusses=1;
    srand(time(0));
    num = rand()%100 + 1; 

    // printf("The random number is %d\n", num);

    printf("Guess the number from 1 to 100\n\n");
        
    do{
        scanf("%d", &guess);
        if (guess<num)
        {
            printf("Higher number please!\n");
        }
        else if (guess>num)
        {
            printf("Lower number please!\n");
        }
        else
        {
            printf("You guessed it in %d times\n", ngusses);
        }
        ngusses++;      

    }while(guess != num);
    getch();
    return 0;
}