#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    strrev(a);
    printf("\nReverse : %s\n",a);
}
