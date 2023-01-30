#include<stdio.h>

float force(float mass);

int main(){
    float mass;
    printf("Enter the value of mass in kg\n");
    scanf("%f", &mass);
    printf("The force on the object is %.2f N\n", force(mass));
    return 0;
}

float force(float mass){
    float f;
    f = mass * 9.8;
    return f;
}