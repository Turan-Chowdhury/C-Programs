//positive, negetive, and zero

#include<stdio.h>
int main()
{
    int x;
    printf("Input an integer : ");
    scanf("%d",&x);
    if(x>0)
        printf("The number is Positive");
    if(x<0)
        printf("The number is Negetive");
    if(x==0)
        printf("The number is Zero");
    return 0;
}
