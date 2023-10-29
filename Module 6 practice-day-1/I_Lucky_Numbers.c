#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   int d1=a%10,d2=a/10;
   if (d1%d2==0 ||d2%d1==0)
   {
    printf("YES\n");
   }else{
    printf("NO\n");
   }
   
    return 0;
}