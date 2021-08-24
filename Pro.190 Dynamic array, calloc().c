#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *a, i, n;
   printf("Number of elements to be entered : ");
   scanf("%d",&n);
   printf("\n");

   a = calloc(n, sizeof(int));

   printf("Enter %d numbers : ",n);

   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   printf("\n");

   printf("The numbers entered are : ");

   for(i=0;i<n;i++)
       printf("%d ",a[i]);
   printf("\n");

   free(a);

   return 0;
}

