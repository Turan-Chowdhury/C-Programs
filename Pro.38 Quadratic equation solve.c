//quadratic equation solve

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2,x;
    printf("Input a,b,c : ");
    scanf("%f%f%f",&a,&b,&c);
    printf("\n");

    d = b*b-4*a*c;

    if(d<0)
        printf("Roots are imaginary\n");

    else if(d>0)
        {
          x1 = (-b+sqrt(d))/(2*a);
          x2 = (-b-sqrt(d))/(2*a);
          printf("x1 = %f\n",x1);
          printf("x2 = %f\n",x2);
        }

    else if(d==0)
        {
          x = -b/(2*a);
          printf("x = %f\n",x);
        }

    return 0;
}
