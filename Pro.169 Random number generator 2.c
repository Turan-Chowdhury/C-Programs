/*
    0 to (n-1) : rand()%n;
    1 to n     : rand()%n+1;
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,x;
    srand(time(NULL));

    for(i=0;i<10;i++)
    {
        x = rand()%50+1; // 1 to 50
        printf("%d\n",x);
    }

    return 0;
}


