/*
    fgets(string_name, string_size, file_pointer);
*/

#include<stdio.h>
int main()
{
    FILE *fp;
    char str1[100], str2[100];
    printf("Input a line: \n");
    gets(str1);
    printf("\n");

    fp = fopen("test.txt","w");
    fprintf(fp,"%s",str1);
    fclose(fp);

    fp = fopen("test.txt","r");
    fgets(str2,100,fp);
    fclose(fp);

    printf("Reading from file: \n");
    printf("%s\n",str2);

    return 0;
}

