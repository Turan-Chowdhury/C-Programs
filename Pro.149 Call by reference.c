/*
    Call by reference: Formal parameters contain pointers. Actual parameters send
                       address of variable to formal parameters. Any change made
                       to the formal parameters will also affect actual parameters.
*/

#include<stdio.h>

void f(int *a)
{
    *a = 10;
}

int main()
{
    int x = 99;
    printf("Before function call %d\n",x);
    f(&x);
    printf("After function call %d\n",x);
    return 0;
}

