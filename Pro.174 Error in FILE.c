#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("hello.txt","r");

    if(fp==0)
    {
        printf("No such file\n");
        fclose(fp);
        exit(1);
    }

    fclose(fp);
    return 0;
}

