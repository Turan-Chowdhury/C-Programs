#include<stdio.h>
#include<string.h>
int main()
{
    int d;
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    d = strcmp(str1,str2);
    if(d>0)
        printf("\nString1 is after String2\n");
    if(d<0)
        printf("\nString1 is before String2\n");
    if(d==0)
        printf("\nStrings are same\n");
    return 0;
}
