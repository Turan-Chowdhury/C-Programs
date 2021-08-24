#include<stdio.h>
int main()
{
    int sec, min, hour;
    printf("Enter the time in seconds : ");
    scanf("%d",&sec);
    min = sec/60;
    sec = sec%60;
    hour = min/60;
    min = min%60;
    printf("Time in 'hh:mm:ss' is : %02d:%02d:%02d",hour,min,sec);
    return 0;
}
