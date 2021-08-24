#include<stdio.h>
int main()
{
    int a;
    printf("Input a number : ");
    scanf("%d",&a);

    if(a&1==1)
        printf("The number is Odd");
    else
        printf("The number is Even");

    return 0;
}
