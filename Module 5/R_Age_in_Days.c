#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int year,month,day;
   if (n>=0)
   {
        year = n/365;
        printf("%d years\n",year);
   }
   if (n>=0)
   {
        month = (n%365)/30;
         printf("%d months\n",month);
   }
   if (n>=0)
   {
        day = (n%365)%30;
         printf("%d days\n",day);
   }
   
    return 0;
}
