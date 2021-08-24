/* Algorithm:

    1. Assume the first (0th) element is the largest element in array
         max = array[0]

    2. Compare the max with the rest of the elements.
         [i: 1 to n-1]

    3. If any element is larger than max.
         update max
*/

#include<stdio.h>
int main()
{
    int a[6], max, i;
    printf("Input 6 values : ");

    for(i=0;i<6;i++)
        scanf("%d",&a[i]);

    max = a[0];

    for(i=1;i<6;i++)
        if(a[i]>max)
            max = a[i];

    printf("\n%d is largest.\n",max);

    return 0;
}


