/*shorthand assignment operator:

 a=a+4 and a+=4 are same
 a=a-4 and a-=4 are same
 a=a*4 and a*=4 are same
 a=a/4 and a/=4 are same

*/

#include<stdio.h>
int main()
{
    int a;
    printf("Input a number : ");
    scanf("%d",&a);
    a += 4;
    printf("After operation : %d",a);
    return 0;
}
