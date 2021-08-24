/*
   row = 5

        1
       232
      34543
     4567654
    567898765

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
    x = 1;

    for(i=1;i<=r;i++)
     {
        for(j=1;j<=space;j++)
            printf(" ");
        space--;

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
        x+=2;
        if(x==10)
            x=1;
        printf("\n");
     }
    return 0;
}

