//break;
//break can terminates or stops a loop.

#include<stdio.h>
int main()
{
    int x;
    for(x=1;x<=20;x++)
    {
        if(x==12)
            break;
        printf("%d\n",x);
    }
    return 0;
}
