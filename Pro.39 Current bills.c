//curent bills

#include<stdio.h>
int main()
{
    float u,b;
    printf("Input unit : ");
    scanf("%f",&u);

    if(u>=0 && u<=200)
        b = u*0.5;
    else if(u>=201&&u<=400)
        b = (200*0.5)+(u-200)*0.65;
    else if(u>=401&&u<=600)
        b = (200*0.5)+(200*0.65)+(u-400)*0.8;
    else if(u>=601)
        b = (200*0.5)+(200*0.65)+(200*0.8)+(u-600)*1.0;

    printf("Bill : %.2f",b);
    return 0;
}
