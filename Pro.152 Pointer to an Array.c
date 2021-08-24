/*
    Only the name of an array is actually the address of the 0'th element.

    Pointer to an array:
                         Pointers and arrays are interchangeable. After assigning
                         the address of the 0'th element of an array to a pointer,
                         we can use that pointer like the original array.
*/

#include<stdio.h>
int main()
{
    int a[5] = {12, 56, 8, 79, -13}, *p, i;

    printf("Contents of array : ");

    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n\n");

    p = a; //p = &a[0];

    printf("Contents of array using pointer : ");

    for(i=0;i<5;i++)
       printf("%d ",p[i]);
    printf("\n\n");

    p[3] = 1111;

    printf("Contents of array : ");

    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;
}

