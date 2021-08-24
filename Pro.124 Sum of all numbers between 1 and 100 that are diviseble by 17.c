#include<stdio.h>
int main()
{
    int m, i, sum=0;

    for(i=1;i*17<=100;i++)
     {
        m = i*17;
        sum = sum+m;
     }

    printf("Sum of numbers : %d\n",sum);
    return 0;
}
