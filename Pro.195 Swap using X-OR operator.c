#include<stdio.h>
int main()
{
    int x, y;
    printf("Input 2 numbers : ");
    scanf("%d%d",&x,&y);
    printf("\n");

    printf("Before swap : %d %d\n",x,y);

    x = x^y;
    y = x^y;
    x = x^y;

    printf("After swap : %d %d\n",x,y);

    return 0;
}

