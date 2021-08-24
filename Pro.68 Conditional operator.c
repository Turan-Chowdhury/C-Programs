//conditional operator : ( ? : )
//finding large number between two

#include<stdio.h>
int main()
{
    int a, b, x;
    printf("Input two numbers : ");
    scanf("%d%d",&a,&b);
    x = (a>b)? a:b;
    printf("Large number is : %d",x);
    return 0;
}
