/*
    ^z is end of file (feof)
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char r[100],n[100],id[100];
    double cg;
    FILE *fp;

    printf("Input an id: ");
    scanf("%s",id);
    printf("\n");

    fp = fopen("student.txt","r");

    while(!feof(fp))
    {
        fscanf(fp,"%s",r);
        fscanf(fp,"%s",n);
        fscanf(fp,"%lf",&cg);

        if(strcmp(r,id)==0)
        {
            printf("Name: %s\n",n);
            printf("cgpa: %.3lf\n",cg);
            break;
        }
    }

    fclose(fp);
    return 0;
}
