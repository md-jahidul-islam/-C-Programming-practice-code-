#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
//    gets(a);
   fgets(a,19,stdin);//standard
//    a[17]='\0';
   printf("%s ",a);
    return 0;
}