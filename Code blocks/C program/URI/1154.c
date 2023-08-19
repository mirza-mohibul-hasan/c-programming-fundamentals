#include<stdio.h>
void main()
{
    int I,sum=0,count=0;
    double avg;
    while(1)
    {
        scanf("%d",&I);
        if(I<0)
        {
            break;
        }
        sum=sum+I;
        count++;
    }
    avg=sum/(1.00*count);
    printf("%.2lf\n",avg);

}
