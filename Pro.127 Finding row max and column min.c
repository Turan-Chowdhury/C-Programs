#include<stdio.h>
int main()
{
    int a[3][4], r_max[3], c_min[4], i, j;

    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);

    r_max[0]=a[0][0];
    r_max[1]=a[1][0];
    r_max[2]=a[2][0];

    for(i=0;i<3;i++)
        for(j=1;j<4;j++)
            if(a[i][j]>r_max[i])
                r_max[i]=a[i][j];

    c_min[0]=a[0][0];
    c_min[1]=a[0][1];
    c_min[2]=a[0][2];
    c_min[3]=a[0][3];

    for(j=0;j<4;j++)
        for(i=1;i<3;i++)
            if(a[i][j]<c_min[j])
                c_min[j]=a[i][j];

    printf("\n");
    printf("Row max : ");

    for(i=0;i<3;i++)
        printf("%d ",r_max[i]);

    printf("\n\n");
    printf("Column min : ");

    for(i=0;i<4;i++)
        printf("%d ",c_min[i]);

    printf("\n");
    return 0;
}
