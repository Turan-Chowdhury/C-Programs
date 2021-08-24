/*  gcd(a,b)= gcd(b,a%b), when a&b!=0
              b         , when a%b==0
*/

#include<stdio.h>

int gcd(int a, int b)
{
    int result;
    if(a%b==0)
        result=b;
    else
        result=gcd(b,a%b);
    return result;
}

int main()
{
    int x;
    x = gcd(32,18);
    printf("%d\n",x);
    return 0;
}
