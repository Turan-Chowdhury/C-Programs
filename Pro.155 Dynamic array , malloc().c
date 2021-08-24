/*
    C requires the size of arrays to be fixed at compile-time, which is inconvenient. We can
    fix the size of arrays at run-time by using a technique called dynamic memory allocation.
    In this case the size of the array can be given as input when the program is being executed.
    This task accomplished by using malloc() function.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, n, i;
    printf("Input size of the array : ");
    scanf("%d",&n);
    printf("\n");

    a = malloc((sizeof(int))*n); // a = malloc(4*n);

    printf("Input %d numbers : ",n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n");

    printf("Contents of the array : ");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;
}

