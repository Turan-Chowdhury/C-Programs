//switch

/*
  breaks are not compulsory.
  default case is optional.
  break in default is optional.
*/

// Expression (anything with value)

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    switch(x) //only integers and characters can be switched
    {
        case 1: printf("one");
                break;
        case 2: printf("two");
                break;
        case 3: printf("three");
                break;
        default: printf("not 1,2,3");
                 break;
    }

    return 0;
}
