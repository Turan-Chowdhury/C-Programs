//use of else

#include<stdio.h>
int main()
{
    int a;
    printf("What is 10+4?\n");
    scanf("%d",&a);
    if(a==24)
        printf("Correct");
    else
    {
        printf("Wrong\n");                  //here {} is called (block of code)
        printf("Correct answer is 24");
    }
    return 0;
}
