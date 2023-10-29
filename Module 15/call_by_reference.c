#include<stdio.h>
void fun(int* p)
{   
    *p=500;
    // printf("p er value - %p\n",p);
    printf("main er x er value - %d\n",*p);
}   
int main()
{
   int x=100;
//    printf("x er address - %p\n",&x);
   fun(&x);
   printf("%d\n",x);
    return 0;
}