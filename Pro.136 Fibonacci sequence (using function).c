/*  Fibonacci sequence : 1 1 2 3 5 8 13 21 etc

    fib(n)= fib(n-1)+fib(n-2), when n>2
            1                , when n=1 or n=2
*/

#include<stdio.h>

int fib(int n)
{
    int result;
    if(n==1 || n==2)
        result=1;
    else
        result=fib(n-1)+fib(n-2);
    return result;
}

int main()
{
    int e;
    e = fib(5);
    printf("%d\n",e);
    return 0;
}
