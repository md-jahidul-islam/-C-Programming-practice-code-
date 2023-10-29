#include<stdio.h>
int main()
{
//    char a[]={'R','a','h','a','t'}; //No gurantee
   char a[]="Rahat"; //gurantee
    int sz=sizeof(a)/sizeof(char);
    printf("%d ",sz);
//    printf("%s ",a);
    return 0;
}