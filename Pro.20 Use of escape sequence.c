/*

Use of escape sequence :

\n for new line
\t for tab
\a for bell sound
\\ for printing backslash
%% for printing percent

*/

#include<stdio.h>
int main()
{
    printf("Hello\tworld\n");
    printf("\a");
    printf("\\\\");
    printf("\n");
    printf("%%%%");
    return 0;
}
