#include<stdio.h>
int main()
{
   char x;
   scanf("%c",&x);
   if(x>= 'a' && x<= 'z')
   {
    //choto hater
    int Ans=x-32;
     printf("%c",Ans);
   }
   else{
    int Ans = x+32;
     printf("%c",Ans);
   }
    return 0;
}