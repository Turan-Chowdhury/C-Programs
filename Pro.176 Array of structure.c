#include<stdio.h>

struct student
{
    char id[100], name[100];
    double cgpa;
};

int main()
{
    struct student s[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Input ID, Name and Cgpa of  student %d: ",i+1);
        scanf("%s%s%lf",s[i].id, s[i].name, &s[i].cgpa);
    }

    printf("\n");

    for(i=0;i<3;i++)
    {
        printf("Printing information of student %d\n\n",i+1);
        printf("ID   : %s\n",s[i].id);
        printf("Name : %s\n",s[i].name);
        printf("Cgpa : %lf\n",s[i].cgpa);
        printf("\n");
    }

    return 0;
}

