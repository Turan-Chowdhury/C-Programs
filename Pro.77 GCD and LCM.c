

// GCD*LCM=a*b

// LCM=(a*b)/GCD

#include<stdio.h>
int main()
{
    int a, b, x, y, r, gcd, lcm;
    printf("Input two integers : ");
    scanf("%d%d",&a,&b);

    x = a;
    y = b;

    while(a%b!=0)
     {
        r = a%b;
        a = b;
        b = r;
     }

    gcd = b;
    lcm = (x*y)/gcd;

    printf("\n GCD is : %d\n",gcd);
    printf("\n LCM is : %d\n",lcm);
    return 0;
}
