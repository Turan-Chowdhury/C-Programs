#include<stdio.h>
int main()
{
    int x, y, a, b, c;
    printf("Input two integers : ");
    scanf("%d%d",&x,&y);

    a = x|y;
    b = x&y;
    c = x^y;

    printf("\nResult is\n\n");

    printf("for OR-> %d\n",a);
    printf("for AND-> %d\n",b);
    printf("for X-OR-> %d\n",c);

    return 0;
}
