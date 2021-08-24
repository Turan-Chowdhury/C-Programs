//finding largest number among 4

#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Input four integers : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("\n");

    if(a>d)
        if(a>b)
            if(a>c)
                printf("%d is largest\n",a);
            else
                printf("%d is largest\n",c);
        else
            if(b>c)
                printf("%d is largest\n",b);
            else
                printf("%d is largest\n",c);
    else
        if(d>b)
            if(d>c)
                printf("%d is largest\n",d);
            else
                printf("%d is largest\n",c);
        else
            if(b>c)
                printf("%d is largest\n",b);
            else
                printf("%d is largest\n",c);

    return 0;
}
