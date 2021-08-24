/*
   n = 5

   *****
   ****
   ***
   **
   *

*/

#include<stdio.h>
int main()
{
    int n, star, i, j;
    printf("Input n : ");
    scanf("%d",&n);
    printf("\n");

    star = n;

    for(i=1;i<=n;i++)
     {
        for(j=1;j<=star;j++)
            printf("*");
        star--;
        printf("\n");
     }
    return 0;
}
