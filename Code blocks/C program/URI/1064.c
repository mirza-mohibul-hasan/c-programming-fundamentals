#include<stdio.h>
int main()
{
 float x,sum=0,avg;
 int count=0,i;


 for (i=0;i<6;i++)
 {
  scanf("%f",&x);
  if(x>0)
    {
     count++;
     sum=sum+x;
    }
 }

 avg=sum/count;


 printf("%d valores positivos\n", count);
 printf("%.1f\n",avg);

 return 0;
}

