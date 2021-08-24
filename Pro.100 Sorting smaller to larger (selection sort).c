/*  Algorithm:

       1.  for i=0 to n-1,
          Compare the i'th element with all of it's next elements.
             [j=i+1 to n-1]

       2. If a[j] is smaller, than interchange a[i] and a[j]
*/

#include<stdio.h>
int main()
{
    int a[5], t, i, j;
    printf("Input 5 elements : ");

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(a[j]<a[i])
             {
                 t = a[j];
                 a[j] = a[i];
                 a[i] = t;
             }

    printf("\nAfter sorting : ");

    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    printf("\n");
    return 0;
}
