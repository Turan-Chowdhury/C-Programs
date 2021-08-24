#include<stdio.h>
int main()
{
    int i, indx;
    char a[100], b[100];
    gets(a);
    gets(b);

    for(i=0;a[i]!='\0';i++)
        ;

    indx = i;

    for(i=0;b[i]!='\0';i++)
     {
        a[indx]=b[i];
        indx++;
     }

    a[indx]='\0';

    printf("\n%s\n",a);
    printf("%s\n",b);
    return 0;
}
