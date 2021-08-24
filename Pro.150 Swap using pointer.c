#include<stdio.h>

void f(int *p1, int *p2)
{
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}

int main()
{
    int a, b;
    a = 35;
    b = 20;
    printf("Before function call a=%d b=%d\n",a,b);
    f(&a,&b);
    printf("After function call a=%d b=%d\n",a,b);
    return 0;
}

