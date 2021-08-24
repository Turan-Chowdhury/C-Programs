//case conversion

#include<stdio.h>
int main()
{
    char ch;
    printf("Input a character : ");
    scanf("%c",&ch);
    if(isupper(ch))
        ch = tolower(ch);
    else
        ch = toupper(ch);
    printf("After case conversion : %c",ch);
    return 0;
}
