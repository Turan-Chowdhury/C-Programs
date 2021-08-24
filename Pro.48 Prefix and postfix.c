//prefix and postfix

/*
   If an expression contains only increment or decrement (++,--)
   then there is no different between prefix and postfix.
   But if increment and decrement (++,--) are used as a part of a big expression,
   on the right hand side of an assignment operator then there will be difference.
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    a=13;
    b=16;
    c= ++a - b--;
    d= a - c--;
    e= ++d - a - b--;
    printf("a= %d\nb= %d\nc= %d\nd= %d\ne= %d",a,b,c,d,e);
    return 0;
}
