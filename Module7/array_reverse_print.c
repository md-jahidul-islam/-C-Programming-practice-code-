#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&ar[i]);
   }
//    for (int i = 0; i < n; i++)
//    {
//         printf("%d ",ar[i]);
//    }
long long int sum1=0,sum2=0;
   for (int i = n-1; i >= 0; i--)
   {
      // if (i%2==1)
      // {
      //    printf("%d ",ar[i]);
      // }
      if (ar[i]>0)
      { 
         sum1 +=ar[i];
         // printf("%d ",sum1);
      }
      if (ar[i]<0)
      { 
         sum2 +=ar[i];
         // printf("%d ",sum2);
      }
      
        
   } printf("%lld %lld",sum1,sum2);
   
    return 0;
}