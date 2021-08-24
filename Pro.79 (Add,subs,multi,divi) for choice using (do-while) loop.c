//addition, subtraction, multiplication, division

#include<stdio.h>
int main()
{
    int a,b,choice,result;
    printf("Input two integers : ");
    scanf("%d%d",&a,&b);
    printf("\n");
    do
     {
        printf("Input 1 for Addition\n");
        printf("Input 2 for Substruction\n");
        printf("Input 3 for Multiplication\n");
        printf("Input 4 for Division\n\n");
        printf("Your Choice : ");
        scanf("%d",&choice);
        printf("\n");
     } while(choice<1 || choice>4);
    if(choice==1)
        result = a+b;
    if(choice==2)
        result = a-b;
    if(choice==3)
        result = a*b;
    if(choice==4)
        result = a/b;
    printf("Result is : %d",result);
    return 0;
}
