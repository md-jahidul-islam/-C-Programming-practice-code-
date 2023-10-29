#include<stdio.h>
int main()
{
//    int a[] = {1,2,34,2,5};
//    int sz =sizeof(a);
//    printf("size: %d\n",sz);
   int a[5];
   a[0]=10;
   a[1]=3;
   a[2]=23;
   for (int i = 0; i < 6; i++)
   {
        scanf("%d",&a[i]);
   }
    for (int i = 0; i < 6; i++)
   {
       printf("%d\n",a[i]);
   }
   

    return 0;
}