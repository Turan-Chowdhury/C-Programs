/*
   row = 4
   column = 6

       1    2    3    4    5    6
       2    4    6    8   10   12
       3    6    9   12   15   18
       4    8   12   16   20   24

*/

#include<stdio.h>
int main()
{
    int r, c, x, i, j;
    printf("Input row : ");
    scanf("%d",&r);
    printf("Input column : ");
    scanf("%d",&c);
    printf("\n");

    for(i=1;i<=r;i++)
     {
        for(j=1;j<=c;j++)
         {
            x = i*j;
            printf("%5d",x);
         }
        printf("\n");
     }
    return 0;
}
