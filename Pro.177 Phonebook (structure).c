#include<stdio.h>

struct phonebook
{
    char name[100], number[15];
};

int main()
{
    struct phonebook e[3];
    int i, j;
    char temp[100];

    for(i=0;i<3;i++)
    {
        printf("Input name and number of entry %d: ",i+1);
        scanf("%s%s",e[i].name, e[i].number);
    }

    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            if(strcmp(e[j].name,e[i].name)<0)
            {
                strcpy(temp,e[j].name);
                strcpy(e[j].name,e[i].name);
                strcpy(e[i].name,temp);
                strcpy(temp,e[j].number);
                strcpy(e[j].number,e[i].number);
                strcpy(e[i].number,temp);
            }

    printf("\nAfter sorting\n\n");

    for(i=0;i<3;i++)
        printf("%-8s %s\n",e[i].name, e[i].number);

    return 0;
}

