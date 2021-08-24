/*
    Armstrong number: An Armstrong number is an integer such that the sum of the
                      cubes of its digits is equal to the number itself.

    For example, 371 is an Armstrong number since, pow(3,3)+pow(7,3)+pow(1,3)=371
*/

#include<stdio.h>
int main()
{
    int x, d, r, sum, _x;
    printf("Input a number : ");
    scanf("%d",&x);
    printf("\n");

    _x = x;
    sum = 0;

    while(x!=0)
    {
        r = x%10;
        d = x/10;
        sum = sum + r*r*r;
        x = d;
    }

    if(sum==_x)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}

