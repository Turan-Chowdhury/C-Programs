/*
    Call by value: In this case values of the actual parameters are copied
                   to the formal parameters. Any change made to the formal
                   parameters do not affect the actual parameters.
*/

#include<stdio.h>

void f(int a)
{
    a = 10;
}

int main()
{
    int x = 99;
    printf("Before function call %d\n",x);
    f(x);
    printf("After function call %d\n",x);
    return 0;
}

