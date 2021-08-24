/* Left Shift n is equivalent to multiplication by pow(2,n)
   Right Shift n is equivalent to integer division by pow(2,n)
*/

#include<stdio.h>
int main()
{
    int x, n, p, q, r, s;
    printf("Input number : ");
    scanf("%d",&x);
    printf("Input number of bits : ");
    scanf("%d",&n);
    printf("\n");

    p = x<<n;
    q = x*pow(2,n);

    printf("Result from left shift : %d\n",p);
    printf("Result from multiplication : %d\n\n",q);

    r = x>>n;
    s = x/pow(2,n);

    printf("Result from right shift : %d\n",r);
    printf("Result from division : %d\n",s);

    return 0;
}

