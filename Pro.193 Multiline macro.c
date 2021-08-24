#include<stdio.h>

#define check(x) {\
                    if(x&1)\
                        printf("Odd");\
                    else\
                        printf("Even");\
                    }


int main()
{
    int p;
    printf("Input a number : ");
    scanf("%d",&p);
    check(p);
    return 0;
}

