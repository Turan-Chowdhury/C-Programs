#include<stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    printf("Input matrix a\n");

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("Input matrix b\n");

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            c[i][j] = a[i][j]+b[i][j];

    printf("\n");
    printf("Result of addition :\n");

    for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
     }

    return 0;
}
