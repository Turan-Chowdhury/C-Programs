#include<stdio.h>
int data_input()
{
    int x;
    printf("Input an integer : ");
    scanf("%d",&x);
    return x;
}
int main()
{
    int p;
    p = data_input();
    printf("%d",p);
    return 0;
}
