//addition, subtraction, multiplication, division

#include<stdio.h>
int main()
{
    int a,b,result;
    char choice;
    printf("Input a for Addition\n");
    printf("Input s for Substruction\n");
    printf("Input m for Multiplication\n");
    printf("Input d for Division\n\n");
    printf("Your Choice : ");
    scanf("%c",&choice);
    printf("\n");
    printf("Input two integers : ");
    scanf("%d%d",&a,&b);
    printf("\n");
    if(choice=='a')
        result = a+b;
    if(choice=='s')
        result = a-b;
    if(choice=='m')
        result = a*b;
    if(choice=='d')
        result = a/b;
    printf("Result is : %d",result);
    return 0;
}


