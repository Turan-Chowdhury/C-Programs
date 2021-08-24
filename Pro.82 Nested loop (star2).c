/*
   row = 4
   column = 5

   *****
   *****
   *****
   *****

*/

#include<stdio.h>
int main()
{
    int r, c, i, j;
    printf("Input row : ");
    scanf("%d",&r);
    printf("Input column : ");
    scanf("%d",&c);
    printf("\n");

    for(i=1;i<=r;i++)
     {
       for(j=1;j<=c;j++)
            printf("*");
       printf("\n");
     }
    return 0;
}
