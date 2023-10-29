#include<stdio.h>
int main()
{    int t;
    scanf("%d",&t);
    int x,y,odd=0,odd1=0,odd2=0;
   if (x>y)
   {
    for (int i = 5; i <=6; i++)
    { 
        scanf("%d %d",&x,&y);
        if (i%2==1)
        {
            odd+=i;
        }
        
    }
    printf("%d\n",odd);
   }
   
    
    for (int i = 10; i >=4; i--)
    { 
        scanf("%d %d",&x,&y);
        if (i%2==1)
        {
            odd1+=i;
        }
        
    }
    printf("%d\n",odd);
    for (int i = 4; i <=9; i++)
    { 
        scanf("%d %d",&x,&y);
        if (i%2==1)
        {
            odd2+=i;
        }
        
    }
    printf("%d\n",odd);
    
   
    return 0;
}