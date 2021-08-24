/* String: (collection of character) / (character array)

   *format specifier or place-holder %s is used for string.

   *at scan f() for string, we can't use (&) sign.
*/

#include<stdio.h>
int main()
{
    char ch[200];
    printf("Input name : ");
    gets(ch);
    printf("Name is : %s",ch);
    return 0;
}

