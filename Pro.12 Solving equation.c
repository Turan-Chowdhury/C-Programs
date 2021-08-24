/*
  Solve this for any number :
  p+(p*p)/2+(p*p*p)/3+(p*p*p*p)/4
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    b = a+pow(a,2)/2+pow(a,3)/3+pow(a,4)/4; //while using pow we have to take float as variable
    printf("%f",b);
    return 0;
}

