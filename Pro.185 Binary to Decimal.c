#include<stdio.h>
#include<math.h>

int main()
{
    int bin, dec, r, d, p;
    printf("In binary : ");
    scanf("%d",&bin);
    printf("\n");

    p = 0;
    dec = 0;

    while(bin!=0)
     {
        r = bin % 10;
        d = bin / 10;
        dec = dec + (r*pow(2,p));
        bin = d;
        p++;
     }

    printf("In decimal : %d\n",dec);
    return 0;
}

