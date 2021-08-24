// Showing date, month and year
// If we want to take input like this (dd-mm-yyyy), we have to use (-) at scanf()

#include<stdio.h>
#include<stdlib.h>     // for exit(1);
int main()
{
    int d,m,y;
    printf("Input Date, Month and Year (dd-mm-yyyy) : ");
    scanf("%d-%d-%d",&d,&m,&y);
    printf("\n");

    if((d<1||d>31)||(m<1||m>12))
     {
        printf("Wrong input");
        exit(1);               //here can also be used (return 0;) or (goto p:)
     }

    if(m==1)
        printf("January, ");
    else if(m==2&&d<=28)
        printf("February, ");
    else if(m==3)
        printf("March, ");
    else if(m==4&&d<=30)
        printf("April, ");
    else if(m==5)
        printf("May, ");
    else if(m==6&&d<=30)
        printf("June, ");
    else if(m==7)
        printf("July, ");
    else if(m==8)
        printf("August, ");
    else if(m==9&&d<=30)
        printf("September, ");
    else if(m==10)
        printf("October, ");
    else if(m==11&&d<=30)
        printf("November, ");
    else if(m==12)
        printf("December, ");
    else
     {
        printf("Wrong input");
        exit(1);
     }

    switch(d)
     {
        case 1:
        case 21:
        case 31: printf("%dst",d);
                 break;
        case 2:
        case 22: printf("%dnd",d);
                 break;
        case 3:
        case 23: printf("%drd",d);
                 break;
        default: printf("%dth",d);
     }

    printf("\n%d\n",y);
    return 0;
}
