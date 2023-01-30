#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your ratings\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("The rating is 1\n");
        break;
    case 2:
        printf("The rating is 2\n");
        break;
    case 3:
        printf("The rating is 3\n");
        break;
    case 5:
        printf("The rating is 4\n");
        break;
    // case 5:
    //     printf("The rating is 5\n");
    //     break;

    default:
        printf("Invalid rating!\n");
        break;
    }
    return 0;
}