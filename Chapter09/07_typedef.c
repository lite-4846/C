// Now Now! Here is the best thing.
// Using typedef you can create a custom datatype.

#include <stdio.h>
#include <string.h>

typedef struct Anime
{
    int Episode;
    float rating;
    char name[20];
} Otaku;

void show(Otaku *Op)
{
    Otaku *ptr = Op;
    printf("Episode No. : %d\n", (*Op).Episode);
    printf("Rating : %.1f\n", (*Op).rating);
    printf("Based on : %s\n", (*Op).name);
    Op->Episode = 1000;
}

int main()
{
    Otaku OnePiece = {975, 8.8, "Pirates"};
    Otaku *ptr = &OnePiece;


    show(ptr);
    printf("Episode No. : %d", OnePiece.Episode);  // The value won't change cause the copy of variable is sent.
    return 0;
}