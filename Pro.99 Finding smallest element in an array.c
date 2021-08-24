/* Algorithm:

    1. Assume the first (0th) element is the smallest element in array
         min = array[0]

    2. Compare the min with the rest of the elements.
         [i: 1 to n-1]

    3. If any element is smaller than min.
         update min
*/

#include<stdio.h>
int main()
{
    int a[6], min, i;
    printf("Input 6 values : ");

    for(i=0;i<6;i++)
        scanf("%d",&a[i]);

    min = a[0];

    for(i=1;i<6;i++)
        if(a[i]<min)
            min = a[i];

    printf("\n%d is smallest.\n",min);

    return 0;
}
