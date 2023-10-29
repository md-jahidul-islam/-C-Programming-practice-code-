#include<stdio.h>
#include<string.h>
int main()
{
   char n[100005];
   scanf("%s",&n);
   for (int i = 0; i < strlen(n); i++)
   {
        if (n[i]==',')
        {
           n[i]=' ';
        }
        else if (n[i]>='A' && n[i]<='Z')
        {
            n[i]=n[i]+32;
        }
        else{
            n[i]=n[i]-32;
        }
   }
   printf("%s",n);
    return 0;
}
