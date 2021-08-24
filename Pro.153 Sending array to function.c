#include<stdio.h>

int total(int *p, int n)
{
    int sum = 0, i;

    for(i=0;i<n;i++)
        sum = sum + p[i];

    return sum;
}

int main()
{
    int a[5], i, result;
    printf("Input 5 numbers : ");

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\n");

    result = total(a,5); //total(&a[0],5);

    printf("Sum of 5 numbers : %d\n",result);
    return 0;
}

