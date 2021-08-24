/*
   n = 4

   ****
    ***
     **
      *

*/

#include<stdio.h>
int main()
{
    int n, space, star, i, j;
    printf("Input n : ");
    scanf("%d",&n);
    printf("\n");

    space = 0;
    star = n;

    for(i=1;i<=n;i++)
     {
        for(j=1;j<=space;j++)
            printf(" ");
        space++;
        for(j=1;j<=star;j++)
            printf("*");
        star--;
        printf("\n");
     }
    return 0;
}
