//nested if else

/*
  when an if is the target of another if or
  an if is the target of another else or
  an if is found in the block of another if or block of an else,
  then it is called nested if else.
*/


#include<stdio.h>
int main()
{
    int p,q;
    scanf("%d%d",&p,&q);
    if(p!=0) //here Tab(some space) before 'if' is called indentation
        if(q!=0)
            printf("abc");
        else
            printf("uvw");
    else
        printf("xyz");
    return 0;
}
