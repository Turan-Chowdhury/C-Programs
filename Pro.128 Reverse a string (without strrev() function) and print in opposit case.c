#include<stdio.h>
int main()
{
    int i, j, k;
    char a[100], b[100];
    gets(a);

    for(i=0;a[i]!='\0';i++)
        if(islower(a[i]))
            a[i]=toupper(a[i]);
        else
            a[i]=tolower(a[i]);

    k=0;

    for(j=i-1;j>=0;j--)
     {
        b[k]=a[j];
        k++;
     }

    b[k]='\0';

    printf("%s\n",b);
    return 0;
}
