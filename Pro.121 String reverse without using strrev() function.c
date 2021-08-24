#include<stdio.h>
int main()
{
    int i, j, k=0;
    char a[100], b[100];
    gets(a);

    for(i=0;a[i]!='\0';i++)
        ;

    for(j=i-1;j>=0;j--)
     {
        b[k]=a[j];
        k++;
     }

    b[k]='\0';

    printf("\n%s\n",b);
    return 0;
}
