/*
    Array : Collection of same type of elements with a common name
               and a different index for each element.

       for example: int x[10];
     where, x[10]= x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7], x[8], x[9]
*/

#include<stdio.h>
int main()
{
    int x[5], i;
    printf("Input 5 integers\n");

    for(i=0;i<5;i++)
        scanf("%d",&x[i]);

    printf("\n");

    for(i=0;i<5;i++)
        printf("%d\n",x[i]);
    return 0;
}
