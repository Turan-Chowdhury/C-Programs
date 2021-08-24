#include<stdio.h>
int main()
{
    int a[5], n=5, loc=-1, x, i, j;
    printf("Input 5 integers\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n");

    printf("What to delete : ");
    scanf("%d",&x);
    printf("\n");

    for(i=0;i<5;i++)
        if(a[i]==x)
         {
            loc=i;

            for(j=loc+1;j<5;j++)
                a[j-1]=a[j];

            n--;
         }


    if(loc==-1)
     {
        printf("Not found\n");
     }

    else
     {
        printf("After deleting\n");

        for(i=0;i<n;i++)
            printf("%d ",a[i]);

        printf("\n");
     }
    return 0;
}


