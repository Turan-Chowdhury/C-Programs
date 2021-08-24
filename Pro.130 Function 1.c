#include<stdio.h>
int add(int p, int q)
{
    int r;
    r = p+q;
    return r;
}
int main()
{
    int x, y, z;
    x = 13;
    y = 12;
    z = add(x,y);
    printf("%d",z);
    return 0;
}
