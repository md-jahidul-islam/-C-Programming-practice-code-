#include<stdio.h>

 /*
        return_type name ( parameters )
        {
            code 
            return what?
        }
*/

  int sum(int x , int y) //x=10,y=20
  {
    //code
    int sum = x+y;
    return sum;
  }

int main()
{
    printf("%d\n",sum(10,20));
    printf("%d\n",sum(1000,2000));
    return 0;
}