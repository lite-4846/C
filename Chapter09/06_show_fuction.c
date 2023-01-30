// How Programs work for structure.

#include <stdio.h>
#include <string.h>

struct Anime
{
    int Episode;
    float rating;
    char name[20];
};

void show(struct Anime Op)
{
    printf("Episode No. : %d\n", Op.Episode);
    printf("Rating : %.1f\n", Op.rating);
    printf("Based on : %s\n", Op.name);
    Op.Episode = 1000;
}

int main()
{
    struct Anime OnePiece = {975, 8.8, "Pirates"};
    show(OnePiece);
    printf("Episode No. : %d", OnePiece.Episode);  // The value won't change cause the copy of variable is sent.
    return 0;
}