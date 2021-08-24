#include<stdio.h>
int main()
{
    int i;
    char a[100], b[100];
    gets(a);
    gets(b);

    for(i=0;b[i]!='\0';i++)
        a[i] = b[i];

    a[i] = '\0';

    printf("\n%s\n",a);
    printf("%s\n",b);
    return 0;
}
