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
    FILE *fp;

    srand(time(NULL));

    fp = fopen("rand1.txt","w");

    for(i=0;i<10;i++)
     {
        x = rand()%50; // 0 to 49
        fprintf(fp,"%d\n",x);
     }

    fclose(fp);

    return 0;
}



