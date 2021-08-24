//sum and product calculation of n'th number

#include<stdio.h>
int main()
{
    int i, sum, prod;
    sum = 0;
    prod = 1;

    for(i=1;i<=5;i++)
    {
        sum = sum+i;
        prod = prod*i;
    }

    printf("Sum : %d\n",sum);
    printf("Product : %d",prod);

    return 0;
}
