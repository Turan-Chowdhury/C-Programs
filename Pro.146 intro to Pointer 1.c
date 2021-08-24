/*
    Pointer: Pointer is a special kind of variable.
             It can store the address of another variable.

    General use of pointer:
                            type *pointer_name;
                            pointer_name = &variable_name;

    Pointer type and normal variable type must be same.

    (*) is used for three tasks:
                               (1) Multiplication.
                               (2) Declaring pointer.
                               (3) Indirection (accessing a variable using pointer).
*/

#include<stdio.h>
int main()
{
    int *p, q;
    p = &q;
    *p = 199;
    printf("q's value is %d\n",q);
    return 0;
}

