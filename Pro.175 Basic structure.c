#include<stdio.h>

struct student
{
    char id[100], name[100];
    double cgpa;
};

int main()
{
    struct student s;

    printf("Input ID, Name and Cgpa of a student : ");
    scanf("%s%s%lf",s.id,s.name,&s.cgpa);
    printf("\n");

    printf("ID   : %s\n",s.id);
    printf("Name : %s\n",s.name);
    printf("Cgpa : %.3lf\n",s.cgpa);

    return 0;
}

