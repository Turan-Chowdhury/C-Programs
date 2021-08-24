//power

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,ans;
    printf("Input base and power : ");
    scanf("%f%f",&a,&b);
    printf("\n");
    ans = pow(a,b);
    printf("Result is : %.0f\n",ans);
    return 0;
}
