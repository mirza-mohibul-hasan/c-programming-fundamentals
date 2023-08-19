#include<stdio.h>
void main()
{
   int i,x,y,max,min,sum=0;
   scanf("%d %d",&x,&y);
   if(x>y)
   {
       max =x;
       min=y;
   }
   else
   {
       max=y;
       min =x;
   }
   for(i=min;i<=max;i++)
   {
       if(i%13 != 0)
       {
           sum=sum+i;
       }
   }
   printf("%d\n",sum);

}
