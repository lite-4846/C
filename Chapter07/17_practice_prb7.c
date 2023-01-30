#include<stdio.h>

void printTable(int *multable, int num){
    printf("The multiplication table of %d is : \n");
    for(int i=0; i<10; i++){
        multable[i] = num * (i+1);
    }
    for(int i=0; i<10; i++){
        printf("%d x %d = %d\n", num, i+1, multable[i]);
    }
    printf("************************************\n\n");
}

int main()
{
    int noft;
    printf("Enter the no. of tables you wanna print\n");
    scanf("%d", &noft);
    int num[noft];
    int multable[noft][10];
    for (int i = 0; i < noft; i++)
    {
        printf("Enter %dth number : ", i+1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < noft; i++)
    {
        printTable(multable[i], num[i]);
    }
    
    return 0;
}