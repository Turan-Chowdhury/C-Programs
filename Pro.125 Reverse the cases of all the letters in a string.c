#include<stdio.h>
int main()
{
    int i;
    char a[100];
    gets (a);

    for(i=0;a[i]!='\0';i++)
    {
        if(islower(a[i]))
            a[i] = toupper(a[i]);
        else
            a[i] = tolower(a[i]);
    }

    printf("\n%s\n",a);
    return 0;
}
