//grade calculation

#include<stdio.h>
int main()
{
    float m;
    printf("Input Mark : ");
    scanf("%f",&m);
    printf("Grade : ");
    if(m>=80&&m<=100)
        printf("A+");
    else if(m>=70&&m<=79)
        printf("A");
    else if(m>=60&&m<=69)
        printf("B");
    else if(m>=50&&m<=59)
        printf("C");
    else if(m>=40&&m<=49)
        printf("D");
    else if(m>=0&&m<=39)
        printf("F");
    else
        printf("Wrong");
    return 0;
}
