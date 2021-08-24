#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    strcpy(str, "hello");
    strcat(str, " world");
    printf("%s\n",str);
    return 0;
}
