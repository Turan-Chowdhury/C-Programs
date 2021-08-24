// Fibonacci sequence: 1 1 2 3 5 8 13 21 34 etc

#include<stdio.h>
int main()
{
    int n, i, prev1, prev2, cur;
    printf("Input 'n' : ");
    scanf("%d",&n);
    prev1 = 1;
    prev2 = 1;
    printf("\nFibonacci sequence is : 1 1 ");
    for(i=3;i<=n;i++)
        {
            cur = prev1 + prev2;
            printf("%d ",cur);
            prev1 = prev2;
            prev2 = cur;
        }
    printf("\n");
    return 0;
}
