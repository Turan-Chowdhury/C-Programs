#include<stdio.h>
void printf_line(int x)
{
    int i;
    printf("\n");

    for(i=1;i<=x;i++)
        printf("*");

    printf("\n");
}
int main()
{
    printf_line(15);
    return 0;
}
