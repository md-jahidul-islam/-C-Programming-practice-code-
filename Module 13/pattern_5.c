#include<stdio.h>
int main()
{
   //test case input
   int t;
   scanf("%d",&t);
   for (int i = 1; i <= t; i++)
   {
        //pattern Working procedure
        int row;
        scanf("%d",&row);
        int space = row -1;
        int star=1;
        for (int i = 1; i <= (2*row-1); i++)
        {
            //space print er kaj korbo ekhane

            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            //star print er kaj korbo ekhane
            for (int j = 1; j <= star; j++)
            {
                printf("*");
            }
            if (i<=row -1)
            {
                space--;
                star+=2;
            }
            else {
                space++;
                star-=2;
            }
            
        
            printf("\n");
            
            
        }
     
    }
   
    return 0;
}