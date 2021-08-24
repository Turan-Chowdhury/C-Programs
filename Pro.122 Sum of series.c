// 1+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+4+...+n)

#include<stdio.h>
int main()
{
    int n, sum, i, j;
    printf("Input n : ");
    scanf("%d",&n);
    printf("\n");

    sum = 0;

    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            sum = sum+j;

    printf("Result is : %d\n",sum);
    return 0;
}
