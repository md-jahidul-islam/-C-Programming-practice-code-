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
   int ans = 0;
    for (int i = 0; i <= (a-1); i++)
   {
        if (ar[i]>0)
        {
            ans = 1;
        }
        if (ar[i]<0)
        {
            ans = 2;
        }
         if (ar[i]==0)
        {
            ans = 0;
        }
        printf("%d ",ans);
   }
   
   
    return 0;
}