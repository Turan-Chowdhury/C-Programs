#include<stdio.h>
int main()
{
    int i;
    float mark[10], sum, average;
    printf("Input mark of 10 students\n\n");

    sum = 0;

    for(i=0;i<10;i++)
     {
        scanf("%f",&mark[i]);
        sum = sum+mark[i];
     }

    average = sum/10;

    printf("\n");
    printf("Sum : %.2f\n",sum);
    printf("Average : %.2f",average);
    printf("\n");
    return 0;
}
