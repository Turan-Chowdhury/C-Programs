#include<stdio.h>
int main()
{
    int a;
    printf("What is 10+4?\n");
    scanf("%d",&a);
    if(a==14)
        printf("Correct");
    if(a!=14)
    {
        printf("Wrong\n");                  //here {} is called (block of code)
        printf("Correct answer is 14!");
    }
    return 0;
}
