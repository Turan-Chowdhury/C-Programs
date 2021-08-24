//showing multiples of any numbers under 100

#include<stdio.h>
int main()
{
    int x, i;
    printf("Input a number to show it's multiples : ");
    scanf("%d",&x);
    printf("\n");
    printf("Multiples are : ");

    for(i=1;i<=100;i++)
     {
        if(i%x==0)
        printf("%d ",i);
     }

    printf("\n");
    return 0;
}
