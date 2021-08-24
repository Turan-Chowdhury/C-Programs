//checking for zero before division

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input two numbers : ");
    scanf("%d%d",&a,&b);
    if(b!=0)
    {
        c = a/b;
        printf("Result of division is : %d",c);
    }
    else
        printf("Second number is zero, division not possible");
        return 0;
}
