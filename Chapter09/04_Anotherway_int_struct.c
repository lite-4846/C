// Program to initialize structure in easier way!

#include<stdio.h>
#include<string.h>

struct Anime 
{
    int Episode;
    float rating;
    char name[20];
};

int main()
{
    struct Anime OnePiece = {975, 8.8, "Pirates"};

    printf("Episode No. : %d\n", OnePiece.Episode);
    printf("Rating : %.1f\n", OnePiece.rating);
    printf("Based on : %s\n", OnePiece.name);
    
    return 0;
}