//else if ladder

#include<stdio.h>
int main()
{
    int a,b,result,choice;
    printf("Input two integers : ");
    scanf("%d%d",&a,&b);
    printf("\n");
    printf("Input 1 for Addition\n");
    printf("Input 2 for Substraction\n");
    printf("Input 3 for Multiplication\n");
    printf("Input 4 for Division\n\n");
    printf("Your Choice : ");
    scanf("%d",&choice);
    printf("\n");
    if(choice==1)
       {
         result = a+b;
         printf("Result is : %d",result);
       }
    else if(choice==2)
        {
          result = a-b;
          printf("Result is : %d",result);
        }
    else if(choice==3)
        {
          result = a*b;
          printf("Result is : %d",result);
        }
    else if(choice==4)
        {
          result = a/b;
          printf("Result is : %d",result);
        }
    else if(choice<1||choice>4)
         printf("Wrong Choice");
    return 0;
}
