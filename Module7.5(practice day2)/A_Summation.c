#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   int ar[a];
   for (int i = 0; i <= (a-1); i++)
   {
        scanf("%d",&ar[i]);
   }
   long long int sum=0;
   for (int i = 0; i <= (a-1); i++)
   {
        sum = sum + ar[i];
   }
    long long int sum1 = sum*(-1);
   
   if(sum<0)
   {
    printf("%lld ",sum1);
   }
   else
   {
    printf("%lld ",sum);
   }
   
   
    return 0;
}