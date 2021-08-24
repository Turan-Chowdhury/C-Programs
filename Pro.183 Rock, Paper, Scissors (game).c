#include<stdio.h>
#include<conio.h>
int main()
{
    char a, b, dummy;
    printf("Input 'R' for rock. 'P' for paper. 'S' for scissors.\n\n");

    for( ; ; )
    {
        printf("Player 1 : ");
        a = getch();
        printf("\n");

        printf("Player 2 : ");
        b = getch();
        printf("\n\n");

        if(a==b)
            printf("Draw!");
        else if((a=='r'||a=='R')&&(b=='p'||b=='P'))
            printf("Player 2 win!");
        else if((a=='r'||a=='R')&&(b=='s'||b=='S'))
            printf("Player 1 win!");
        else if((a=='p'||a=='P')&&(b=='r'||b=='R'))
            printf("Player 1 win!");
        else if((a=='p'||a=='P')&&(b=='s'||b=='S'))
            printf("Player 2 win!");
        else if((a=='s'||a=='S')&&(b=='r'||b=='R'))
            printf("Player 2 win!");
        else if((a=='s'||a=='S')&&(b=='p'||b=='P'))
            printf("Player 1 win!");
        printf("\n\n----\n\n");
    }

    return 0;
}
