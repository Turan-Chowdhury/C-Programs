//integer output formatting

#include<stdio.h>
int main()
{
    int m=2587;
    printf("%d\n",m);
    printf("%6d\n",m);
    printf("%2d\n",m);
    printf("%-6d",m);
    printf("hello\n");
    printf("%06d",m);
    return 0;
}
