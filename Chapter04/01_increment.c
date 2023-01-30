#include <stdio.h>

int main()
{
    int a = 1;
    printf("%d\n", a);
    a--;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);

    a++; //   Pahale Print fir increament
    ++a; //   Pahale increment fir Print

    a--; //   Pahale Print fir decreament
    --a; //   Pahale decrement fir Print

    a += 10; // <-- increment a by 10

    printf("%d\n", a);

    // Now Now!
    // For a compiler gcc the argument is read from right to left. I know you wouldn't understand by that so here's
    // An Example

    int b=3;
    printf("%d %d %d\n", b, b++, ++b);
    return 0;
}