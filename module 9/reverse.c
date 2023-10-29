#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   for (int i = 0; i < n ; i++)
   {
        scanf("%d",&ar[i]);
   }
   int i=0,j=n-1;
   while (i<j)
   {
        int tmp=ar[i]; //tmp hocche temporary file, ar[i] er value k save kore rakhe.
         
        ar[i]=ar[j];
        ar[j]=tmp;
        i++;
        j--;
   }
   
   for (int i = 0; i < n; i++)
   {
        printf("%d ",ar[i]);
   }
   
   
    return 0;
}