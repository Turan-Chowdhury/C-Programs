//finding largest number using conditional operator

#include<stdio.h>
int main()
{
    int a, b, c, x;
    printf("Input three integers : ");
    scanf("%d%d%d",&a,&b,&c);
    x = (a>b)? ((a>c)? a:c):((b>c)? b:c);
    printf("%d is largest",x);
    return 0;
}
