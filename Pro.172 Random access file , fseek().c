/*
    fseek(file_pointer, shift, position);

    Shift:  +ve - right
            -ve - left

    Position:  0 - begin
               1 - current
               2 - end

    * Read or write takes place on the character immediately right of cursor.
    * After reading or writing cursor always move right by 1 bit.
*/

#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;

    fp = fopen("letter.txt","r+");

    fseek(fp,4,0);
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);

    fseek(fp,-5,2);
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);

    fseek(fp,-4,1);
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);

    fseek(fp,3,1);
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);

    fclose(fp);

    return 0;
}

