#include<stdio.h>
int main()
{
    int beg, end, lock;
    char a[100], t;
    printf("Input a string\n");
    gets(a);

    for(lock=0;a[lock]!='\0';lock++)
        ;

    beg = 0;
    end = lock-1;

    while(beg<=end)
     {
        t = a[beg];
        a[beg] = a[end];
        a[end] = t;

        beg++;
        end--;
     }

    printf("After reverse\n");
    printf("%s\n",a);

    return 0;
}
