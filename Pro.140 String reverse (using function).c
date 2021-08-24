#include<stdio.h>
int i=0;
char a[100];

void rev(char b)
{
    char ch;
    ch = b;
    i++;
    if(a[i]!='\0')
        rev(a[i]);
    printf("%c",ch);
}

int main()
{
    gets(a);
    rev(a[i]);
    return 0;
}
