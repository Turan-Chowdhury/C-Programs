//float output formatting

#include<stdio.h>
int main()
{
    float x;
    x = 98.7652381238;
    printf("%f\n",x);
    printf("%.2f\n",x);
    printf("%7.4f\n",x);
    printf("%7.2f\n",x);
    printf("%-7.2f",x);
    printf("hello\n");
    printf("%e\n",x);
    printf("%11.2e\n",x);
    printf("%-11.2e",x);
    printf("ctg");
    return 0;
}
