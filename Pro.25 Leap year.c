/*
leap year:

condition:-
             1. The year must divisible by 400.
          or 2. The year must divisible by 4 but not divisible by 100.
*/

#include<stdio.h>
int main()
{
    int y;
    printf("Input a year : ");
    scanf("%d",&y);
    if((y%400==0)||(y%4==0&&y%100!=0))
        printf("%d is a leap year",y);
    else
        printf("%d is not a leap year",y);
    return 0;
}
