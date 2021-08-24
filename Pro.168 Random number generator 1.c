/*
    0 to (n-1) : rand()%n;
    1 to n     : rand()%n+1;
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int x;
    srand(time(NULL));
    x = rand()%100; // 0 to 99
    printf("%d",x);
    return 0;
}

