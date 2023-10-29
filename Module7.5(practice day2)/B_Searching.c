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
   int x;
   scanf("%d",&x);
   long long int ans=-1;
    for (int i = 0; i <= (a-1); i++)
   {
     if (ar[i]==x)
        {
            ans = i;
            break;
        }
   }
    printf("%lld ",ans);
    return 0;
}