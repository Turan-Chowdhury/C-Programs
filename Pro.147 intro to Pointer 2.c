// Pointer type and normal variable name must be same.

#include<stdio.h>
int main()
{
    int a, b;
    int *ptr;

    a = 0;
    ptr = &a;
    b = *ptr;

    printf("value of a is %d\n\n",a);
    printf("%d is stored at address %x\n",a,&a);
    printf("%d is stored at address %x\n",*ptr,ptr);
    printf("%d is stored at address %x\n",*&a,&a);
    printf("%x is stored at %x\n",ptr,&ptr);
    printf("%d is stored at %x\n\n",b,&b);

    *ptr=25;
    printf("now a is %d\n",a);

    return 0;
}

