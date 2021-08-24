//special operator : , and sizeof()

/*
                  capacity              range
   character      8 bit or 1 byte       -128 to 127
   int            32 bit or 4 byte      -2,147,483,648 to 2,147,483,647
   float          32 bit 4 byte         -3.4e-038 to 3.4e+038
   double         64 bit 8 byte         -1.7e-308 to 1.7e+308

*/

#include<stdio.h>
int main()
{
    int x;
    x = sizeof(char);
    printf("Capacity of character : %d byte\n",x);

    x = sizeof(int); //we can also use sizeof(x)
    printf("Capacity of integer :   %d byte\n",x);

    x = sizeof(float);
    printf("Capacity of float :     %d byte\n",x);

    x = sizeof(double);
    printf("Capacity of double :    %d byte\n",x);

    return 0;
}
