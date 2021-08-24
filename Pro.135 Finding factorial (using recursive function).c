/* Recursion : Recursion is when a function calls itself.

        fact(n)= n*fact(n-1), when n>0
                 1          , when n=0
*/

#include<stdio.h>

int fact(int x)
{
    int result;

    if(x==0)
        result=1;
    else
        result=x*fact(x-1);

    return result;
}

int main()
{
    int e;
    e = fact(5);
    printf("%d\n",e);
    return 0;
}
