#include<stdio.h>
int main()
{
    int a[5], i, max;
    printf("Input 5 values\n");

    for(i=0;i<5;i++)
     {
        scanf("%d",&a[i]);
        a[i]=abs(a[i]);
     }

    max=a[0];

    for(i=1;i<5;i++)
        if(a[i]>max)
            max=a[i];

    printf("\nMaximum absolute value is : %d\n",max);
    return 0;
}
