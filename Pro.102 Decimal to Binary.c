#include<stdio.h>
int main()
{
    int dec, x, r, d, indx, a[50], i;
    printf("In Decimal : ");
    scanf("%d",&dec);

    x = dec;
    indx = -1;

    while(x!=0)
     {
        d = x/2;
        r = x%2;

        indx++;
        a[indx] = r;

        x = d;
     }

    printf("\nIn Binary : ");

    for(i=indx;i>=0;i--)
        printf("%d",a[i]);

    printf("\n");
    return 0;
}
