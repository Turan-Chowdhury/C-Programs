// Function prototype : No need follow placement rules of calling and called function.

#include<stdio.h>
void f1(int a);
void f2(int );

void f1(int a)
{
    if(a>0)
        f2(a-1);
    printf("%d\n",a);
}

void f2(int b)
{
    if(b>0)
        f1(b-1);
    printf("%d\n",b);
}

int main()
{
    f1(5);
    printf("finish\n");
    return 0;
}
