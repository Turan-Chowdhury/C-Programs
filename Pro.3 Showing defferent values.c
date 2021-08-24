//declare different types of variables and using their format specifiers or placeholders

/*
  format specifier or place-holder %d is used for integer.
  format specifier or place-holder %f is used for float.
  format specifier or place-holder %f is used for double.
  format specifier or place-holder %c is used for character.
  format specifier or place-holder %s is used for istring
*/

//integer variable can contain numbers (-2,147,483,648 to 2,147,483,647)

#include<stdio.h>
int main()
{
    int a;
    float f;
    char ch;
    a = 113;
    printf("%d is an integer\n",a); // backslash n prints new line
    f = 3.14;
    printf("%f is a float\n",f);
    ch = 'y';
    printf("%c is a character",ch);
    return 0;
}
