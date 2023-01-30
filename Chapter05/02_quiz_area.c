#include <stdio.h>

int areaofcircle(int side);

int main(){

    int side, area;
    printf("Enter the lenght of the side of square\n");
    scanf("%d", &side);
    area = areaofcircle(side);
    printf("The area of circle is %d", area);
    return 0;
}

int areaofcircle(int side){
    int area;
    area = side*side ;
    return area;
}