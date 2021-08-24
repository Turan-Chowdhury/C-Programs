// classical error solving (method 2)

//we have to take an extra character variable.

#include<stdio.h>
int main()
{
    int a;
    char ch,dummy;
    printf("Input an integer : ");
    scanf("%d",&a);
    dummy = getchar();
    printf("Input a character : ");
    scanf("%c",&ch);
    printf("Integer : %d\n",a);
    printf("Character : %c",ch);
    return 0;
}
