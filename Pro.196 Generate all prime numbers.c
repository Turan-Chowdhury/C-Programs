#include<stdio.h>
#include<math.h>
int main()
{
    int n,  i,  j, flag;
    scanf("%d",&n);
    printf("\n");

    for(i=2;i<=n;i++)
    {
        flag = 0;

        for(j=2;j<=sqrt(i);j++)
            if(i%j==0)
            {
                flag = 1;
                break;
            }

        if(flag==0)
            printf("%d\n",i);
    }

    return 0;
}

