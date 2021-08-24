#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int x;
    strcpy(str, "anik");
    x = strcmp(str, "alam");
    printf("%d\n",x);
    x = strcmp(str, "arup");
    printf("%d\n",x);
    x = strcmp(str, "anik");
    printf("%d\n",x);
    return 0;
}
