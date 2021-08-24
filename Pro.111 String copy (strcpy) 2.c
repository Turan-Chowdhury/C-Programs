#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    strcpy(str1,str2);
    printf("%s\n",str1);
    printf("%s\n",str2);
    return 0;
}
