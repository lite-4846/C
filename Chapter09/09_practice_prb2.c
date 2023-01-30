// How to use arrow Operator!

#include <stdio.h>

typedef struct Op
{
    int Episode;
    float rating;
    char name[20];
} Anime;

Anime print(Anime *Op)
{
    printf("Episode No. : %d\n", Op->Episode);
    printf("Rating : %.1f\n", Op->rating);
    printf("Based on : %s\n", Op->name);

    printf("Episode No. : %d\n", (*Op).Episode);
    printf("Rating : %.1f\n", (*Op).rating);
    printf("Based on : %s\n", (*Op).name);
}

int main()
{
    Anime OnePiece = {975, 8.8, "Pirates"};

    return 0;
}