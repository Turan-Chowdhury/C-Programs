/*
    Macro: A single instruction that expands automatically into a set of instructions
           to perform a particular task.

    Advantage: Reduces time required for calling a function and returning from a function.

    Disadvantage: Only simple functions can be replaced by macros.
                  Program might get longer if the macro is used.
*/

#include<stdio.h>
#define add(x,y)  x+y
int main()
{
    int a, b, c;
    a = 10;
    b = 9;
    c = add(a,b);
    printf("%d\n",c);
    return 0;
}

