//Fahrenhiet to Celcius conversion

#include<stdio.h>
int main()
{
    float a,b;
    printf("value in fahrenhiet : ");
    scanf("%f",&a);
    b = (5*a-160)/9;
    printf("in celcius : %f",b);
    return 0;
}
