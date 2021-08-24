#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int x;

    printf("\nInput a String : ");
    gets(str);

    x = strlen(str);

    printf("\nLength is : %d\n",x);
    return 0;
}
