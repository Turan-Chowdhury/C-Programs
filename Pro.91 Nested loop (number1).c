/*
   row = 6

   1
   22
   333
   4444
   55555
   666666

*/

#include<stdio.h>
int main()
{
    int r, i, j;
    printf("Input row : ");
    scanf("%d",&r);
    printf("\n");

    for(i=1;i<=r;i++)
     {
        for(j=1;j<=i;j++)
            printf("%d",i);
        printf("\n");
     }
    return 0;
}
