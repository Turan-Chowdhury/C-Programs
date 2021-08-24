/* Left Shift n is equivalent to multiplication by pow(2,n)
   Right Shift n is equivalent to integer division by pow(2,n)
*/

#include<stdio.h>
int main()
{
    int x, n, a, b;
    printf("Input an integer : ");
    scanf("%d",&x);
    printf("Input number of bit : ");
    scanf("%d",&n);

    a = x<<n;
    b = x>>n;

    printf("\nResult is\n\n");

    printf("For left shift-> %d\n",a);
    printf("For right shift-> %d\n",b);

    return 0;
}
