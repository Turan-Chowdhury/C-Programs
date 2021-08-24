#include<stdio.h>
int main()
{
    int x, i, prod;
    printf("Input a number : ");
    scanf("%d",&x);

    prod = 1;

    for(i=1;i<=x;i++)
        prod = prod*i;

    printf("Factorial is : %d",prod);
    return 0;
}
