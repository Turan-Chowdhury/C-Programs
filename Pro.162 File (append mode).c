/*
    FILE: A file is a place on the disk, where a group of related data is stored.

    Opening a FILE:
                       FILE *fp;
                       fp = fopen("file_name", mode);
                       .............;
                       fclose(fp);

    MODE:

    1.Read mode,"r":  a) If no file exists, an error will occur.
                      b) Opens file for reading only.

    2.Write mode,"w":  a) If no file exists, a file will be created.
                       b) If a file already exists, it's contents will be erased.
                       c) Opens file for writing only.

    3.Append mode,"a":  a) If no file exists, a file will be created.
                        b) If a file already exists, it's contents will remain intact.
                        c) Opens file for adding data at the end.

    4.Read Write mode,"r+": Write at any place.
*/

#include<stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("info.txt","a");
    fprintf(fp,"uvw");
    fclose(fp);

    return 0;
}


