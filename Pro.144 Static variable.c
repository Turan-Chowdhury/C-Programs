/*
    (Scope or visibility)              (Life time)
    Function where created.            Till the end of the program.

    Note: 1. (Must be initialized)
          2. (Initialization works only once)

*/

#include<stdio.h>

void f();

int main()
{
    int i;

    for(i=1;i<=3;i++)
        f();

    return 0;
}

void f()
{
    static int x=10;
    x = x+10;
    printf("%d\n",x);
}
