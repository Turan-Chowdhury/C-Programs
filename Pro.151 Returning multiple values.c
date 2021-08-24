/*
    Function returning multiple value can not be possible.

    Solution is: using Call by reference.
*/

#include<stdio.h>

void arithmetic(int a, int b, int *p1, int *p2, int *p3, int *p4)
{
    *p1 = a + b;
    *p2 = a - b;
    *p3 = a * b;
    *p4 = a / b;
}

int main()
{
    int x, y, sum, sub, mult, div;
    printf("Input 2 numbers : ");
    scanf("%d%d",&x,&y);
    printf("\n");

    arithmetic(x,y,&sum,&sub,&mult,&div);

    printf("Result of Addition: %d\n",sum);
    printf("Result of Subtraction: %d\n",sub);
    printf("Result of Multiplication: %d\n",mult);
    printf("Result of Division: %d\n",div);

    return 0;
}

