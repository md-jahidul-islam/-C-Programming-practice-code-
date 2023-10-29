#include<stdio.h>
int main()
{
   //char array --> string
   //sizeof()
   char a[5];
   int sz=sizeof(a)/sizeof(char);
   printf("%d %d %d",sizeof(char),sizeof(a),sz);
  
//    int ar[5];
//    for (int i = 0; i < 5; i++)
//    {
//         scanf("%c",&ar[i]);//space nijei ekta char
//    }
//    for (int i = 0; i < 5; i++)
//    {
//         printf("%c\n",ar[i]);
//    }
   
   
    return 0;
}