//continue;
//continue does not terminates or stops loop, but skip iteration.

#include<stdio.h>
int main()
{
    int x;
    for(x=1;x<=20;x++)
    {
        if(x==12)
            continue;
        printf("%d\n",x);
    }
    return 0;
}

