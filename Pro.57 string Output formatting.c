//string output formatting

#include<stdio.h>
int main()
{
    char addr[100] = "New Delhi 10001";
    printf("%s\n",addr);
    printf("%20s\n",addr);
    printf("%.5s\n",addr);
    printf("%20.5s\n",addr);
    printf("%-20.5s",addr);
    printf("hello");
    return 0;
}
