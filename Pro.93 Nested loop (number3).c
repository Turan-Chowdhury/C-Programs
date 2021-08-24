/*
   row = 5

        1
       121
      12321
     1234321
    123454321

*/

#include<stdio.h>
int main()
{
    int r, x, space, num, i, j;
    printf("Input row : ");
    scanf("%d",&r);
    printf("\n");

    space = r-1;
    num = 1;

    for(i=1;i<=r;i++)
     {
        for(j=1;j<=space;j++)
            printf(" ");
        space--;

        x = 1;

        for(j=1;j<=num;j++)
         {
            printf("%d",x);
            if(j<i)
             {
                x++;
                if(x==10)
                    x=0;
             }
            else
             {
                x--;
                if(x==-1)
                    x=9;
             }
         }
        num+=2;
        printf("\n");
     }
    return 0;
}
