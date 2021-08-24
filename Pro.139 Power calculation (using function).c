#include<stdio.h>

int my_pow(int a, int b)
{
    int prod=1, i;
    for(i=1;i<=b;i++)
        prod = prod*a;
    return prod;
}

int main()
{
    int x = my_pow(2,5);
    printf("%d\n",x);
    return 0;
}
