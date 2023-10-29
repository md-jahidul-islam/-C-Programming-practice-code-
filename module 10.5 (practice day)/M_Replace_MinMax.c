#include<stdio.h>
#include<limits.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   for (int i = 0; i <n ; i++)
   {
    scanf("%d",&a[i]);
   }
   int x,y,max=INT_MIN,min=INT_MAX;
   for (int i = 0; i < n; i++)
   {
        if (a[i]<min)
        {
           min=a[i];
           x=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            y=i;
        }
        
   }
   int i=max;
   int j=min;
   int tmp=a[x];
   a[x]=a[y];
   a[y]=tmp;
   
   for (int i = 0; i <n; i++)
   {
    printf("%d ",a[i]);
   }
   
   
   
    return 0;
}