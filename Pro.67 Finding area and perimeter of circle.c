//finding area and perimeter of circle
// Symbolic constant : here in this program 3.1416 is a symbolic constant. Symbolic constant can not be change inside a program.

#include<stdio.h>
#define PI 3.1416
int main()
{
    float r, area, peri;
    printf("Input radius : ");
    scanf("%f",&r);
    area = PI*r*r;
    peri = 2*PI*r;
    printf("Area is: %f\n",area);
    printf("Perimeter is: %f",peri);
    return 0;
}
