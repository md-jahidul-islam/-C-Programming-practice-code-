#include<stdio.h>
void fun(int x)
{   
    x=100;
     drintf("fun er x address - %p\n",&x);
}
int main()
{
   int x=10;
    printf("main er x address - %p\n",&x);
    fun(x);
    //x er value k copy kore fun() er modde pass kore
     printf("main er x er value - %d\n",x);
    return 0;
}