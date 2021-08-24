//swaping

#include<stdio.h>
int main()
{
    int a=15, b=10;
    printf("Before swap : %d %d\n",a,b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("After swap : %d %d\n",a,b);
    return 0;
}
