#include<stdio.h>
#include<math.h>
int main()
{
    int x, i, flag=0;
    printf("Input a number : ");
    scanf("%d",&x);

    for(i=2;i<=sqrt(x);i++)   // for(i=2;i<=x/2;i++)
        if(x%i==0)
         {
            flag = 1;
            break;
         }

    if(flag==0)
        printf("%d is prime",x);
    else
        printf("%d is not prime",x);

    return 0;
}
