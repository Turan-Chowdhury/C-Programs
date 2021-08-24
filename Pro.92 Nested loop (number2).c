/*
   row = 6

   1
   23
   456
   7890
   12345
   678901

*/

#include<stdio.h>
int main()
{
    int r, num, i, j;
    printf("Input row : ");
    scanf("%d",&r);
    printf("\n");

    num = 1;

    for(i=1;i<=r;i++)
     {
        for(j=1;j<=i;j++)
         {
            printf("%d",num);
            num++;
            if(num==10)
                num=0;
         }
        printf("\n");
     }
    return 0;
}
