#include<stdio.h>
#include<stdlib.h>

void my_sort(int *a, int n)
{
    int i, j, temp;

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[j]<a[i])
             {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
             }
}

int main()
{
    int *x, n, i;
    printf("How many numbers : ");
    scanf("%d",&n);
    printf("\n");

    x = malloc(sizeof(int)*n);

    printf("Input %d numbers : ",n);

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    printf("\n");

    my_sort(x,n); // my_sort(&x[0],n);

    printf("After sorting : ");

    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");

    return 0;
}

