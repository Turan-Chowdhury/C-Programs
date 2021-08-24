/* step1: 2348%10=8    step2: 234%10=4   step3: 23%10=3  step4: 2%10=2  (r)
          2348/10=234         234/10=23         23/10=2         2/10=0  (d)(x) */

#include<stdio.h>
int main()
{
    int n, x, r, d, sum, u;
    printf("Input a number : ");
    scanf("%d",&n);
    printf("\n");

    x = n;
    sum = 0;
    u = 0;

    while(x!=0)
     {
        r = x%10;
        d = x/10;
        x = d;
        sum = sum+r;
        u = u*10+r;
     }

    printf("Reverse is : %d\n",u);
    printf("Sum of digits : %d\n",sum);

    if(u==n)
        printf("Palindrome");
    else
        printf("Not palindrome");

    printf("\n");
    return 0;
}
