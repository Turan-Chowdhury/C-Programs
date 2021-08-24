#include<stdio.h>
#include<string.h>
int main()
{
    int i, j;
    char a[5][100], t[100];
    printf("Input 5 names\n");

    for(i=0;i<5;i++)
        gets(a[i]);

    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(strcmp(a[j],a[i])<0)
             {
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
             }

    printf("\nAfter sorting\n");

    for(i=0;i<5;i++)
        printf("%s\n",a[i]);

    return 0;
}
