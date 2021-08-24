#include<stdio.h>
int main()
{
    char ch;
    printf("Input a character : ");
    scanf("%c",&ch);
    switch(ch) //only integers and characters can be switched
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
        case 'U': printf("Vowel");
                  break;
        default: printf("Consonant");
                 break;
    }
    return 0;
}
