#include<stdio.h>
int check(float x)
{
    if(x>0 || x<0)
        return 1;
    else
        return 0;
}
void ratio(float p, float q, float r)
{
    if(check(q-r))
        printf("Ratio is %f\n",p/q-r);
    else
        printf("Division not possible\n");
}
int main()
{
    ratio(15,12,6);
    return 0;
}
