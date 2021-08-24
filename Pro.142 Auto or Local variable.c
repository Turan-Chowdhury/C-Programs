/*
    (Scope or visibility)              (Life time)
    Function where created.            To the end of that function.

*/

#include<stdio.h>
void f1();
void f2();

int main()
{
    int m=1000;
    f2();
    printf("main: %d\n",m);
}

void f1()
{
    int m=10;
    printf("f1: %d\n",m);
}

void f2()
{
    int m=100;
    f1();
    printf("f2: %d\n",m);
}
