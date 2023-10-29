#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   scanf("%s",a);
   //sortcut, etai use korbo, strlen() --> header file #include<string.h>
   int st=strlen(a);
   printf("%d\n",st);
//    int count=0;
     //    while loop use kore length ber korlam

//    int i=0;
//    while (a[i]!='\0')
//    {
//         count++;
//         i++;
//    }

      //    for loop use kore length ber korlam

//    for (int i = 0; a[i]!='\0'; i++)
//    {
//         count++;
//    }
//    printf("%d\n",count);
   
    return 0;
}