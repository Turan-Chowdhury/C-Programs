/*
    special operator : , and sizeof()

    (,) operator executed from left to right and the right most value is the final value.
*/

#include<stdio.h>
int main()
{
    int x, y, s;
    s = (x=10,y=5,x+y);
    printf("Sum is : %d\n",s);
    return 0;
}
