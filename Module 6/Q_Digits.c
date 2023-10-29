#include<stdio.h>
int main()
{
   int text;
   scanf("%d",&text);
   for (int t = 1; t <=text; t++)
   {
    int n;
    scanf("%d",&n);
    do
    {
        printf("%d ",n%10);
        n=n/10;
    } while (n!=0);
    printf("\n");
    

   }

   
    return 0;
}