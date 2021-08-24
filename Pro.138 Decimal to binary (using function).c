#include<stdio.h>

void dec_to_bin(int x)
{
    int d, r;
    d = x/2;
    r = x%2;
    if(d!=0)
        dec_to_bin(d);
    printf("%d",r);
}

int main()
{
    dec_to_bin(25);
    printf("\n");
    return 0;
}
