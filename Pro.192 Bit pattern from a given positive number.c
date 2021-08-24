#include<stdio.h>
int main()
{
    unsigned i, n;
    printf("Input a number : ");
    scanf("%u",&n);
    printf("\n");

    printf("Bit pattern : ");

    for (i=1<<31;i>0;i=i>>1)
        if((n&i)==0)
            printf("0");
        else
            printf("1");

    printf("\n");
    return 0;
}

