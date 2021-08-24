/* Pig-Latin:

   Rule 1: Words that begin with a vowel(a,e,i,o or u) should just have
   the string "ay" appended to it.
   For example, "apple" becomes "appleay".

   Rule 2: Words that begin with a consonant(any letter that is not a,e,i,o or u)
   should have the first consonant removed and appended to the end of the word,
   and then appending "ay" as well.
   For example, "hello" becomes "ellohay".
*/

#include<stdio.h>
int main()
{
    int i, j, k;
    char a[100], b[100];
    gets(a);

    switch(a[0])
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': strcat(a, "ay");
                  printf("\n%s\n",a);
                  break;

        default: for(i=1;a[i]!='\0';i++)
                    ;
                 k=0;
                 for(j=1;j<i;j++)
                 {
                     b[k]=a[j];
                     k++;
                 }
                 b[k]=a[0];
                 b[k+1]='\0';
                 strcat(b, "ay");
                 printf("\n%s\n",b);
    }
    return 0;
}
