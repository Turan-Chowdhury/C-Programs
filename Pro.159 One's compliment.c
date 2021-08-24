#include<stdio.h>
int main()
{
    int x, a;
    printf("Input an integer : ");
    scanf("%d",&x);

    a = ~x;

    printf("Result is : %d",a);
    return 0;
}
