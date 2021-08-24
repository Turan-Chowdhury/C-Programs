//swaping

#include<stdio.h>
int main()
{
    int a=20, b=33, t; // Initialization (assigning values at the time of declaration)
    printf("Before swap : %d %d\n",a,b);
    t = a;
    a = b;
    b = t;
    printf("After swap : %d %d",a,b);
    return 0;

}
