//logical operators 4

#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    if(!(a>0||b>0))
        printf("hello world");
    else
        printf("xyz");
    return 0;
}
