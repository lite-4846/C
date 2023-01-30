// ROCK PAPER SCISSOR!
// This is gonna be fun!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int RockPaperScissor(char you, char comp)
{
    // return 1 when you win, -1 when you lose and 0 when draw!
    // Possibilities covered : rr pp ss
    if (you == comp)
    {
        return 0;
    }

    // Possibilities covered : rp ps sr
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int num = rand() % 3 + 1;

    printf("\n              ******ROCK PAPER SCISSOR******\n\n");
    printf("Instruction : Enter 'r' for ROCK, 'p' for PAPER and 's' for SCISSOR : \n");
    printf("\n                    YOU : ");
    scanf("%c", &you);

    if (num == 1)
    {
        comp = 'r';
    }
    else if (num == 2)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    int result = RockPaperScissor(you, comp);
    printf("\n          YOU : %c    and     COMP : %c\n", you, comp);

    if (result == 0)
    {
        printf("\n                  Match DRAW!\n");
    }
    else if (result == 1)
    {
        printf("\n                  You WON!\n");
    }
    else
    {
        printf("\n                  You LOST!\n");
    }
    
    getch();
    return 0;
}