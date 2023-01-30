// Pointers in Structures. How it works and other stuff!

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
    struct Anime *ptr;                      // This is how you create pointer for structures

    ptr = &OnePiece;

    // (*ptr).rating = 9.5;  // This is one way of writing it.
    ptr->rating = 9.4;       // This is another way. "->" aka arrow operator.

    printf("%f", OnePiece.rating);
    return 0;
}