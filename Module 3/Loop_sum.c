#include <stdio.h>
int main()
{
//    int sum=0;
//    int i;
//    for ( i = 1; i <=10; i=i+1)
//    {
//         sum+=i;
//    }
//    printf("%d\n",sum);
     long long  int sum=0;
   int i;
   int n;
   scanf("%d",&n);
   for ( i = 1; i <=n; i=i+1)
   {
        sum+=i;
   }
   printf("%lld\n",sum);
    return 0;
}