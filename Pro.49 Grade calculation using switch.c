//grade calculation using switch

#include<stdio.h>
int main()
{
    int m;
    printf("Input Mark : ");
    scanf("%d",&m);
    if(m<0||m>100)
     {
        printf("Wrong input");
        return 0;
     }
    printf("Grade : ");
    switch(m/10) //only integers and characters can be switched
     {
        case 10:
        case 9:
        case 8: printf("A+");
                break;
        case 7: printf("A");
                break;
        case 6: printf("A-");
                break;
        case 5: printf("B");
                break;
        case 4: printf("C");
                break;
        default: printf("F");
     }
    return 0;
}
