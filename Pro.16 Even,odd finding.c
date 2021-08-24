//even,odd finding

#include<stdio.h>
int main()
{
    int x;
    printf("Input a number : ");
    scanf("%d",&x);
    if(x%2==0)
        printf("The number is Even");
    if(x%2!=0)
        printf("The number is Odd");
    return 0;
}
