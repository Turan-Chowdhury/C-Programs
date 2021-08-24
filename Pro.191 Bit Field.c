#include<stdio.h>

struct data
{
    unsigned int a : 3;
    unsigned int b : 5;
};

int main()
{
    struct data s;
    s.a = 99;
    s.b = 98;
    printf("%d %d",s.a,s.b);
    return 0;
}

