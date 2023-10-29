#include<stdio.h>
int main()
{
   char c;
   scanf("%c",&c);
   if(c>='a'&& c<'z')
   {
    int ans=c+1;
    printf("%C",ans);
   }
   else
   {
    int ans =c-25;
    printf("%c",ans);
   }

    return 0;
}
