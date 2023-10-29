#include<stdio.h>
// void fun(int *ar /*ar[]*/,int n)
// {
//     // int sz=sizeof(ar)/sizeof(int);
//     // printf("%d\n",sz);
//     for (int i = 0; i < n; i++)
//     {
//          printf("%d ",ar[i]);
//     }
    
// }
// int main()
// {
//    int ar[5]={10,20,30,40,50};
// //    int sz=sizeof(ar)/sizeof(int);
// //     printf("%d\n",sz);
//    fun(ar,5) ;
//     return 0;
// }
void fun(double *ar /*ar[]*/,int n)
{
    // int sz=sizeof(ar)/sizeof(int);
    // printf("%d\n",sz);
    for (int i = 0; i < n; i++)
    {
         printf("%0.2lf ",ar[i]);
    }
    
}
int main()
{
   double ar[5]={10.5,20.2,30.67,40.8,50.1};
//    int sz=sizeof(ar)/sizeof(int);
//     printf("%d\n",sz);
   fun(ar,5) ;
    return 0;
}