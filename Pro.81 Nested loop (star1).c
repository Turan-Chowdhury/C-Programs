/*
   n = 4

   ****
   ****
   ****
   ****

*/

#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Input n : ");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
     {
        for(j=1;j<=n;j++)
            printf("*");
        printf("\n");
     }
    return 0;
}
