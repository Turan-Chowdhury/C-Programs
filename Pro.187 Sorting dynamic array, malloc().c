#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *x, n, i, j, temp;
    printf("How many numbers : ");
    scanf("%d",&n);
    printf("\n");

    x = malloc(sizeof(int)*n);

    printf("Input %d numbers : ",n);

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    printf("\n");

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(x[j]<x[i])
            {
                temp = x[j];
                x[j] = x[i];
                x[i] = temp;
            }

    printf("After sorting : ");

    for(i=0;i<n;i++)
        printf("%d ",x[i]);

    printf("\n");

    return 0;
}

