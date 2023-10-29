#include<stdio.h>
#include<string.h>
int main()
{
    // string compare or lexicographical compare er shortcut method.
   char a[100],b[100];
   scanf("%s %s",a,b);
   int value= strcmp(a,b);
   if (value<0)
   {
        printf("A is smaller\n");

   }
   else if (value>0)
   {
        printf("B is smaller\n");
   }
   else{
    printf("Same\n");
   }
   
   
    return 0;
}