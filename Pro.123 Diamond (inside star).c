#include<stdio.h>
int main()
{
    int r, star, space, i, j;
    printf("Input row(odd) : ");
    scanf("%d",&r);
    printf("\n");

    for(i=1;i<=r;i++)
        printf("*");
    printf("\n");

    space = 1;
    star = r/2;

    for(i=1;i<=r/2;i++)
     {
        for(j=1;j<=star;j++)
            printf("*");

        for(j=1;j<=space;j++)
            printf(" ");
        space+=2;

        for(j=1;j<=star;j++)
            printf("*");
        star--;
        printf("\n");
     }

    space = r-4;
    star = 2;

    for(i=1;i<=r/2-1;i++)
     {
        for(j=1;j<=star;j++)
            printf("*");

        for(j=1;j<=space;j++)
            printf(" ");
        space-=2;

        for(j=1;j<=star;j++)
            printf("*");
        star++;
        printf("\n");
     }

    for(i=1;i<=r;i++)
        printf("*");
    printf("\n");
    return 0;
}
