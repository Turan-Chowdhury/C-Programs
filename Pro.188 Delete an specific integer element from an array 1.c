#include<stdio.h>
int main()
{
    int a[5], n=5, loc=-1, x, i;
    printf("Input 5 integers\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n");

    printf("What to delete : ");
    scanf("%d",&x);
    printf("\n");

    for(i=0;i<n;i++)
        if(a[i]==x)
            loc=i;

    if(loc==-1)
     {
        printf("Not found\n");
     }

    else
     {
        for(i=loc+1;i<n;i++)
            a[i-1]=a[i];

        n--;
        printf("After deleting\n");

        for(i=0;i<n;i++)
            printf("%d ",a[i]);

        printf("\n");
     }
    return 0;
}

