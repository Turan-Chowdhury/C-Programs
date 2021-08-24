//loop (doing the same work again and again)

#include<stdio.h>
int main()
{
    int x;
    x=1;
    p: printf("%d\n",x); //here "p:" is a label
    x++;
    if(x<=5)
        goto p;
    return 0;
}
