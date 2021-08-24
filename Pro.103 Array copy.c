#include<stdio.h>
int main()
{
    int a[5]={10,5,8,3,7}, b[5], i;
    printf("\n b[5] = ");

    for(i=0;i<5;i++)
     {
        b[i] = a[i];
        printf("%d ",b[i]);
     }

    printf("\n");
    return 0;
}
